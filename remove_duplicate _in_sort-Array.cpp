#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }sort(a,a+n);
    for(int i=0;i<n;i++){
       if(a[i]!=a[i-1]){
           count ++;
       }
    } cout<<"Length after removing duplicates: "<<count<<endl;
    cout<<"Modified array : ";
    for(int i=0;i<n;i++){
       if(a[i]!=a[i-1]){
           cout<<a[i]<<" ";
           count ++;
       }
    }cout<<endl;
    return 0;
}
