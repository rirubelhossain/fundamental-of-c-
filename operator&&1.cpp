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
        cout<<a<<b<<endl;
    }
    bool operator && (number obj);
};
bool number :: operator && (number obj)
{

    return(a&& b) && (obj.a&&obj.b);
}

int main()
{
    number n1(1,3) , n2(3,5), n3 ;

    if(n1 && n2)
    {
        cout<<"true\n";
    }
    else{
        cout<<"false\n";
    }
    return(0);
}
