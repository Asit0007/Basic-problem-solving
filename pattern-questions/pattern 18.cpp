#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=n;
    int start=1;
    
    //loop for columns
    while(i<=n) {

        int j=1;
        
        //loop for rows
        while(j<=n) {
            if (j>=count) {
                cout<<start<<"\t";
                start++;
            }
            
            else {
                cout<<"\t";
            }
            
            j++;
            
        }
        count--;
        
        cout<<"\n";
        i++;
    }
}

/*

Sample input:
Enter number of rows : 4

Expected output:
                        1
                2       3
        4       5       6
7       8       9       10

*/
