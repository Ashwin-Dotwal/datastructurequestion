#include<iostream>

using  namespace std;
int evenorodd(int n){ 
    if(n%2==0){ 
        cout<<"even"<<endl;
    }else{ 
        cout<<"odd"<<endl;
    }
    return 0;
}
 int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    int evenodd=evenorodd(n);
 }
