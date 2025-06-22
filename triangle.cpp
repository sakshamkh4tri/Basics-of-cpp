// 1. alphabet triangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int r,c;
// cout<<"Enter no of rows ";
// cin>>r;

// for(int i=1; i<=r; i++){
//     for(int j=1; j<=i; j++){
//         cout<<char(j+64)<<" ";
//     }
//     cout<<endl;

// }
// return 0;
// }


//2.  same number triangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int r,c;
// cout<<"Enter no of rows ";
// cin>>r;

// for(int i=1; i<=r; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;

// }
// return 0;
// }


//3. ** alphabet and number triangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int r;
// cout<<"Enter number of rows ";
// cin>>r;
// for(int i=1; i<=r; i++){
//     for(int j=1; j<=i; j++){
//         if(i%2==0){
//             cout<<char(j+64)<<" ";
//         }
//         else{
//             cout<<j<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }


//4. ulta triangle

#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of rows ";
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=n; j>=i; j--){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}


//5. **ulta num triangle
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the rows ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n+1-i; j++){
//         cout<<j<<" ";

//     }
//     cout<<endl;
// }
// return 0;
// }


//6. **
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter num of rows ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=n; j>=n+1-i; j--){
//     cout<<j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }


//7. odd num triangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter no of rows ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<2*j-1<<" ";    
//     }
//     cout<<endl;
// }
// return 0;
// }


//8. ** counting triangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int n; 
// cout<<"Enter num of rows ";
// cin>>n;
// int a=1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<a<<" ";
//         a++;
//     }
//     cout<<endl;
// }
// return 0;
// } 

//9. ***0 and 1 triangle (bohot tagdi obser)
 //HINT:-- jb bhi kuch pattern na bane to i+J/i-j/i*J socho 

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter number of rows ";
// cin>>n;
// for(int i=1;i<=n; i++){
//     for(int j=1; j<=i; j++){
//         if((i+j)%2==0){
//             cout<<"1"<<" ";
//         }
//         else if((i+j)%2!=0){
//             cout<<"0"<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }


