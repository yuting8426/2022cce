#include <stdio.h>
int main()
{
    printf("%d\n",'\0');
    printf("%d\n", 0);
    if('\0'==0)printf("it is the same\n");
}
