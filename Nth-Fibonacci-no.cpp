#include<iostream>
using namespace std;

int fibonaci(int n) {
    int a=0;
    int b=1;
    int sum=0;
    
    //traversing the numbers
    for(int i=0;i<n-2;i++) {
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;

}

int main() {
    //taking user input
    int n;
    cin>>n;
    int ans = fibonaci(n);
    cout<<"The "<<n;
    cout<<"th fibonaci no is : "<<ans<<endl;
    
}
