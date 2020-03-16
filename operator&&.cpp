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
    number(int a , int b)
    {
        x = a ;
        y = b ;
    }
    void get(int &a , int &b)
    {
        x = a ;
        y = b ;
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
    bool operator && (number ob);
};
bool number :: operator && (number ob)
{
    return((a && b)&&(ob.a && ob.b));
}
int main()
{
    number n1(1,3) , n2(3,2),n3 ;

    if( n1 && n2)
    {
        cout<<"ok"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return(0);
}
