#include<iostream>
using namespace std ;
/*make this pattern

***
***
***

*/

int main (){
    int n;
    cout<<"enter value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    
}