#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 0 , b  = 1, c = 0 ;

    int i ;int sum = 0 ;

    for(i = 1 ; i <=4  ; ++i)
    {

        sum += c;
        c = a + b ;

        a = b ;
        b = c ;
        printf("%d \n",sum);

    }
    return(0);
}
