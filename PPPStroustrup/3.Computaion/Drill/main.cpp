#include <iostream>
// #include <cmath> // for std::abs
#include <vector>
#include <iomanip>
#include <string>
#include <sstream>
#include <numeric>

int main()
{
    std::cout << std::setprecision(16);
    double num{}, value{}, sum{};
    std::vector<double> numbers {};
    std::string line{}, unit{};
    while (std::getline(std::cin, line) && line !="exit")
    {
        std::stringstream ss(line);
        ss >> value >> unit;
        if (unit == "m" || unit == " m"){
            num = value;
            numbers.push_back(num);
        } else if (unit == "cm" || unit == " cm"){
            num = value*0.01;
            numbers.push_back(num);
        } else if (unit == "in" || unit == " in"){
            num = value*0.0254;
            numbers.push_back(num);
        } else if (unit == "ft" || unit == " ft"){
            num = value*0.3048;
            numbers.push_back(num);
        } else {
            std::cout << "Enter a record with a valid unit\n";
        }
        

        // if (numbers.size()==1){
        //     smallest = num;
        //     largest = num;
        //     std::cout << num << '\n';
        // } else if (num < smallest){
        //     smallest = num;
        //     std::cout << num << ": the smallest so far\n";
        // } else if (num > largest){
        //     largest = num;
        //     std::cout << num << ": the largest so far\n";
        // } else {
        //     std::cout << num << '\n';
        // }
    }

    if (num){
        std::sort(numbers.begin(), numbers.end());
        sum = std::accumulate(numbers.begin(), numbers.end(),0);
        std::cout << "The smallest value entered is: " << numbers[0] << '\n';
        std::cout << "The largest value entered is: " << numbers[numbers.size()-1] << 'n';
        std::cout << "The sum of all values entered is: " << sum << '\n';
        for (double element:numbers){        
            std::cout << element << "m, ";
        }
        std::cout << '\n';
    }

    return 0;
}