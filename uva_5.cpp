#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
    int n , r , a ;

    cin>>n ;

    r = 0 ;
    /**
    rev=0,r
    while(n)
    {
    r=n%10
    rev=rev*10+r
    n/=10
    }
    <<rev
    **/
    int m ;
    m = n ;
    while(n)
    {
        a = n % 10 ;

        r = r * 10 + a ;

        n /= 10;
    }
    if( m == r)
    {
        printf("palindrom\n");
    }
    else{
        printf("not_pelindrome\n");
    }
    cout<<n<<endl;
    cout<<r<<endl;
    return(0);
}
