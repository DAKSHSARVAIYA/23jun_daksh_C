#include <stdio.h>
int main ()
{
	int Eng,Sci,Maths,Ss,Guj;
		float Total,Average,Percentage;
	
	printf("please Enter the marks of five subjects: \n ");
	scanf("%d%d%d%d%d",&Eng,&Sci,&Maths,&Ss,&Guj);
	
	Total = Eng+Sci+Maths+Ss+Guj;
	Average = Total/5;
	Percentage =(Total/500)*100;
	
	printf("Total Marks= %.2f\n",Total);
	printf("Average Marks= %.2f\n",Average);
	printf("Marks Percentage = %.2f",Percentage);
	
	return 0;
}
