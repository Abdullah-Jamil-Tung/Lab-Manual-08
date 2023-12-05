/*1. Take an array and find the most repeated element in that array.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int n, a[n], most_rptd=0, count;
	cout<<"Enter the number of elements : ";
	cin>>n;
	cout<<endl;
	
	cout<<"Enter the number values\n\n";
	int i=0;
	while (i<n)
	{
	cout<<"Enter Value #"<<i+1<<" : ";
	cin>>a[i];
	i++;	
	}
    cout<<endl;
    
    //Checking for single most repeated element
	for (int i=0; i<n; i++)
	{
	count=1;	
	for (int j=i+1; j<n; j++)
	{
	if (a[i]==a[j])
	{count++;}}
	if (count>most_rptd)
	{most_rptd=count;}
	}
	//Checking for multiple most repeated elements
    for (int i=0; i<n; i++)
	{
	count=1;	
	for (int j=i+1; j<n; j++)
	{
	if (a[i]==a[j])
	{count++;}}
	if (count==most_rptd)
	{cout<<"Element "<<a[i]<<" was repeated "<<most_rptd<<" times."<<endl;}
	}
}
