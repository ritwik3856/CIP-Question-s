#include<bits/stdc++.h>
using namespace std;

int  countdis(int arr[],int n) {
    unordered_set<int>s;
    for(int i=0;i<n;i++) {
        s.insert(arr[i]);
    }
    return s.size();

}
int main(){
    int arr[]{15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countdis(arr,n);
    return 0;
}