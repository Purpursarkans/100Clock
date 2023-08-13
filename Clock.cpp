#include "head.hpp"

void clock(int num)
{
    if(num < 10) { std::cout << "0" << num << ":";}
    else { std::cout << num << ":"; }
}

int main()
{
    clear();
    std::srand(std::time(nullptr));

    int hour = 0;
    int minutes = 0;
    int seconds = 0;

    while(1)
    {
        seconds += std::rand() % 3 + 1;

        if (seconds >= 100) { minutes = std::rand() % 3 + 1; seconds = 0; }
        if (minutes >= 100) { hour = std::rand() % 3 + 1; minutes = 0; }
        if (hour >= 100) {  hour = 0; }

        clock(hour);
        clock(minutes);

        if(seconds < 10) { std::cout << "0" << seconds << std::endl;}
        else { std::cout << seconds << std::endl; }

        Sleep(1000);
        clear();
    }

    pause();
    
}