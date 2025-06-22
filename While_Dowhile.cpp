// while is entry controlled loop meanwhile do while is exit controlled loop isme ek na ek bar to output ayega conform

// while loop

// #include<iostream>
// using namespace std;
// int main()
// {
// int i=1;

// while(i <=20){
//     cout<<i<<" ";
//     i++;
// }

// return 0;
// }

// do while;  code ek na ek baar to chalega

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
// do{
//     cout<<i<<endl;
//     i++;

// } while(i<=10);  //semicolon is imp
// return 0;
// }

// question 1

// #include<iostream>
// using namespace std;
// int main()
// {
// int x=1;
// while(x==1)
// x=x-1;
// cout<<x<<endl; //this is not a part of loop
// return 0;
// }

// question 2

// #include<iostream>
// using namespace std;
// int main()
// {
// int i;
// while(i=10){ //infinite loop
//     cout<<i<<endl;
//     i=i+1;
// }
// return 0;
// }


// question 3


//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//  while('a'<'b'){  //again infinite loop
//      cout<<"malyalam is palindrome"<<endl;
//  }
//  return 0;
//  }

// question 4

#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
        {
            continue;
        }
        else
            cout << x << " " << y << endl;
    }
    return 0;
}