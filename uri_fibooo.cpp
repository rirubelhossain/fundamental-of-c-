
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a , b , c , d ;

    unsigned long long array[100],i , sum = 0 ;
    int t ;
    cin>>t;

    while(t--)
    {
        unsigned long long n ;
        cin>>n;
        a = 0 , b = 1 ;
        d = 0 ;
        for(i = 0 ; i <=n ; ++i)
        {
            array[i] = a ;
            c = a + b ;
            a = b ;
            b = c ;
            d = array[i];
        }
        printf("Fib(%lld) = %lld\n",n,d);
    }

    return(0);
}
