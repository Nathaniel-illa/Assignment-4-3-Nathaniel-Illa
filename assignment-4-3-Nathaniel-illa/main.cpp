// Make a program that finds the minimum and maximum values among three integer values.

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min;
    cin >> num1 >> num2 >> num3;

      // Initialize min and max with the value of num1
    min = max = num1;

    // Determine the minimum value
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    // Determine the maximum value
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Use the following statements to print output
    cout << "The smallest number is  " << min << endl;
    cout << "The largest number is " << max << endl;
}
