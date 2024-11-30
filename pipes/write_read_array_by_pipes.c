#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

#define len_array 5
#define READ_END 0
#define WRITE_END 1

int main() {
    int fd[2];
    pid_t pid;
    if(pipe(fd) == -1){
        printf("pipe failed");
        return 1;
    }
    pid = fork();
    if(pid < 0){
        printf("fork failed");
        return 1;
    }
    else if(pid > 0){
        close(fd[READ_END]);
        int numeros_father[len_array];
        for (int i = 0; i < len_array; i++){
            printf("\nEnter the number [%d]: ", i);
            scanf("%d", &numeros_father[i]);
        }
        write(fd[WRITE_END], numeros_father, sizeof(numeros_father));
        printf("\nfinish entering numbers\n");
        close(fd[WRITE_END]);
    }
    else{
        int numeros_son[len_array];
        close(fd[WRITE_END]);
        read(fd[READ_END], numeros_son, sizeof(numeros_son));
        printf("\nThe numbers is : \n");
        for(int i = 0; i<len_array; i++){
            printf("%d \n", numeros_son[i]);
        }
        close(fd[READ_END]);
    }
    return 0;
  }