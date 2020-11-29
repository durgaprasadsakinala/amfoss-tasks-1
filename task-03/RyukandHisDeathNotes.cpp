#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int N;cin>>N;
    int req[N];
    int act[N];
    int k[N];
    for (int i=0;i<N;i++){
        cin>>req[i];
    }
     for (int i=0;i<N;i++)
     {cin>>act[i];}

for (int i=0;i<N;i++){

     k[i]=act[i]/req[i];

}

int f=k[0];

for (int i=1;i<N;i++){

    if (f>k[i]){
       f=k[i];
    }
}

cout << f;







return 0;}

    
    
   
