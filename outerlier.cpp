#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;

    printf("enter your total elements \n");
    scanf("%d", &n);
    int n1 = n ;

    int array[n];

    for(int i = 0 ; i < n ; ++i)
        scanf("%d", &array[i]);

    /// this part for sorting

    for(int i = 0 ; i < n - 1 ; ++i)
    {
        for(int j = i + 1 ; j < n ; ++j)
        {
            int temp ;

            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp ;
            }
        }
    }

    for(int i = 0 ; i < n ; ++i)
        printf("%d ", array[i]);

    printf("\n");

    double Q1 , Q2 , Q3 ;

   /// cout <<n1<<endl;



    Q1 = ((n1/(float)4)*1) ;
    Q2 = ((n1/(float)4)*2) ;
    Q3 = ((n1/(float)4)*3) ;

    printf("%lf\n", Q1 );
    printf("%lf\n", Q2 );
    printf("%lf\n", Q3 );

    if( Q1 - (int)Q1 != 0)
    {
        Q1 = ceil(Q1);
        printf("%d\n", array[(int)Q1]);
    }
    else if(Q1 - (int)Q1 == 0)
    {
        double a_q1 = (array[(int)Q1] + array[(int)Q1+1]/(float)2);

    }

    if( (Q2 - (int)Q2) != 0)
    {
        Q2 = ceil(Q2);
        printf("%d\n", array[(int)Q2]);
    }
    else {

        double a_q2 = (array[(int)Q2] + array[(int)Q2+1]/2);
    }
    if((Q3 - (int)Q3) != 0)
    {
        Q3 = ceil(Q3);
        printf("%d\n", array[(int)Q3]);
    }
    else{

        double a_q3 = (array[(int)Q3] + array[(int)Q3+1]/2);
    }

  ///  Q1 = ceil(Q1);




    return(0);
}
