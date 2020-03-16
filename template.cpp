#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

template <class T>

T add(T a , T b)
{
    if( a > b)
    {
        cout<<a <<endl;
    }
    else{

        cout<<b<<endl;
    }
}

int main()
{
    add(10,2);
    add("A", "Z");
    add('A', 'Z');
    return(0);
}
