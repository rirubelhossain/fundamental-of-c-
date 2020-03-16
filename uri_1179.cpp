#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a , b , i , j , k , c_odd, c_even;
    int impar[5] , par[5],num[15];

    j = 0 ;
    k = 0 ;
    for(i = 0 ; i < 15 ; ++i)
    {
        scanf("%d", &num[i]);
        if(num[i] & 1)
        {
            impar[j] = num[i] ;
            ++j ;
            if(j == 5 )
            {
                for(int i = 0 ; i < 5 ; ++i)
                    printf("impar[%d] = %d\n",i, impar[i]);
                j = 0 ;
            }
        }
        else{
            par[k] = num[i] ;
            ++k ;
            if(k == 5 )
            {
                for(int i = 0 ; i < 5 ; ++i)
                    printf("par[%d] = %d\n",i, par[i]);
                k = 0 ;
            }
        }
    }
    for(int i = 0 ; i < j ; ++i)
        printf("impar[%d] = %d\n",i , impar[i]);

    for(int i = 0 ; i < k ; ++i)
        printf("par[%d] = %d\n",i,par[i]);

    return(0);
}
