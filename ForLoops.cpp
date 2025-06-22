// mazedar form of for loop

#include<iostream>
using namespace std;
int main()
{
int i=1;
for(;i<=20;){ //twist ; is imp wo bhi dono baar 
    cout<<i<<" ";
    i++;

}
return 0;
}

//print all the even number from 1 to 100

//question 1


// #include<iostream>
// using namespace std;
// int main()
// {
//     int mul=1;
//     for(int i=1; i<11; i++){
//         cout<<"19 X "<<i<<" = "<<19*i<<endl;
        
//     }

// return 0;
// }


//question 2

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=4 ; i<=3*n+1; i+=3){
//     cout<<i<<" ";

// }
// return 0;
// }


//question 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int a=1;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a=a*2;

//     }
// return 0;
// }


//question 4;

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// int factor;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=1; i<n; i++){
//     if(n%i==0){
//         cout<<i<<" ";
//         factor=i;
//     }
// }
// cout<<endl<<"Highest factor of the number is: ";
// cout<<factor;
// return 0;
// }

             //OR

// #include<iostream>
// using namespace std;
// int main()
// {
// int n;
// cout<<"Enter the number: ";
// cin>>n;
// for(int i=n/2; i>=1; i--){
//     if(n%i==0){
//         cout<<i<<" ";
//         break;
//     }
// }
// return 0;
// }             