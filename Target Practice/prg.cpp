#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solve();
int point(int x,int y){
    //one point 
    if((x==0 or x==9) or (y==0 or y==9)) return 1;
    //2 point
    else if(x==1 or x==8){
        if(y>0 or y<9)
            return 2;
        else return 1;
    }
    //3 point
    else if(x==2 or x==7){
        if(y==1 or y==8)
        return 2;
        else if(y>1 or y<8)
        return 3;
        else return 1;

    }
    //4 point
    else if((x==3 or x==6)){
        
        if(y==2 or y==7)
        return 3;
        if(y==1 or y==8)
        return 2;
        if(y>2 or y<7)
        return 4;
        else return 1;
        

    }
    //5 point
    else if((x==4 or x==5)){
        if(y==3 or y==6)
            return 4;
        if(y==2 or y==7)
            return 3;
        if(y==1 or y==8)
            return 2;
        if(y>3 or y<6)
            return 5;
        else return 1;
    }
    return 1;
}
int main()
{
    fast
    int t;cin>>t;while(t--)solve();
}
void solve()
{
    int i,j,k=0;
    vector <int> vec;

    char arr[10][10];
    rep(10){
        for (j=0;j<10;j++){
            char a;
            cin>>a;
            if(a=='.')
                continue;
            else 
           { 
            //cout<<"point :"<<point(i,j)<<endl;
            k+=point(i,j);
            }
        }
    }
    cout<<k<<endl;
    return;
}

