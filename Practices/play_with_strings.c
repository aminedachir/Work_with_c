#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char name[5];
char a[5] = "";
int main()
{
    scanf("%s\n",&name);
    for(int i=0;i<1500;i++){
        strcat(a," ");
        printf("%s",name);
        //sleep(2);
        getche();
        printf("%s",a);
    }
}
