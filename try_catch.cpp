#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string b = "rubel";
    try{
        cout<<"try"<<endl;
        throw b;
    }
    catch(string a)
    {
        cout<<"catch "<<a<<endl;
    }
    return(0);
}
