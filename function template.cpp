#include<iostream>
using namespace std;
template <class T>
T maxim(T x,T y)
{
	return x>y?x:y;
}

int main()
 {
	 cout<<maxim(12,13)<<endl;
    cout<<maxim(2.3f, 4.5f)<<endl;
     return 0;
	 }
