#include<iostream>
using namespace std;
int main()
{
for(int i=1; i<=20; i++){
    if(i==18){
        continue; // used to skip a specific iteration
    }
    else{
        cout<<i<<" ";
    }
}
return 0;
}