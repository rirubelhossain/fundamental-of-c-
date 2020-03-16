#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

void function()
{
    int rev=0,r,n;
    cin>>n ;
    while(n)
    {
    r=n%10;
    rev=rev*10+r;
    n/=10;
    }
    cout<<rev;
}

int main(int argc, char const *argv[])
{
    /**
	int a  , b , c , sum = 0 ;
	cin>>a ;
	int i = 0 , array[100];
	while(a != 0)
	{
		b = a % 10 ;
		sum += (b)*(pow(10,i));
		++i;
		a /= 10 ;
	}int j = i - 1;
	c =  0 ;
	a = sum ;///
///	cout<<a<<sum<<endl;
	while(sum != 0)
	{
		b = sum % 10 ;
		c += (b)*(pow(10,j));
		j--;
		sum /= 10 ;
	}
	cout<<c+a<<endl;
    **/
    function();
	return 0;
}
