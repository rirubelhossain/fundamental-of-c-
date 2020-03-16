#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int i , count , a , b ;


    scanf("%d%d", &a,&b);
    count = 0 ;

    for(int j = 1 ; j <= b ; ++j)
    {
        ++count;

        if(count == a)
        {
            printf("%d\n", j );
            count = 0 ;
            continue;
        }
        printf("%d ", j );

    }

    return(0);
}
