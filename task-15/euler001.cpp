#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    
    int s;int n;
    cin >> s; int a;
    
    for(int a0 = 0; a0 < s; a0++){
        a=0;
        cin >> n;
    for(int i=1;i<n;i++){
        if(i%3==0||i%5==0){
            a=a+i;
            
        }
        
        
    }
    
            cout<<a<<endl;
 }
    return 0;
}

