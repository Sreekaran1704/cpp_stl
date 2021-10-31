#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    int a=3;
    int b=4;
    cout<<"Max is : "<<max(a,b)<<endl;
    cout<<"MIn is :"<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    string s="Abcd";
    reverse(s.begin(),s.end());
    
}