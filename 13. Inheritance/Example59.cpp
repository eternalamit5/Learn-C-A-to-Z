#include <iostream>

using namespace std;
int main()
{
	int *a;
	int x=5;
	a=&x;
	cout<<*a<<endl;
	
	cout<<a<<endl;
	
	a=0;
	cout<<a;
}
