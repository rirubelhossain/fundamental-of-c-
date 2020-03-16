#include <iostream>
#include <cstdio>
/// binary operator overloading
using namespace std;
class Number{

    int x , y ;///private member variable
public:
    Number(){ x = 0 ; y = 0 ;}
    Number(int a , int b){ x = a ; y = b;}

    void get(int &a , int &b){ a = x ; b = y ;}

    void set( int a , int b) { x = a ; y = b ;}
    void print() { cout<<x<<" "<<y<<endl;}
    Number operator - (Number ob);
};
Number Number :: operator - (Number ob)
{
    Number tmp ;
    tmp.x = x - ob.x ;
    tmp.y = y - ob.y ;

    return(tmp);
}
int main()
{
    Number n1(1,2) , n2(3,2) , n3 ;
    n1.set(1,10);
    n2.set(9,0);
    n3 = n1 - n2 ;
    n3.print();

    Number n4 , n5 , n6 ;
    n4.set(20,0);
    n5.set(0,20);
    n6 = n4 - n5 ;
    n6.print();
    Number n7 , n8 , n9 ;

    n9 = n7 - n8 ;
    n9.print();


    return(0);
}
