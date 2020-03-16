#include <bits/stdc++.h>

using namespace std;

int main()
{
    int impar[5] ,par[5] ;

    int counter1 , counter2 ;
    int i = 0 , n ;
    counter1 = 0 ;
    counter2 = 0 ;
    int l = k = 0 ;
    for( ; i < 15 ; ++i)
    {
        cin>> n ;
        if(n&1)
        {
            impar[l] = n ;
            ++counter1;++l;
            //cout<<n<<endl;
            if(counter1 == 5)
            {
                l = 0 ;
                counter1 = 0 ;
            }
        }
        else{
            par[k] = n ;++k;
            ++counter2;
            if(counter2 == 5)
            {
                k = 0 ;
                counter2 = 0 ;
            }
        }
    }
    return(0);
}
