#include<stdio.h>

int main()
{
    int x = 10000;
    printf("Before = %d\n",x);
    int m = 5;
    x*=m;
    printf("Total = %d\n",x);
    int k = 400;
    x+=k;
    printf("Total = %d\n",x);

    return 0;
}
