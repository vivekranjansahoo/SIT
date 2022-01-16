#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the first number : ");
	scanf("%d",&x);
	printf("Enter the second number : ");
	scanf("%d",&y);
	
	printf("\nBefore swap x=%d y=%d\n",x,y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("\nAfter swap x=%d y=%d\n",x,y);
	
	return 0;
}
