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

    cout << dt;
}

int main()
{

    get_time();
    return 0;
}
