#include <iostream>
using namespace std;

int main(){
    int n,s,e,key;
    cout<<"eneter the element to serch"<<endl;
    cin>>key;
    int arr[100];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    s=0;
    e=n-1;
    int mid=(s+e)/2;

    while(s<=e){
        if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]==key){
            cout<<"element find in this array"<<endl;
            break;
        }
        else{
            e=mid-1;
            mid=(s+e)/2;
        }
    }
    if(s>e){
        cout<<"element not found"<<endl;
    }
    return 0;
}