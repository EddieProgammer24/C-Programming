#include<stdio.h>

int main(){

    int Score;

    printf("Enter you marks:\n ");
    scanf("%lf",&Score);

    if(Score>=0 & Score<=33){
        printf("\nE");
    }else if (Score>33 & Score<=40)
    {
        printf("\nD");
    }else if(Score>40 & Score<=55){
        printf("\nC");
    }else if (Score>55 & Score<=65)
    {
        printf("\nB");
    }else if (Score>65 & Score <=70)
    {
        printf("\nA");
    }else
    printf("Invalid Input");
    return 0;
}