/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
using namespace std;

/*take two integers from the user.Fill in integer array of size 25 with random values
between the two numbers given by the users.
Print the array. Also try this problem with characters instead of integers. */

int main (){
    int num[25], a, b;

    cout << "Enter a integer number:  " << endl;
    cin >> a;

    cout << "Enter another integer number upper than " << (a+25) << ":  " << endl;
    cin >> b;
    if(b <= a+25){
        cout << "Invalid Input, Please enter another integer number upper than " << a+26 << endl;
    }
    else{
      /// Storing numbers in the array
      for (int i = 0; i < 25; i++) {
        num[i] = rand()%(b-a)+a;
      }

      ///  Printing array elements
      cout << "Printing 25 random values between "<< a << " & " << b << ": "<< endl;
      for (int i = 0; i < 25; i++) {
        cout << num[i] << endl;
      }
    }

    return 0;
}

