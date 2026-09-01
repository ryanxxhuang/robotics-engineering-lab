#include <iostream>
int main() {
    /*
        the startup ordr matters:
        sensors must be ready before localization starts.
    */
    int lidar_points{};
    double battery_voltage{};



    std::cout << "Enter Lidar points: ";
    std::cin >> lidar_points;

    std::cout << "Enter battery voltage: ";
    std::cin >> battery_voltage;
    
    std::cout 
        << "Lidar points: " 
        << lidar_points 
        << '\n';
    
    std::cout 
        << "Battery voltage: " 
        << battery_voltage 
        << '\n';


    return 0;
}