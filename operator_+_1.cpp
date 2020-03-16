#include <iostream>
#include <cstdio>

using namespace std;

class number{

    int a , b ;
public:
    number()
    {
        a = 0 ;
        b = 0 ;
    }
    number(int x, int y)
    {
        a = x ;
        b = y ;
    }
    void get(int &x , int &y)
    {
        a = x;
        b = y;
    }
    void set(int x , int y)
    {
        a = x ;
        b = y ;
    }
    void cout_()
    {
        cout<<a <<" "<<b<<endl;
    }
    number operator + (number obj);
};
number number :: operator + (number obj)
{
    number tmp ;
    tmp.a = a + obj.a;
    tmp.b = b + obj.b;

    return(tmp);
}
int main()
{
    number n1(1,3), n2(4,3) , n3;

    n3 = n1 + n2 ;

    n3.cout_();

    cout<<endl;

    number n4 , n5 , n6 ;

    n4.set(1,3);
    n5.set(4,3);

    n6 = n4 + n5 ;

    n6.cout_();

    return (0);
}
