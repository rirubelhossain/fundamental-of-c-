#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int N , A , sum , i ;

   /// cin>>N>>A ;
    int t ;
    //scanf("%d", &t);
    while(scanf("%d%d", &N,&A) != EOF)
    {
        sum = 0 ;
        for( i = 1 ; i <= N ; ++i)
        {
            sum += (i*A^i);
        }
        ///cout<<sum<<endl;
        printf("%d\n",sum);
    }


    return(0);
}
