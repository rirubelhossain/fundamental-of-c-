#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int A, N ;

    int i ;

    cin>> A ;
    cin>> N ;
    int sum = N ;

    while( N != 0 )
    {
        sum = sum + A ;
        --N ;
    }
    cout<<sum<<endl;


    return(0);
}
