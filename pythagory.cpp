#include<iostream>
//driver program.
using namespace std;
int main()
{
    int s;
    int arr[] = { 3,4,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
      for(int j=0;j<n ;j++){
       for(int k=0;k<n && i!=j;k++){
        cout<<arr[i]<<"^2+"<<arr[j]<<"^2="<<arr[k]<<"^2"<<endl;
          if(arr[i]*arr[i]+arr[j]*arr[j]==arr[k]*arr[k] && j!=k ){
            cout<<arr[i]<<"^2+"<<arr[j]<<"^2="<<arr[k]<<"^2"<<endl;;
          }
        }
     }
    }

}