#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n){
    for(int i=n-1;i>0;i--){
        int swapped=false;
        for(int j=n-1;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped=true;

            }
        }
        if(swapped==false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    return selection_sort(arr,n);
}