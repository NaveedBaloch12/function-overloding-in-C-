//Function overloading.....
#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}

int sum(int a, int b, int c)
{
	return a+b+c;
}

int main()
{
	int x=5, y= 8, z= 12;
	cout<<"Sum of 5 and 8 is: "<<sum(x,y)<<endl;
	cout<<"Sum of 5, 8 and 12 is: "<<sum(x,y,z)<<endl;
	return 0;
}

