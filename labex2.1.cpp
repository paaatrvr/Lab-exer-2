#include <iostream>
using namespace std;

int main()
{
	int x, y, z; 
	
	cout<< "Enter two integers: ";
	cin>>y;
	cin>>z;
	
	int max = x; 

	if (y > max) 
	{ 
		max = y;
	} 

	if (z > max) 
	{ 
		max = z;
	}
    
    cout<<"Answer is "<<max<<endl;
    
	return 0;
}
