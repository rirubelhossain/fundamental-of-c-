#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t , n , a , b ,case_ = 0 ;


    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int array[n];
        a = 0 ;
        b = 0 ;

        for(int i = 0 ; i < n ; ++i)
        {
            scanf("%d", &array[i]);
        }

        for(int i = 0 ; i < n - 1; ++i)
        {
            if(array[i] > array[i+1])
            {
                ++a;
            }
            else if(array[i] < array[i+1])
            {
                ++b ;
            }
        }
        ++case_;
        printf("Case %d: %d %d\n",case_ , b , a );
    }
    return(0);
}
