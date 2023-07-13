#include<stdio.h>
void main()
{
    int a;
    printf("Enter your marks: ");
    scanf("%d",&a);
    if(a>=90){
        printf("You got A+");
    }
    else if(a>=80){
        printf("You got A");
    }
    else if(a>=70){
        printf("Yout got B+");
    }
    else if(a>=60){
        printf("You got B");
    }
    else{
        printf("You failed");
    }
}