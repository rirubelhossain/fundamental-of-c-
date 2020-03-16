#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> myvector;
    myvector.push_back(3);
    myvector.push_back(7);
    myvector.push_back(4);
    myvector.push_back(5);
    myvector.push_back(6);

    cout<<"vector: ";


    for( int i = 0 ; i < myvector.size(); i++)
    {
        cout<<myvector.at(i)<<endl;;
    }

    cout<<endl;
    return(0);
}
