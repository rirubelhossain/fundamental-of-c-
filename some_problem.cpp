#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;
void reverse(int n )
{
    int a , b , c ,d ;
    int re = 0 ;

    a = n ;

    while(n)
    {
        b = n % 10 ;

        re = (re*10) + b ;

        n /= 10 ;
    }
    if( a == re)
    {
        cout<<"true"<<endl;
    }
    else{
        ///cout<<"false"<<endl;
        reverse(n+re);
    }
    cout<<re<<endl;
    cout<<a<<endl;
}

int main()
{
//    int n , i , a ;
//
//    cin>>i ;
//
//    n = pow(10,i) - 1;
//    a = pow(10,i) / 10 ;
////    cout<<n<<endl;
////    cout<<a<<endl;
//    for(int i = a ; i <= n ; ++i)
//        cout<<i<<" ";
    int n ;
    cin>>n ;
    reverse(n);
    return(0);
}
