#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a , b , i , j ;

    int n ;

    scanf("%d", &n );

    while(1)
    {
        a = n % 16 ;

        if( a < 16 )
        {
            switch(a)
            {
            case 10 :
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",a);
            }
            continue;

      ///      break;
        }
        n /= 16 ;
       // printf("%d", n);
        if(n <= 15)
        {
            break;
        }
    }


    return(0);
}


