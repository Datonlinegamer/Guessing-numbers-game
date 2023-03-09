#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Main
{
public:
    void Guessing()
    {
        srand(time(NULL));
        int num = rand() % 100 + 1;
        int guess = 0;
        int tries = 0;

        while (guess != num)
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
        }

        cout << "Congratulations! You guessed the number " << num << " in " << tries << " tries." << endl;
    }
};

int main()
{
    Main game;
    game.Guessing();

    return 0;
}
