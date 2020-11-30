#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int A;cin>>A; // number of different types of papers he need to create a Single Death Note.
    
    int requ[A];  //NO OF REQUIRED
    
    int actu[A];   // actual
    
    int k[A];      // divison
    
    for (int i=0;i<A;i++){
    
        cin>>requ[i];
    }
     
    for (int i=0;i<A;i++)
     {cin>>actu[i];}

    
for (int i=0;i<A;i++){

     k[i]=actu[i]/requ[i];

}

int s=k[0]; // for least value of k

for (int i=1;i<A;i++){

    if (s>k[i]){
       s=k[i];
    }
}

cout << s;

return 0;}

    
    
   
