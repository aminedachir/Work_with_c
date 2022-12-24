#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = { "dar" };
    int h = strlen(str) - 1;
    for (int i=0;i<=h;i++) {
        if (str[i] != str[h--]) {
            printf("%s is not a palindrome\n", str);
            return 1;
        }
    }
    printf("%s is a palindrome\n", str);
    return 0;
}
