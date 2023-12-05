/*2. Let’s say an array is a[8] = {13, 15, 17, 9, 99, 77, 65, 43}. Find largest and smallest element.*/

#include<iostream>
using namespace std;

int main()
{
	int a[8] = {13, 15, 17, 9, 99, 77, 65, 43}, temp;
	
	for (int i=0; i<8; i++)
	{
	for (int j=0; j<8; j++)
	{
	if (a[j]>a[j+1])
	{temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;}	
	}
	}
	cout<<"The smallest element is "<<a[0]<<"."<<endl;
	cout<<"The largest element is "<<a[7]<<"."<<endl;
}
