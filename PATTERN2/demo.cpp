// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter the pattern times:"<<" ";
    cin>>n;
    int i,j;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
            // We use it to shift the cursor to a couple of spaces to the right in the same line
        }
        cout<<endl;
    }

  return 0;  
}