/*2. Implement Bubble Sort on an array of 5 integers.*/

#include<iostream>
using namespace std;

int main()
{
	//Declaing variables and assigning values
	int tempo, a[6] = {45, 84, 24, 91, 69};
	
	//Computing bubble sort
	for (int i=0; i<5; i++)
	{
	for (int j=0; j<5; j++)
	{if (a[j+1] < a[j])
	{tempo = a[j];
	a[j] = a[j+1];
	a[j+1] = tempo;}}
	}
	
	//Displaying output
	cout<<"Bubble Sort = ";
	for (int i=0; i<5; i++)
	cout<<a[i]<<" ";
}
