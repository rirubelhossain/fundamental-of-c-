#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m , i , j , temp , n , counter ;


    cin>>n ;
    cin>>m ;

    int array[n];

    for( i = 0 ; i < n ; ++i)
        scanf("%d", &array[i]);

    for(i = 0 ; i < n - 1 ; ++i)
    {
        for(j = i + 1 ; j < n ; ++j)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; ++i)
        cout<<array[i]<<" ";

//    for( int i = 0 , j = 1; i < n ; ++i)
//    {
//        if(array[i] )
//    }

    return(0);
}
