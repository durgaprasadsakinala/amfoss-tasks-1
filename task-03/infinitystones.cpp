#include <cmath>  // infinity stones;
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int n;int m;int k;vector<int >s;vector<int >a;int t;cin>>t;int x;



            for (int j=0;j<t;j++){
                cin>>n>>m>>k;
            for(int i=0;i<m;i++){cin>>x;s.push_back(x);            }
             for(int i=0;i<m;i++){cin>>x;a.push_back(x);}


            sort(a.begin(),a.end());
            reverse(a.begin(),a.end());
            x=0;
            for (int i=0;i<k;i++){

                x=x+a[i];


            }

            if(x>=n){

                cout<<"YES"<<endl;
            }else{cout<< "NO"<<endl; }



















            }





    return 0;
}
