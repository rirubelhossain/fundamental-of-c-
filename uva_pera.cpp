#include <bits/stdc++.h>


using namespace std;
void p(long long n , int count)
{
    while(1)
    {
        long long re = 0 , r , o ;

        o = n ;

        while(o)
        {
            r = o % 10 ;
            re = (re*10) + r ;
            o /= 10 ;
        }
        if(re != n)
        {
            ++count;
            n += re ;
        }
        else{
            cout<<count <<" "<<re<<endl;
            return;
        }
    }
}
long long first(long long n)
{
    long long re = 0, r ;

    while(n)
    {
        r = n % 10 ;
        re = (re * 10) + r ;
        n /= 10 ;
    }
    return(re);
}
int main()
{
    long long n , d ;
    int counter ;
    int m ;

    cin>>m ;///for the test case

    while(m--)
    {
        cin>>n ;
        counter = 0 ;
        d = first(n);
        if( n == d)
        {
            ++counter;
            n += d ;
            p(n,counter);
        }
        else
            p(n,counter);
    }

    return(0);
}
