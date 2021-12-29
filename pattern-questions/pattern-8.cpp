#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    int i=1;
    char c='A';
    
    //loop for columns
    while(i<=n) {
        int j=1;
        
        //loop for rows
        while(j<=i) {
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}
