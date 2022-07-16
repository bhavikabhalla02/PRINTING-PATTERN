//  5 5 5 5 5
//  4 4 4 4
//  3 3 3
//  2 2
//  1
     
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no :"<<" ";
    cin>>n;
    int i,j;
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
            // We use it to shift the cursor to a couple of spaces to the right in the same line
        }
        cout<<endl;
    }

  return 0;  
}
