#include <iostream>
#include <queue>

using namespace std;
int main(){
    priority_queue<int>maxi;

    priority_queue<int,vector<int>, greater<int>>mini;

    maxi.push(1);
    maxi.push(2);
    cout<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }
}