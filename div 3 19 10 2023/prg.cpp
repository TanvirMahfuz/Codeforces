#include<bits/stdc++.h>
const int N=100;
using namespace std;
vector <int> graph[N];
queue<int> q[N];
vector<int> visited(N);
void BFS(int source);
int main(){
    int i,j,k,x,y;
    int n;cin>>n;
    for(i=0;i<7;i++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    BFS(1);
}

void BFS(int source){
    
    while()


}