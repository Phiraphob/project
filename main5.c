#include<stdio.h>

int main()
{
    int A,B;
    printf("Input number1 ");
    scanf("%d",&A);
    printf("Input number2 ");
    scanf("%d",&B);
    if(A>B){
        printf("%d > %d",A,B);
    }else if(A<B){
        printf("%d < %d",A,B);
    }else{
        printf("%d = %d",A,B);
    }
    return 0;
}
