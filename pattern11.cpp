#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    // inverted full paramid pattern

     for(int i=0;i<n;i++){ 
        
        for( int j=0;j<2*i+1 ;j++){ 
            if(i==0||i==n){ 
                cout<<"*";
            }else{ 

            
            cout<<" ";

            }
        }
            for(int k=0;k<i+1;k++){ 
                cout<<"* ";
            }
    
        cout <<endl;
     }
// //inverted full p[yramid]
	 for(int row=0; row<n; row=row+1) {
	 	//spaces
	for(int col=0; col<2 *row+1; col = col + 1) {
    if(col==0||col==row)
	 		cout << " ";
	 	}

	 	//stars
	 	for(int col=0; col<n-row; col = col + 1) {
	 		cout << "* ";
	 	}
	 	cout << endl;
 }

} 