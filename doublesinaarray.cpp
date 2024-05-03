#include<iostream>
using namespace std;
   int main(){
    int arr[100];
    int n;
    cout<<"how many number you want toadd in arr"<<endl;
    cin>>n;
      cout<<"enter the value of n"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
      }
for(int i=0;i<n;i++){
    cout<<2*arr[i];
}
return 0;
} 