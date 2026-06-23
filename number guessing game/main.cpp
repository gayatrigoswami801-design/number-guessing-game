#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randomNumber = rand() % 100 + 1;

    int guess;

    cout << "Guess a number between 1 and 100: ";
    cin >> guess;

    while (guess != randomNumber)
    {
        if (guess > randomNumber)
        {
            cout << "Too High!\n";
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low!\n";
        }

        cout << "Try Again: ";
        cin >> guess;
    }

    cout << "Congratulations! You guessed the number.";

    return 0;
}