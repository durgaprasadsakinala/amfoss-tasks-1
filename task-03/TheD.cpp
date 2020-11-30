#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main (){

int a; // input
    

cin>>a;

int h;

h=(a+1)/2; // dividing into half

for (int i=1;i<=h;i++){ //for first half

    for (int j=1;j<=h-i;j++){cout << '*';}
    
    for (int j=1;j<=2*i-1;j++){cout << 'D';}
    
    for (int j=1;j<=h-i;j++){cout << '*';}
cout <<endl;}

h=h-1;

for(int i=h;i>=1;i--){   //for second half

for(int j=1;j<=h-i+1;j++){cout<<'*';}

for (int j=1;j<=2*i-1;j++){cout << 'D';}

for(int j=1;j<=h-i+1;j++){cout<<'*';}

    
cout<< endl;
}
return 0;}



























