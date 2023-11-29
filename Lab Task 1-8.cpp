/*1. Write a C++ program to calculate average of numbers of array.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int n, a[n], avg, sum;
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<endl;
	
	cout<<"Enter the number values\n\n";
	for (int i=0; i<n; i++)
	{
	cout<<"Enter Value #"<<i+1<<" : ";
	cin>>a[i];	
	}
	//Computing and displaying output
	for (int i=0; i<n; i++)
	{
	sum+=a[i];
	}
	avg=sum/n;
	cout<<"The average of numbers of array is "<<avg<<"."<<endl;
}
