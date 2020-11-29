#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;long long int v[100];long long int x;
    v[0]=1;v[1]=2;
    for(int i=2;i<100;i++){
        v[i]=v[i-1]+v[i-2];

    }
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;x=0;
x=2;
for(int i=2;i<100;i++){
    if(v[i]%2==0 &&v[i]<n&&v[i]>0){
    x=x+v[i];}else if(v[i]>n){break;}


}



cout<<x<<endl;







    }
    return 0;
}
