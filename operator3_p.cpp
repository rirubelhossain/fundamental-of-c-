#include <iostream>
#include <cstdio>

using namespace std;
class Number{

    int a , b ;

public:
    Number()
    {
        a = 10 ;
        b = 10 ;
    }
    Number(int x , int y)
    {
        a = x ;
        b = y ;
    }
    void set(int x , int y)
    {
        a = x ;
        b = y ;
    }
    void print()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
    Number operator * (Number obj);
};

Number Number :: operator * (Number obj)
{
    Number tmp ;
    tmp.a = a * obj.a;
    tmp.b = b * obj.b;

    return(tmp);
}

int main()
{
    Number n1 , n2 , n3 ;
    n1.set(2,4);
    n2.set(4,2);
    n3 = n1 * n2 ;
    n3.print();

    Number a , b , c ;
    c = a*b;
    c.print();
    return(0);
}
