#include<stdio.h>
struct student{
		char name[50];
		int age,rollno;
	};
	struct student s1;
	struct student s2;
int main(){
	printf("Enter the record of 1st student:\n");
	printf("Name: ");
	scanf("%s",&s1.name);
	printf("\nAge: ");
	scanf("%i",&s1.age);
	printf("\nRoll no: ");
	scanf("%i",&s1.rollno);
		printf("\nEnter the record of 2nd student:\n");
	printf("Name: ");
	scanf("%s",&s2.name);
	printf("\nAge: ");
	scanf("%i",&s2.age);
	printf("\nRoll no: ");
	scanf("%i",&s2.rollno);
	printf("\nFirst Student:\nName: %s\tAge: %i\tRoll No.: %i",s1.name,s1.age,s1.rollno);
	printf("\nSecond Student:\nName: %s\tAge: %i\tRoll No.: %i",s2.name,s2.age,s2.rollno);
	return 0;
}
