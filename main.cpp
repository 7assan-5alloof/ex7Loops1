#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop..." << endl;

    while (true)
    {
        // Input 6 numbers to compare with values of variables greatest and smallest
        int greatest, smallest, input;
        cout << "Enter a number: ";
        cin >> input;
        greatest = input;
        smallest = input;
        for (int i = 1; i <= 5; i++)
        {
            // Will ask for more input until 6 numbers would have been compared
            cout << "Enter another number: ";
            cin >> input;
            // Will guarantee that any value given for input isn't smaller than the value of smallest or likewise, greater than the value of greatest
            if (input > greatest) greatest = input;
            else if (input < smallest) smallest = input;
        }
        cout << "Greatest: " << greatest << endl << "Smallest: " << smallest << endl;
    }

    return 0;
}
