#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> a;
    a.push(17);
    a.push(15);
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
}