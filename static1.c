#include <stdio.h>

void counter(void){
    
    static int count = 1; //只初始化一次
    printf("%d\n", count);
    count++;
}

int main(void)
{
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
}