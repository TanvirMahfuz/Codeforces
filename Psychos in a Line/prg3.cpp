#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define rep(n) for(int rep_i=0;rep_i<n;rep_i++) // change loop variable name
using namespace std;
void solve();
int fsize=0;
bool change=false;
int main()
{
    //fast
    int t=1;while(t--)solve();
}

void solve()
{
   int n, rep_i, j; // change loop variable name
   cin >> n;
   stack<int> st;
   vector<int> vec(n);
   unordered_map<int,int>mp; 
   rep(n) {
      cin >> vec[rep_i];
   }
   int maxheight = vec[0];
   int steps = 0, prevsteps = 0;
   int localStep = 0, globalStep = 0;
   st.push(maxheight);
   for (rep_i = 1; rep_i < n; rep_i++) // use the new loop variable
   {//std::cout<<vec[rep_i]<<"---> enters the domain"<<endl;
      if (vec[rep_i - 1] > vec[rep_i]) {
        //std::cout<<vec[rep_i]<<" will die at round 1."<<endl;
         steps = 1;
         mp[vec[rep_i]]=steps;
         localStep = max(localStep, steps);
         continue;
      }

      else {
         if (vec[rep_i] > maxheight) {
            //std::cout<<"Reched Max Height ."<<endl;
            st.push(vec[rep_i]);
            maxheight=vec[rep_i];
            globalStep=max(globalStep,localStep);
            //std::cout<<"   reached Maxheight of "<<vec[rep_i]<<endl;
            //std::cout<<"     achieved golobal height of "<<globalStep<<endl;
         } 
         
         else if (vec[rep_i] > st.top() and vec[rep_i] < maxheight) {
            
               while(st.top()!=maxheight){
                if(vec[rep_i]>st.top()){
                    steps=max(mp[vec[rep_i]],mp[st.top()]+1);
                    mp[vec[rep_i]]=steps;
                    //std::cout<<"..."<<st.top()<<"->will be popped..."<<endl;
                    //std::cout<<"steps of ["<<st.top()<<"] = "<<mp[st.top()];
                    //std::cout<<" and steps of ["<<vec[rep_i]<<"] = "<<mp[vec[rep_i]]<<endl;
                    
                    st.pop();
                    
                }
                else break;
               }
               //std::cout<<vec[rep_i]<<" will survive until round "<<steps<<endl;
                    st.push(vec[rep_i]);
                    mp[vec[rep_i]]=steps;
                    localStep=max(localStep,steps);
                    
         } 
         
         else {
            //std::cout<<"  "<<vec[rep_i]<<" survived round "<<steps<<endl;
            steps++;
            mp[vec[rep_i]]=steps;
            st.push(vec[rep_i]);
            localStep=max(localStep,steps);
         }
      }
     
   }
    globalStep=max(globalStep,localStep);
      //std::cout<<" gobalStep is now "<<globalStep<<endl;
   std::cout << globalStep << endl;

   return;
}
