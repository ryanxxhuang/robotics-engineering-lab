#include <iostream>

double calculate_average(double sensor1,
                         double sensor2,
                         double sensor3)
{
    return (sensor1 + sensor2 + sensor3) / 3.0;
}

int main()
{
    double average{ calculate_average(10.0, 12.0, 11.0) };

    std::cout << "Average: " << average << '\n';

    return 0;
}