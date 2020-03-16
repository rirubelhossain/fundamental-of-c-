#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a , sum , n , counter , T , array[1000] , cont;double total , percent;

    scanf("%d", &T);///for the test case

    while(T--)
    {
        scanf("%d", &n);
        sum = 0 ;
        counter = 0 ;
        for(int i = 0 ; i < n ; ++i)
        {
            scanf("%d", &array[i]);
            sum += array[i] ;
            ++counter ;
        }
        total = (double)sum / (double)counter;/// find out average
        cont = 0 ;
        for( int i = 0 ; i < n ; ++i)
        {
            if( array[i] > total)
            {
                ++cont;
            }
        }
        percent = (((double)cont / (double)n) * 100) ;///percentage calculation
        printf("%.3lf%%\n",percent);
    }

    return(0);
}
