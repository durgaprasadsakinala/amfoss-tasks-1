#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main (){
int k;
cin>>k;
int n;
n=(k+1)/2;

for (int i=1;i<=n;i++){

    for (int j=1;j<=n-i;j++){cout << '*';}
    for (int j=1;j<=2*i-1;j++){cout << 'D';}
    for (int j=1;j<=n-i;j++){cout << '*';}
cout <<endl;}
n=n-1;
for(int i=n;i>=1;i--){
for(int j=1;j<=n-i+1;j++){cout<<'*';}
for (int j=1;j<=2*i-1;j++){cout << 'D';}
for(int j=1;j<=n-i+1;j++){cout<<'*';}
cout<< endl;
}
return 0;}



























