#include<iostream>
#include<string>
using namespace std ;
int main ()
{
	int *1= NULL;
	1= new int ();
	int *v= new int (23);
	if (!1)
	{
		cout<<"bad memory allocation"<<end1;
	}
	else
	{
		cout <<" memory allocation successfully"<<end1;
		*1=20;
		cout<<"*1="<<*1<<end1;
		cout<<"*v="<<*v<<end1;
		
	}
double *arr = NULL;
arr= new double[20];
if(!arr)
{cout<<"memory not allocated"<<end1;}
else
{
	for (int k=0;k<20;k++)
	arr[k]=k+1;
	cout<<"arr values:";
	for (int k=0;k<20;k++)
	cout<<arr[k]<<"\t";
}
delete 1;
delete v;
delete[]arr;
return 0
}
