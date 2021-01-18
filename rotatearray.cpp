#include<iostream>
using namespace std;

void rotateByOne(int a[], int n)
{
  int i, temp;
  temp = a[0];
  for (i = 0; i < n-1; i++)
     a[i] = a[i+1];
  a[i] = temp;
}
 

void rotateArray(int a[], int d, int n)
{
  int i;
  for (i = 0; i < d; i++)
    rotateByOne(a, n);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
    rotateArray(a,d,n);
    cout<<"{";
    for(int i=0;i<n;i++){
        cout<<a[i];
        cout<<" ";
    }
    cout<<"}";
    return 0;
}
