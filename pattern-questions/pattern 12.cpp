#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=n;
    
    //loop for columns 
    while(i<=n) {

        int j=1;
        char c='*';
        
        //loop for rows
        while(j<=n) {
            if (j>=count) {
                cout<<c;
            }
            
            else {
                cout<<" ";
            }
            
            j++;
        }
        count--;
        cout<<"\n";
        i++;
    }
}
