#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<=log2(n);i++){
        for(int j=0;j<i;j++){
            int x=n/pow(2,i-1);
            if(std::is_sorted(a + j*(x),a + (j+1)*(x))){
                cout<<n/pow(2,i-1);
                return 0;
            }
        }
    }
    cout<<1;
    return 0;
}
