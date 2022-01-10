#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=1;
    
    //loop for columns
    while(i<=n) {

        int j=1;
        
        //loop for rows
        while(j<=n) {
            if (j>=count) {
                cout<<j;
            }
            
            else {
                cout<<" ";
            }
            
            j++;
        }
        count++;
        cout<<"\n";
        i++;
    }
}

/*

Sample input:
Enter number of rows : 5

Expected output:
12345
 2345
  345
   45
    5

*/
