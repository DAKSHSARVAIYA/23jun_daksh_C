#includ<stdio.h>
int main ()
{
	int num 1,num 2,temp;
	printf("Enter First Number and Second Number to Swap=");
	scanf("%d%d",&num1,&num2);
	printf("before swapping values of variables: First Number =%d\n",num1);
	printf("before swapping values of variables: Second Number =%d\n",num2);
	/*now we swap values with the help of third variable called temp*/
	temp = num1;
	num1= num2;
	num2=temp;
	
	printf("After swapping : First Number =%d Second Number =%d",num1,num2);
	return 0;
}
