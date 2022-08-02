#include<iostream>
#include<string>
using namespace std;
int main(int argc, char **argv){
    
    int length;
    cout<<"Enter the length of array"<<endl;
    cin>>length;
    int *arr=(int *)malloc(sizeof(length));
    for(int i=0; i<length; i++){
        cin>>arr[i];
    }
    int p=arr[0];
    int q=0;
    int r=0;
    for(int i=0; i<length; i++){
       if(arr[i]>p)
         p=arr[i];
    }
    q=arr[0];
    for(int i=0; i<length; i++){
       if(arr[i]<p && arr[i]>q )
          q=arr[i]; 
    }
    r=arr[0];
    for(int i=0; i<length; i++){
       if(arr[i]<p && arr[i]<q && arr[i]>r)
          r=arr[i]; 
    }
    cout<<p+q+r<<endl;
    return 0;
}