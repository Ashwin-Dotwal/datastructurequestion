#include<iostream>

using  namespace std;
int prime(int n){ 
    for(int i=2;i<n;i++){ 
    if(n%2==0){ 
        cout<<" not prime"<<endl;
    }else{ 
        cout<<"prime"<<endl;

    }
    return 0;
}

}
 int main(){
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    int prime =prime(n);
 }
