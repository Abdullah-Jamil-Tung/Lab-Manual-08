/*3. Implement Selection Sort on an array of 5 integers.*/

#include<iostream>
using namespace std;

int main()
{
	int a[5]={9, 86, 73, 75, 34}, num;
	
	for (int i=0; i<5; i++)
	{
	num=a[i];
	for (int j=i; j<5; j++)
	{
	if (num>a[j])
    {
    num = a[j];
    a[j] = a[i];
    a[i] = num;
	}}}
	cout<<"Selection sort : ";
	for (int i=0; i<5; i++)
	{
	cout<<a[i]<<" ";
	}
}
