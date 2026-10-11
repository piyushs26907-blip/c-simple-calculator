#include <stdio.h>
int main()
{
    float a,b;
	char op;
	printf("Enter First no.");
	scanf(" %f", &a);

   printf("Enter Second No.");
	scanf(" %f", &b);
	
	printf("Enter the operator");
	scanf(" %c", &op);
	
	if(op=='+'){
		printf("result=%f", a+b);
	}
	else if(op=='-')
	{
		printf("result=%f", a-b);
	}
	else if(op=='*')
	{
		printf("result=%f", a*b);
	}
	else if(op=='/')
	{
		if(b!=0)
		{
			printf("result=%f", a/b);
				}
		else
		{
			printf("invalid operator");
			
	}	
		}
		return 0;
}