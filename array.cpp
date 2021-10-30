#include <iostream>
#include <array>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int basic[n];//NOrmal representation
    array<int,4> a={12,2,2,3};//stl representation
    int size=a.size();
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    cout<<"The element at this index is : "<<a.at(2)<<endl;//Returns the value at index at index number 2
    cout<<"The array is empty or not :"<<a.empty()<<endl;//Returns zero if it is not empty
    cout<<"The first element in the array is : "<<a.front()<<endl;
    cout<<"The last element in the array is"<<a.back()<<endl; 
}