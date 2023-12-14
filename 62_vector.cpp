#include <iostream>
#include <vector>
using namespace std;
    // vectors in c++ are sequence containers represent arrays 
    //that can change it size(an dynamic array)     
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6};
    //v1.push_back(5);
    //v1.pop_back();
    /*cout << v1.back() << endl;
    //cout << v1.size() << endl;
    cout << v1.capacity() << endl;*/
    
    // insert
    //v1.insert(v1.begin(), 9);
    //v1.insert(v1.begin()+1, 7);
    //v1.erase(v1.begin());
    //cout << v1[0] <<"\n";
    
    //loop
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }
    cout << endl;
    //or we can loop like this
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout<< *i << endl;
    }
    return 0;
}
