#include <stdio.h>
#include <string.h>

int main(void)
{
    //字符串的复制
    char s[] = "Hello, world!";
    char t[100];

    strcpy(t, s);

    t[0] = 'z';

    printf("%s\n", s);
    printf("%s\n" ,t);
    return 0;
}
