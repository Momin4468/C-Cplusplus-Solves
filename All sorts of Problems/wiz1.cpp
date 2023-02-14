/*BISMILLAHIR RAHMANIR RAHIM*/
#include<bits/stdc++.h>
using namespace std;

///compute the average value of each of the rows of a 15x10 floating point array.
int main()
{
    float num[15][10];

    cout << "(15*10)= 150 floating numbers from 0.25 to 37.5 has been assigned in the 15*10 Array " << endl;

    /// Storing numbers in the array
    float a = 0.25;
    int cnt = 0;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
               num[i][j] = a;
                a += 0.23;
        }
    }

    ///  Printing array elements
    for (int i = 0; i < 15; i++) {
        cout << "The values of row - " << i+1 << " is: ";
        for (int j = 0; j < 10; j++) {
            cout << num[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;

    /// Compute code
    float sum = 0.0;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 10; j++) {
                sum += num[i][j];
        }
        cout << "The Average value of row - " << i+1 << " is: " << sum/10.0 << endl;
        sum = 0.0;
    }


    return 0;
}
