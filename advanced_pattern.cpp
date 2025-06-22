// 1.  star plus

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter num of rows ";
// cin>>n;
// int mid = (n/2)+1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(i==mid || j==mid){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

// 2. hollow rectangle

// #include<iostream>
// using namespace std;
// int main()
// {
// int r,c;
// cout<<"Enter num of rows ";
// cin>>r;
// cout<<"Enter num of column ";
// cin>>c;
// for(int i=1; i<=r; i++){
//     for(int j=1; j<=c; j++){
//         if(i==1 || j==1 || i==r || j==c){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }

//     }
//     cout<<endl;
// }
// return 0;
// }

// 3. star cross

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter num of rows ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(i==j || i+j==n+1){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// 4. ** star triangle reverse

// METHOD--> 1
// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter num of rows ";
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(i+j>=n+1){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }

//     }
//     cout<<endl;
// }
// return 0;
// }
// METHOD---> 2

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter num of rows ";
// cin>>n;
// for(int i=1; i<=n; i++){     // for rows
//         for(int j=1; j<=n-i; j++){  // for spaces
//                 cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){   // for stars
//                 cout<<"* ";
//         }
//         cout<<endl;
// }
// return 0;

// 5.

// #include <iostream>
// using namespace std;
// int main()
// {
//         int r;
//         cout << "Enter num of rows ";
//         cin >> r;

//         for (int i = 1; i <= r; i++)
//         {
//                 for (int j = 1; j <= i; j++)
//                 {
//                         cout<< "*";
//                 }
//                 cout << "\n";
//         }

//         return 0;
// }


   