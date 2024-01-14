#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cmath>
#define pb push_back
#define sort(v) sort(v.begin(),v.end());
#define rep(n) for(i=0;i<n;i++)
#define gcd(x,y) __gcd(x,y)
#define lcm(x,y) (x*y)/gcd(x,y)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
using ll=long long;
using namespace std;
const int N=1e6+2;
const int X=1e9+7;

void G(){

    string s; cin>>s;
    int n=s.size();
    int i,j=n-1;
    int b1=0,b1_=0,b2=0,b2_=0,b3=0,b3_=0;
    int flag=1;
    int in1=0,in2=0,in3=0;

    for(i=0;i<n;i++){

        //1st bracket case:
        if(s[i]=='(') {
            b1++; in1=1;
        }
        if(in1==1){
            if(s[i]==')'){b1++; in1=0;}
            else flag=0;
        }
        if(in1==0 && s[i]==')')flag=0;

        //2nd bracket case:
        if(s[i]=='{') {
            b2++; in2=1;
        }
        if(in2==1){
            if(s[i]=='}'){b2++; in2=0;}
            else if(in1==0 && s[i]=='('){b1++; in1=1;}
            else flag=0;
        }
        if(in1==0 && s[i]=='}')flag=0;

        //3rd bracket case:
        if(s[i]=='[') {
            b3++; in3=1;
        }

        if(in3==1){
            if(s[i]==']'){b3++; in3=0;}
            if(in2==0 && s[i]=='{'){b2++; in2=1;}
            else if(s[i]=='('){b1++; in1=1;}
            else flag=0;
        }

        if(in3==0 && s[i]==']') flag=0;


    }
    if((flag==1)) {
        if(!in1 && !in2 && !in3==0) yes;
        else no;
    }
    else no;
}


int main()
{
	/*ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);*/

	int t; cin>>t;
	while(t--)G();
	return 0;
}