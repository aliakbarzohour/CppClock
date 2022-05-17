#include <iostream>
#include <windows.h>
#include <ctime>

usnig namespace std;

viod get_time()
{
    sting info;
    long long now = time(0);
    char *dt = ctime(&now);
    info = dt;

    int index = info.find(":");
    // Giving Hour in Terminal
    string hour;
    hour = info[index - 2];
    hour += info[index - 1];

    // Giving Minute in Terminal
    string minute;
    minute = info[index + 1];
    minute += info[index + 2];

    // Giving Second in Terminal
    string second;
    second = info[index + 4];
    second += info[index + 5];
    
    // Print Now Clock
    cout << hour << ":" << minute << ":" << second << endl;
}

int main()
{

    get_time();
    return 0;
}
