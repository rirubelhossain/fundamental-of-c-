#include <bits/stdc++.h>

using namespace std;

int main()
{
    int impar[5] , par[5] , i , j , c_even , c_odd;
    int a ;
    int l , k ;
    l = 0 ;
        k = 0 ;
        c_even = 0 ;
        c_odd = 0 ;
    for(i = 1 ; i <= 15 ; ++i)
    {
        cin>>a ;

        if( a & 1 )
        {
            impar[l] = a ;


          //  printf("impar[%d] = %d\n",l , a);
            ++l;
            ++c_odd;
            if( c_odd == 5)
            {
                l = 0 ;
                c_odd = 0 ;

                for(int i = 0 ; i < 5 ; ++i)
                    printf("impar[%d] = %d\n",i , impar[i]);
            }
        }
        else{
            par[k] = a ;

          ///  printf("par[%d] = %d\n",k , a);
            ++k;
            ++c_even;
            if(c_even == 5)
            {
                k = 0 ;
                c_even = 0 ;

                for(int i = 0 ; i < 5 ; ++i)
                    printf("par[%d] = %d\n",i , par[i]);
            }
         ///   cout<<"even"<<endl;
        }

    }
    ///cout<<c_even<<endl;
    ///cout<<c_odd<<endl;

    for(int i = 0 ; i < c_even ; ++i)
        printf("par[%d] = %d\n",i,par[i]);
    for(int i = 0 ; i < c_odd ; ++i)
        printf("impar[%d] = %d\n",i,impar[i]);

    return(0);
}
