#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int t ;

    int a , b ;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &a,&b);
        int c , d ;
        c = a ;
        d = b ;
        a = a % 10 ;
        b = b % 10 ;

        if(a == b && (c >= d))
        {
            {
               printf("encaixa\n");
            }
        }
            else{
            printf("nao encaixa\n");
        }
    }

    return(0);
}
