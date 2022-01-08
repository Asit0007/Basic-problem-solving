#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;

    while(i<=n) {

        int j=1;
        char c='A'+i-1; 
        while(j<=n) {
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<"\n";
        i++;
    }
}
