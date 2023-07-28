#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);
    if(a > b)   //Comparision operator
    {
        printf("A is maximum number.");
    }
    else
    {
        printf("B is maximum number");
    }
    return 0;
}
