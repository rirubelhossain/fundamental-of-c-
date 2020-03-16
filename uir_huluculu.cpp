#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int year ;
    int t ;

    while(scanf("%d", &year) != EOF)
    {

        if(year < 2000)
        {
            return(0);
        }
        else{
            if(((year % 4 == 0)&&(year % 100 != 0) ||(year % 400 == 0)))
        {
            if(year % 55 == 0)
            {
                printf("This is leap year.\n");
                printf("This is bulukulu festival year.\n\n");
            }
            else if(year % 15 == 0){
                printf("This is leap year.\n");
                printf("This is huluculu festival year.\n\n");
            }
            else{
                printf("This is leap year.\n\n");
            }
        }
        else if(year % 15 == 0)
            {
                printf("This is huluculu festival year.\n\n");
            }
            else{

                printf("This is an ordinary year.\n\n");
            }

        }

    }

    return(0);
}
