#include <iostream>
#include <cstdio>

using namespace std ;

int main()
{

   /// int i , i ;
    int sum = 0 ;
    int array[3][3];

    for(int i = 0 ; i < 3 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            cin>>array[i][j];
            sum += array[i][j];
        }
    }

    for(int i = 0 ; i < 3 ; ++i)
    {
        for(int j = 0 ; j < 3 ; ++j)
        {
            cout<<array[i][j]<<endl;;
        }
    }
    cout<<sum<<endl;

    return(0);
}
