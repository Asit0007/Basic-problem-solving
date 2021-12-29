#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;

    while(i<=n) {

        int j=1;
        
        while(j<=i) {
            char c='A'+i-1;
            cout<<c<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}
