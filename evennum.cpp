 #include<iostream>
 using namespace std;
 int evennum(int num){ 
    for(int i=0;i<num;i++){ 
        cout<<2*i<<endl;
    }
 }
 int main(){ 
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
    int even=evennum(num);
    cout<<even<<endl;
 }
