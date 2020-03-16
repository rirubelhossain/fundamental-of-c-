#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a , b , c ;

    cin>>a>>b ;

    int n , m , o , rv = 0 , r = 0 ;

    n = a ;
    m = b ;
    while(n)
    {
        r = n % 10 ;
        rv = (rv*10)+r ;
        n/=10;
    }
  ///  cout<<rv<<endl;
    int rv_1 = 0 , r_1;
    while(m)
    {
        r_1 = m % 10;
        rv_1 = (rv_1*10)+r_1;
        m /= 10 ;
    }
  ///  cout<<rv_1<<endl;
  o = 0 ; int p ;
  cout<<rv<<endl;
  while(rv)
    {
        p = rv % 10 ;
        o = (o*10)+p ;
        rv/=10;
    }
    cout<<o<<endl;
    int rvv_1 = 0 , rv_2 ;
    while(o)
    {
        rv_2 = o % 10;
        rvv_1 = (rvv_1*10)+rv_2;
        o /= 10 ;
    }
    cout<<rvv_1<<endl;
    return(0);
}
