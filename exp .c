#include<stdio.h>
int main()
{
	char ch;
	int a,b, result;
	printf("Enter an operator:");
	scanf("%c",&ch);
	printf("Enter two operator:");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
		case'+':
		result=a+b;
		break;
		case'-':
		result=a-b;
		break;
		case'*':
		result=a*b;
		break;
		case'/':
		result=a/b;
		break;
		case'%':
		result=a%b;
		break;
	}
	printf("The result is %d",result);
	return 0;
}

