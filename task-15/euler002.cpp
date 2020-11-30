#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int b;
    cin >> b;long long int a[100];long long int y;
    a[0]=1;a[1]=2;
    for(int i=2;i<100;i++){
        a[i]=a[i-1]+a[i-2];

    }
    for(int a0 = 0; a0 < b; a0++){
        long n;
        cin >> n;y=0;
y=2;
for(int i=2;i<100;i++){
    if(a[i]%2==0 &&a[i]<n&&a[i]>0){
    y=y+a[i];}else if(a[i]>n){break;}


}
cout<<y<<endl;


}
    return 0;
}
