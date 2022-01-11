#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter no of rows ";
    cin>>n;
    
    int row=1;
    while(row<=n) {

        //print spaces on row
        int space=n-row;
        while(space) {
            cout<<" ";
            space--;
        }


        //print 1st triangle
        int col=1;
        while(col<=row) {
            cout<<col;
            col++;
        }


        //print second triangle
        int start=row-1;
        while(start){
            cout<<(start);
            start--;
        }
        cout<<"\n";
        row++;
       
    }
}

/*

Sample input:
Enter no of rows 4
   
Expected output:   
   1
  121
 12321
1234321

*/
