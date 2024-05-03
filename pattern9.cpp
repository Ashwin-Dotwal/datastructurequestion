#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; 
    // inverted full paramid pattern

     for(int i=0;i<n;i++){ 
        
        for( int j=0;j<n-i-1;j++){ 
            cout<<" ";

            }
            for(int k=0;k<i+1;k++){ 
                cout<<"* ";
            }
    
        cout <<endl;
     }
// //inverted full p[yramid]
	 for(int row=0; row<n; row=row+1) {
	 	//spaces
	for(int col=0; col<row+1; col = col + 1) {
	 		cout << " ";
	 	}

	 	//stars
	 	for(int col=0; col<n-row-1; col = col + 1) {
	 		cout << "* ";
	 	}
	 	cout << endl;
 }

}