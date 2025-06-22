//1. Number square 


// #include<iostream>
// using namespace std;
// int main()
// {
//     int r,c;
//     cout<<"Enter number of rows ";
//     cin>>r;
//     cout<<"Enter number of columns ";
//     cin>>c;

//     for(int i=1; i<=r; i++){
//         for (int j = 1; j <= c; j++)
//         {
//             cout<<i<<" " ;
//         }
//         cout<<"\n";

//     }

// return 0;
// }



//2. Alphabet square



// #include <iostream>
// using namespace std;
// int main()
// {
//     int r, c;
//     cout << "Enter number of rows ";
//     cin >> r;
//     cout << "Enter number of columns ";
//     cin >> c;

//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= c; j++)
//         {
//             cout << (char)(j + 64) << " ";  //typecasting--, changing ascii values to alphabet
//         }
//         cout << "\n";
//     }

               
// }


//3. Alphabet square

#include<iostream>
using namespace std;
int main()
{
int r,c;
cout<<"Enter the no of rows ";
cin>>r;
cout<<"Enter the no of columns ";
cin>>c;
for(int i=1; i<=r; i++){
    for(int j=1; j<=c; j++){
        cout<<char(i+64)<<" ";
    }
    cout<<"\n";
}
return 0;
}


//4. small alphabet square

// #include<iostream>
// using namespace std;
// int main()
// {
// int r,c;
// cout<<"Enter no of rows ";
// cin>>r;
// cout<<"Enter no of column ";
// cin>>c;
// for(int i=1; i<=r; i++){
//     for(int j=1; j<=c; j++){
//         cout<<char(j+96)<<" ";

//     }
//     cout<<endl;

// }
// return 0;
// }