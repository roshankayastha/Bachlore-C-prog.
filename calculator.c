#include<stdio.h>
int main()
{
	char op,temp;
	int a,b;
	int repeat=1;
	while(repeat){
	printf("Enter an operator(+,-,*,/): ");
	scanf("%c",&op);
	printf("Enter two operands: ");
	scanf("%d%d",&a,&b);
	switch(op){
		case '+':
		printf("%d + %d = %d",a,b,a+b);
		break;
		case '-':
		printf("%d - %d = %d",a,b,a-b);
		break;
		case '*':
		printf("%d * %d = %d",a,b,a*b);
		break;
		case '/':
		printf("%d / %d = %d",a,b,a/b);
		default:
		printf("Error! operator isn't valid!'");
	}
	printf("\nDo you want to perform other operations(y or n)?");
	scanf(" %c",&temp);
	if(temp=='n' || temp=='N'){
		repeat =0;
	}
}
	return 0;
}
