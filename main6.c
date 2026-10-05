#include<stdio.h>

int main()
{
    char grade;
    int score;
    printf("Input score");
    scanf("%d",&score);

    if(score>=80){
        grade='A';
    }else if(score>=70){
        grade='B';
    }else if(score>=60){
        grade='C';
    }else if(score>=50){
        grade='D';
    }else if(score<50){
        grade='F';
    }
    printf("Grade = %c",grade);
     return 0;
}
