#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main()
{
    vector <long long unsigned int>v ;
    vector <string>v_1;

    int i ;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5345345534534534534);
    v_1.push_back("rubel");
///    v.at[3] = pop_back(2);
    for(long long unsigned i = 0 ; i < v.size(); ++i)
    {
        cout<<v[i]<<endl;;
    }
    ///cout<<v_1[0]<<endl;
    cout<<endl;

    v.insert(v.begin() + 0,10);
    for(long long unsigned i = 0 ; i < v.size(); ++i)
    {
        cout<<v[i]<<endl;;
    }

    v.erase(v.begin() + 5);

    for(long long unsigned i = 0 ; i < v.size(); ++i)
    {
        cout<<v[i]<<endl;;
    }

    if(v.empty())
    {
        cout<<"That's empty "<<endl;
    }
    else{
        cout<<"Not empaty "<<endl;
    }

    v.clear();

    if(v.empty())
    {
        cout<<"That's empty "<<endl;
    }
    else{
        cout<<"Not empaty "<<endl;
    }



    return(0);
}
