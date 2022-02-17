#include<bits/stdc++.h>
using namespace std;


void insertionSort(int arr[],int n) {
  for(int i=1;i<n;i++){
      int key=arr[i];
      int j=i-1;
      while(j>=0 && arr[j]>key){
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=key;
  }
}
int main() {
    int arr[]={2,1,7,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}