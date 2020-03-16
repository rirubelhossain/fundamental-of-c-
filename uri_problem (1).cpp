#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    int inital_h , inital_m , final_h , final_m ;

    scanf("%d%d%d%d", &inital_h,&inital_m,&final_h,&final_m);

    int a , b ;

    a = final_h - inital_h ;

    a = fabs(a);

    b = final_m - inital_m;

    b = fabs(b);

    cout<< a <<endl;

    cout<< b <<endl;

    return(0);
}
