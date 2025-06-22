//question 1

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the positive number: ";
//     cin>>x;
//     if(x%2==0){
//         cout<<"Entered number is even";
//     }
//     else{
//         cout<<"Entered number is odd";
//     }
// }


//question 2


// #include<iostream>
// using namespace std;
// int main(){
//     int sp,cp;
//     cout<<"Enter the cost price: ";
//     cin>>cp;
//     cout<<"Enter the selling price: ";
//     cin>>sp;
//     if(sp>cp){
//         cout<<"profit"<<endl;
//         cout<<"shopkeeper has made a profit of: ";
//         cout<<sp-cp;
//     }
//     if(sp<cp){
//         cout<<"Loss"<<endl;
//         cout<<"shopkepper has made a loss of: ";
//         cout<<cp-sp;

//     }


//question 3


//   #include<iostream>
//   using namespace std;
//   int main(){
//     int x;
//     cout<<"Enter any number: ";
//     cin>>x;
//     //syntax of ternary operator
//     //(condition)?(if true):(if false);

//     (x%2==0) ? cout<<"EVEN" :  cout<<"ODD";

//   }


//question 4
// calculator using switch statement



// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1;
//     cin >> n1;
//     char op;
//     cin >> op;
//     int n2;
//     cin >> n2;
//     switch (op)
//     {
//     case '+':
//         cout << n1 + n2 << endl;
//         break;
//     case '-':
//         cout << n1 - n2 << endl;
//         break;
//     case '*':
//         cout << n1 * n2 << endl;
//         break;
//     case '/':
//         cout << n1 / n2 << endl;
//         break;
//     default:
//         cout << "invalid";
//         break;
//     }

//     return 0;
// }


//question 5


// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10, y = 20;
//     if (x == y)
//         ; // if ke aage semicolon matlab if statement null ho chuki gyi h

//     cout << x << "" << y; // ye if statement ke independent h ab
//     return 0;              // yha "" ek empty string hai basically vo kuch bhi nhi kr rha
//                            // but ham " " ye lagate to output 10 20 hota
// }


//question 6


// #include<iostream>
// using namespace std;
// int main()
// {
// int x=3,y=5;
// if(x==3){
//     cout<<endl<<x<<endl;
// }
// else; // ; iska matlb else statement null hogyi aur uske neeche wala code independent ho gya h
// cout<<y;
// return 0;
// }


//question 7

#include<iostream>
using namespace std;
int main()
{
int x=3,y,z;
y=x=10;
z=x<10;

cout<<x<<""<<y<<""<<z;
return 0;
} 