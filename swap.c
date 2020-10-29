#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("Enter the first number :");
	scanf("%d",&a);

	printf("Enter the second number :");
	scanf("%d",&b);

	temp=a;
	a=b;
	b=temp;

	printf("the swapping is done %d & %d\n",a,b);
	return 0;
}
