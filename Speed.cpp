#include <iostream>
using namespace std;

int main() 
{
    float u,v,a,speed;
	cout<<"Program to find speed"<<endl<<"Input the values of v,u,a"<<endl;
	cin>>u>>v>>a;
	speed=(v*v-u*u)/(2*a);
	cout<<"The speed is : "<<speed;
	
	return 0;
}