#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> myName;
    myName.assign({'m','u', 'r', 'a', 't'}); 
     for (char i:myName)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    myName.erase(myName.begin());
    for (char i:myName)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    myName.pop_back(); 
    for (char i:myName)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    myName.erase(myName.end());
    for (char i :myName)
    {
        cout<<i<<" ";
    }
    
    
  return 0;
}