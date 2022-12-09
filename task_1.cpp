#include <iostream>

using namespace std;

int main()
{
    
    int secondsPassed;
    
    cout << "Enter seconds to convert it to minutes: ";
    cin >> secondsPassed;

    int secondsToMinutes = (int) secondsPassed / 60;

    cout << "Seconds to minutes: " << secondsToMinutes << endl;

    return 0;
}