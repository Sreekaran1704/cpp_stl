#include <iostream>
#include <list>

using namespace std;
int main(){
    list<int> l;
    int n,a;
    cout<<"Enter the size of the array you want to enter : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        l.push_back(a);
    }
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of the list is : "<<l.size();
}