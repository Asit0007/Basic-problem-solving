#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"\nEnter number of rows : ";
    cin>>n;

    int i=1;

    while(i<=n) {

        int j=1;
        char c='*';
        

        while(j<=(n-i+1)) {
            cout<<c;
            j++;
        }
       
        cout<<"\n";
        i++;
    }
}
