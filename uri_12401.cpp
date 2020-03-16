#include <iostream>
#include <cstdio>

using namespace std;

void function(int a , int b)///this is function definition
{
    int c , n , m , counter = 0 , i = 0 ;///declaration area

    while((a!=0) || (b != 0))
    {
        if( b== 0)
        {
            break;
        }
        n = a % 10 ;
        m = b % 10 ;
        ++i;
        a /= 10 ;
        b /= 10 ;
        if( n == m)
            ++counter;
    }
    if(i == counter)
        printf("encaixa\n");
    else
        printf("nao encaixa\n");
}
int main()
{
    int a , b , t ;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &a,&b);
        function(a,b);/// function calling form main function
    }
    return(0);
}
