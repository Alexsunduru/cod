#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int num;
    cin>>num;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
        }
    }
}
int dif=9999999;
for(int i=0;i<=n-num;i++)
{
    int k=a[num+i-1]-a[i];
    if(k<dif)
    {
        
        dif=k;
    }
}
cout<<dif;
return 0;
}
    
    