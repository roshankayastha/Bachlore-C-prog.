#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a: "); // getting the value of a
	scanf("%d",&a);
	printf("Enter the value of b: "); // getting the value of b
	scanf("%d",&b);
	printf("Enter the value of c: "); // getting the value of c
	scanf("%d",&c);
	if(a>b){ // checking if the value of a is greater than c
		if(a>c){ // if a is greater than c then following message will be displayed.
			printf("The largest number is a");
		}
		else{ // if a is not greater than c then following message will be displayed.
			printf("The largest number is c");
		}
	}
	else if(b>c){ // if the value of a is not greater than c then it will check if the value of b is greater than c
		printf("The largest number is b"); // if the condition is true then it will display this msg.
	}
	else{
		printf("The largest number is c"); //else this message will be displayed.
	}
}
