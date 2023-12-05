/*3. Develop a program that takes 5 array elements from user. 
Swap position [2] element with position [4] element. 
(Hint: Use the same method of swapping values we used for variables using a third variable temp).*/

#include<iostream>
using namespace std;

int main()
{
	//Declaring variables and taking inputs
	int a[5], temp;
	
	cout<<"Enter five elements\n"<<endl;
	
	for (int i=0; i<5; i++)
	{
	cout<<"Enter Value #"<<i+1<<" : ";
	cin>>a[i];
	}
	cout<<endl;
	//Computing result and displaying output
	temp=a[2];
	a[2]=a[4];
	a[4]=temp;
	cout<<"Array = ";
	for (int i=0; i<5; i++)
	{
	cout<<a[i]<<" ";
	}
}




