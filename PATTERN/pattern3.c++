#include<iostream>
using namespace std ;

/*ptint pattern
1234
1234
1234
1234
*/
int main (){
    int n;
    cout<<"enter value of n\n";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}