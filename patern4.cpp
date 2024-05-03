#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    //inverted rectengal
     for(int i=0;i<n;i++){ 
        for( int j=0;j<n-i+1;j++){ 
            cout<< i+1 ;
        }
        cout << endl;
     }
}