#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess, num, tries = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100!💯 \n\n";

    do
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess > num)
        {
            cout << "Too high, try again.\n\n";
        }
        else if (guess < num)
        {
            cout << "Too low, try again.\n\n";
        }
        tries++;
    } while (guess != num);

    cout << "\nCool! You guessed the number in " << tries << " tries.";

    return 0;
}