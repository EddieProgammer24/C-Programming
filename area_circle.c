# include<stdio.h>

int main(){

    const float PI = 3.142;
    double radius;
    double area;

    printf("\nEnter the radius of the circle:");
    scanf("%lf",&radius);

    area = PI * radius * radius;

    printf("\nArea:%lf",area);


    return 0;
}