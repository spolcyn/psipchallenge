/* gencsv.cpp */
/* Author: Stephen Polcyn */

#include <fstream>
#include <ctime>
#include <iomanip>

int main()
{
    std::ofstream output;
    std::time_t t;

    output.open("data.csv");

    for(int i = 0; i < 10000000; i++)
    {
       t = std::time(nullptr);
       output << std::put_time(std::localtime(&t), "%c") << "," << 0 << std::endl;
    }

    output.close();
} 
