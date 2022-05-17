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
    cout << hour;
}

int main()
{

    get_time();
    return 0;
}
