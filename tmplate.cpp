#include <iostream>
#include <cstdio>

using namespace std;
template <class T>
class man
{	
	 T value ;
	 T value_1 ;
public:
	man()
	{
		cout<<"man is grate\n";
	}
	T get_area();
	void set(T a , T b);
};
template <class T>
T man<T> :: get_area()
{
	return(value*value_1);
}
template <class T>
void man<T> :: set(T a , T b)
{
	value = a ;
	value_1 = b ;
}
int main(int argc, char const *argv[])
{	
	man<int>ob;
	ob.set(10,10);
	cout<<"the result will be ";
	cout<<ob.get_area()<<endl;;
	return 0;
}