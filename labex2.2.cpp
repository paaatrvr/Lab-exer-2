#include<iostream>
using namespace std;

int main() 
{
	int a,x,factorial=1;
	cout<<" Enter a number: ";
	cin>>x;
	
	for (int a=1;a<=x;a++) 
	{
		factorial=factorial*a;
	}
	cout<<"The answer is: "<<factorial<<endl;
	return 0;
}
