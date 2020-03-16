#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int m , n , counter ;

    while(scanf("%d%d", &n ,&m ) != EOF)
    {
        int array[n];

        for(int i = 0 ; i < n ; ++i)
        {
            scanf("%d", &array[i]);
        }

        for(int i = 0 ; i < n - 1 ; ++i)
        {
            for(int j = i + 1 ; j < n ; ++j)
            {
                if(array[i] > array[j])
                {
                    int temp ;
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }

        for(int i = 0 ; i < n ; ++i)
            printf("%d ", array[i]);
    }

    return(0);
}
