#include <iostream>
#include <cstdio>

using namespace std;

class number{
    int x , y ;
public:
    number()
    {
        x = 0 ;
        y = 0 ;
    }
    number(int a, int b)
    {
        x = a;
        y = b;
    }
    void get(int &a , int &b)
    {
        a = x ;
        b = b ;
    }
    void set(int a , int b)
    {
        x = a ;
        y = b ;
    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    void operator ++();
};
void number :: operator ++()
{
    number tmp ;
    ++x , ++y;
    tmp.x = x ;
    tmp.y = y ;
}
int main()
{
    number n1(4,1) ,n2(3,4) , n3;

    cout<<"N1 -> before ";n1.print();
    ++n1;
    cout<<"N1 -> after ";n1.print();

    cout<<"N2 -> before ";n2.print();
    ++n2;
    cout<<"N2 -> after ";n2.print();

    return(0);
}
