#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
/// vector like as a list of array but isn't array are properly ....cause of array are fully allocate memory storage....like as
/// when we declare int array[4] then the memory allocate is 4 * 4 bytes = 16 bytes,,,,,suppose array[4] = 10 , 30 ;
/// we can seen the previous line i.e there two value are store ,,,,,and reaming 2 * 4 bytes .....this is problem
/// now we wont avoid this problem ....and we want to use vector function
/// like as written the blow

/// how to declare vector that is
/// vector <data_type> vector_name;

int main()
{
    vector <int> myvector ;

    myvector.push_back(10);

    for(int i = 0 ; i < myvector.size(); ++i)
    {
        cout<<myvector.at(i)<<endl;
    }
    cout<<myvector[0]<<endl;;

    vector <string> x ;
    x.push_back("rubel hossain");
    x.push_back("rasel hossain");
    x.push_back("amin hossain");
    cout<<x.at(2)<<endl;
    cout<<x.at(1)<<endl;
    cout<<x.at(0)<<endl;
    cout<<"\n\n";
    for(int i = 0 ; i < 3 ; ++i)
    {
        cout<<x.at(i)<<endl;;
    }
    cout<<x[0]<<endl;
    cout<<endl;
    vector <string> stringvector ;
    stringvector.push_back("rubel");
    stringvector.push_back("rasel");
    stringvector.push_back("amin");
    stringvector.push_back("suvo");

    for(int i = 0 ; i < stringvector.size(); ++i)
    {
        cout<<stringvector[i]<<endl;
    }
    cout<<"\n";
    stringvector.pop_back();
    vector <string>v2 ;
    v2.swap(stringvector);
    v2[0] = "tasin";

    for(int i = 0 ; i < v2.size(); ++i)
        cout<<v2.at(i)<<endl;;

    return(0);
}
