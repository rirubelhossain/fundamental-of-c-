#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a , T ;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &a);

        a = a * 5 ;
       /// a = a * a ;

        a = a * a ;

        printf("%d\n",a);
    }

    return(0);
}
