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
   vector<int> vec(n); // Use a vector instead of an array
   rep(n) {
      cin >> vec[rep_i];
   }
   int maxheight = vec[0];
   int steps = 0, prevsteps = 0;
   int localStep = 0, globalStep = 0;
   int prevHH = 0, prevLH = 0;
   int preclvl = 0;
   for (rep_i = 1; rep_i < n; rep_i++) // use the new loop variable
   {
      if (vec[rep_i - 1] > vec[rep_i]) {
         steps = 1;
         localStep = max(localStep, steps);
         continue;
      }

      else if (vec[rep_i] > vec[rep_i - 1]) {
         if (vec[rep_i] > maxheight) {
            
            globalStep = max(localStep, globalStep);
            localStep = 0;
            steps = 0; // 1372468
            prevsteps = 0;
            prevHH=0;prevLH=0;
            maxheight = vec[rep_i];
            //cout<<"   reached Maxheight of "<<vec[rep_i]<<endl;
            //cout<<"     achieved golobal height of "<<globalStep<<endl;
         } 
         
         else if (vec[rep_i] > prevHH and vec[rep_i] < maxheight) {
            if (prevHH == 0) {
               steps = 2;
               localStep=steps;
               
            } else {
                
               if (prevLH < vec[rep_i]) {
                steps=++prevsteps;
                  localStep = max(localStep + 1, steps);
                  prevLH = vec[rep_i];
               } else {
                  steps=
                  prevsteps = max(prevsteps, steps);
                  localStep = max(localStep, steps);
               }

            }
            prevHH = vec[rep_i];
            
         } 
         
         else {
            steps++;
            prevHH = vec[rep_i];
            localStep=max(localStep,steps);
         }
      }
   }
   globalStep = max(globalStep, localStep);
   std::cout << globalStep << endl;

   return;
}
