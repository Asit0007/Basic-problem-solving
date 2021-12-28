#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    int i=1;
  
  // loop for columns
    while(i<=n) {
      
        int j=1;
      
      //loop for rows
        while(j<=n) {
          
            char c='A'+i-1;
            cout<<c<<" ";
            j++;
          
        }
        cout<<"\n";
        i++;
    }
}
