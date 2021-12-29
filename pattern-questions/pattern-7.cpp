#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    
    //loop for columns
    while(i<=n) {

        int j=1;
        
        //loop for rows
        while(j<=i) {
            char c='A'+i-1;
            cout<<c<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}
