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
        
        //loops for rows
        while(j<=i) {
            char c='A'+i+j-2;
            cout<<c<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}
