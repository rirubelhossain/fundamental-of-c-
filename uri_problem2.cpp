#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    char ch[500];
    gets(ch);
    int a ;
    a = strlen(ch);

    if( a <= 80)
        printf("YES\n");

    else
        printf("NO\n");

    return(0);
}
