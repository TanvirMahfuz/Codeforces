#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int i=0;i<n;i++)
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
using namespace std;
void solve();
double calculateDistance(double x1, double y1, double x2, double y2) {
    // Euclidean distance formula: sqrt((x2 - x1)^2 + (y2 - y1)^2)
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
int main() {
    fast
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
void solve(){
    double Px,Py;cin>>Px>>Py;
    double Ax,Ay,Bx,By;
    cin>>Ax>>Ay;
    cin>>Bx>>By;

    double min_distance=calculateDistance(Ax,Ay,Bx,By);
    min_distance=min_distance/2.0;

    bool touched_zero=false,touched_home=false;
    if(calculateDistance(0,0,Ax,Ay)<=min_distance or calculateDistance(0,0,Bx,By)<=min_distance)touched_zero=true;

    if(calculateDistance(Px,Py,Ax,Ay)<=min_distance or calculateDistance(Px,Py,Bx,By)<=min_distance)touched_home=true;

    if(touched_home and touched_zero){
        double temp=max(calculateDistance(0,0,Ax,Ay),calculateDistance(Px,Py,Ax,Ay));
        double temp2=max(calculateDistance(0,0,Bx,By),calculateDistance(Px,Py,Bx,By));
        min_distance=min(min(temp,temp2),min_distance);
        cout<<setprecision(11)<<min_distance<<endl;
        return;
    }
    else {
        if(touched_zero and !(touched_home)){
            double temp=min(calculateDistance(Px,Py,Ax,Ay),calculateDistance(Px,Py,Bx,By));
            cout<<setprecision(11)<<temp<<endl;
            return;
        }
        else if(touched_home and !touched_zero){
            double temp=min(calculateDistance(0,0,Ax,Ay),calculateDistance(0,0,Bx,By));
            cout<<setprecision(11)<<temp<<endl;
            return;
        }
        else if(!touched_home and !touched_zero){
            double home=min(calculateDistance(Px,Py,Ax,Ay),calculateDistance(Px,Py,Bx,By));
            double main=min(calculateDistance(0,0,Ax,Ay),calculateDistance(0,0,Bx,By));
            double temp=max(home,main);
            cout<<setprecision(11)<<temp<<endl;
            return;
        }
    }

return;
}
