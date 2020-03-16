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
    number(int x , int y)
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
        printf("%d\n", a);
        printf("%d\n", b);
    }
    number operator + (number obj);///this is function operator overloading
    bool operator == (number obj);
    bool operator > (number obj);
    bool operator < (number obj);
};

number number :: operator + (number obj)
{
    number tp ;
    tp.a = a + obj.a;
    tp.b = b + obj.b;
    return(tp);
}
bool number :: operator == (number obj)
{
    return (a+b) == (obj.a + obj.b);
}
bool number :: operator > (number obj)
{
    return (a+b) > (obj.a + obj.b);
}
bool number :: operator < (number obj)
{
    return (a+b) < (obj.a + obj.b);
}
int main()
{
    number n1 , n2 , n3 ;
    int a , a1 , b , b1 ;
    cin>>a>>a1>>b>>b1;
    n1.set(a,a1);
    n2.set(b,b1);
    n3 = n1 + n2 ;
    n3.print();

    if( n1 == n2)
    {
        cout<<"n1 == n2"<<endl;
    }
    else if( n1 > n2)
    {
        cout<<"n1 > n2"<<endl;
    }
    else{
        cout<<"n1 < n2"<<endl;
    }
    return(0);
}
