#include<iostream>

using namespace std;
int main()
{
    cout<<"********************** Welcome to the Rajat's Calculator *********************"<<endl;
    int condition=0;
    do
    {
       cout<<"Press 0 to Exit the calculator \n";
       cout<<"Press 1 to Add two numbers\n";
       cout<<"Press 2 to Subtract two numbers\n";
       cout<<"Press 3 to Multiply two numbers\n";
       cout<<"Press 4 to Divide two numbers\n";
       cout<<"Enter your selection :";

       int a,b;
       cin>>condition;
       switch (condition)
       {

       case 1:
        cout<<"\nEnter first number :";
        cin>>a;
        cout<<"\nEnter second number :";
        cin>>b;
        cout<<"\nsum = "<<a+b<<endl;
        break;
       case 2:
        cout<<"\nEnter first number :";
        cin>>a;
        cout<<"\nEnter second number :";
        cin>>b;
        cout<<"\nsubtraction = "<<a-b<<endl;
        break;
       case 3:
        cout<<"\nEnter first number :";
        cin>>a;
        cout<<"\nEnter second number :";
        cin>>b;
        cout<<"\nmultiplication = "<<a*b<<endl;
        break;
       case 4:
        cout<<"\nEnter first number :";
        cin>>a;
        cout<<"\nEnter second number :";
        cin>>b;
        cout<<"\nDivision = "<<a/b<<endl;
        break;
       
       default:
       cout<<"\n************** Exit Rajat's Calculator ***************\n";
        break;
       }
    } while (condition!=0);
    
    return 0 ;
}