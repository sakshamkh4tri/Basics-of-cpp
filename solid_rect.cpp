// solid rectangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int n ;
// cout<<"enter the num ";
// cin>>n;
// for(int i=1; i<=n; i++){  //always bahar wala loop rows
//     for(int j=1; j<=5; j++){ //column
//         cout<<"*";
//     }
//     cout<<"\n";
// }
// return 0;
// }


//solid square

#include<iostream>
using namespace std;
int main()
{
int r,c;
cout<<"Enter the number of rows ";
cin>>r;
cout<<"Enter the number of column ";
cin>>c;

for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
        cout<<"* ";
    }
    cout<<"\n";
}
return 0;
}