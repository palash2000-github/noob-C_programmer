#include <iostream>
using namespace std;

int main() 

{

int arr[101]={0};

for(int i=1;i<=100;i++)
{

for(int j=i;j<=100;j+=i)

{

if(arr[j]==0){

arr[j]=1;

}

else
{

arr[j]=0;

}

}

}

int ans =0;

for(int i=1;i<101;i++)
{

if(arr[i]==1)ans++;

}

cout<<ans;

return 0;

}