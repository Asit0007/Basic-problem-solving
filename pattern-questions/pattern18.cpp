#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;
    int count=n;
    int start=1;

    while(i<=n) {

        int j=1;
    
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
