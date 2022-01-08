#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\n enter no of rows: ";
    cin>>n;
    int i = 1;
    int count = 1;
    
    // loop for columns
    while(i<=n) {
   
        int j=1;
        
        // loop for rows
        while(j<=i) {
        
            cout<<count<<" ";
            count = count  + 1;
            j = j + 1;
            
        }
        cout<<endl;
        i = i +1;

    }
}
