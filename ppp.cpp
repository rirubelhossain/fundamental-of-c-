#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char ch[10];

    gets(ch);

    for(int i = 0 ; ch[i] != '\0'; ++i)
    {
      //  printf("%c", ch[i]);

        if(ch[i]=='A'&&ch[i+1] == '+')
        {
            printf("yes u  have got 5");
            break;
        }
        else{

            printf("not got\n");
        }
    }


    return(0);
}
