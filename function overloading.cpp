#include<iostream>
using namespace std;
int add(int x,int y)
{
 return x+y;	
}
int add(int x,int y, int z)
{
	return x+y+z;
}
float add(float x,float y)
{
	return x+y;
}
int main(){
	
 cout<<add(10,2)<<endl;
 cout<<add(10,2,4)<<endl;
 cout<<add(10.1f,2.2f)<<endl;
 return 0;
}

