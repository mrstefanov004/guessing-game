#include <iostream>

using namespace std;

int main()
{
    int secretnum = 7;
    int guess;
    int attempt = 1;

    do{
        cout << "enter guess: ";
        cin >> guess;
        attempt++;
    } while(secretnum != guess && attempt <= 5) ;

    if (secretnum != guess && attempt == 6){
        cout << "you lose!";
    }

    else {
        cout << "you win!";
    }

    return 0;
}
