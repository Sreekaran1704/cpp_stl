#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    cout<<a.top()<<endl;
    cout<<a.size()<<endl;
    a.pop();
    cout<<a.top()<<endl;
}