#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n;int m;cin>>n>>m;int num[n];int x=0;
    for(int i=0;i<n;i++){cin>>num[i];}
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){

            if(num[i]+num[j]==m &&x!=1){
                cout<<"True"<<endl;x++;
            }
        }

    }


    if(x==0){
        cout<<"False"<<endl;
    }



    return 0;
}
