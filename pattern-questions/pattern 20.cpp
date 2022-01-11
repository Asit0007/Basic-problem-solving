#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter no of rows ";
    cin>>n;
    int m=n;
    
    int row=1;
    while(row<=n) {

        //print first triangle
        int col1=1;
        while(col1<=m) {
            cout<<col1<<" ";
            col1++;
            
        }


        //print 2nd triangle
        int stars=(row-1)*2;
        while(stars) {
            cout<<"*"<<" ";
            stars--;  
        }


        //print 3rd triangle
        int col2=m;
        while(col2){
            cout<<col2<<" ";
            col2--;
        }
        cout<<"\n";
        row++;
        m--;
       
    }
}

/*

Sample input:
Enter no of rows 4

Expected output:
1 2 3 4 4 3 2 1 
1 2 3 * * 3 2 1 
1 2 * * * * 2 1 
1 * * * * * * 1 

*/
