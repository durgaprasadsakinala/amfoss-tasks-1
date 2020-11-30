#include <cmath>  
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;



int main() {int n;int m;int k;vector<int >v;vector<int >a;int t;cin>>t;int y;


            for (int u=0;u<t;u++){
                cin>>n>>m>>k;
                
                 // used vectors 
                for(int i=0;i<m;i++){cin>>y;v.push_back(y);            }
            
                for(int i=0;i<m;i++){cin>>y;a.push_back(y);}

                 //ascending order
           
                sort(a.begin(),a.end());
                 // desending order
                reverse(a.begin(),a.end());
           
                y=0;
          
                
                for (int i=0;i<k;i++){

               y=y+a[i];


            }

           if(y>=n){

                cout<<"YES"<<endl;
            }else{cout<< "NO"<<endl; }

 }

 return 0;
}
