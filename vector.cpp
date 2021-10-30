#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.back()<<endl;
}