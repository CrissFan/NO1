#include<stdio.h>

int	main(int argc, char **argv)
{
    const int a=10;
    const int *p = &a;
    printf("%d\n",a);
    a = 20;
    printf("%d",a);
}
