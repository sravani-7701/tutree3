/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int u[m+n];
    int s=min(m,n);
    int p[s];
    int v1=sizeof(a)/sizeof(a[0]);
    sort(a,a+v1);
    int v2=sizeof(b)/sizeof(b[0]);
    sort(b,b+v2);
    int i=0;
  int  j=0;
  int  k=0;
   int  l=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            u[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]==b[j]){
            p[l]=a[i];
            u[k]=a[i];
            i++;
            k++;
            j++;
            l++;
        }
        else{
            u[k]=b[j];
            k++;
            j++;
        }
    }
    if(s==m){
        for(int g=i;g<n;g++){
            u[k]=a[g];
            k++;
        }
    }
    else if(s==n){
        for(int g=j;g<m;g++){
            u[k]=b[g];
            k++;
        }
    }
    cout<<"Union : {";
    for(int i=0;i<k;i++){
        cout<<u[i];
        cout<<" ";
    }
    cout<<"}";
    cout<<endl;
    cout<<"Intersection :{";
    for(int i=0;i<l;i++){
        cout<<p[i];
        cout<<" ";
    }
    cout<<"}";
    cout<<endl;
    
    return 0;
}

