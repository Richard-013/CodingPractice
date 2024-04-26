/*
* Get birth year from the user
* Calculate age from birth year
* Convert years to days
* Return number of days for age
*
* Extra challenges:
* Include extra days for leap years
* Retrieve the current year from today's date
* Calculate using birth day to current date
* Check for only positive integer inputs
* Check for outputs
* Handle input related exceptions
* Calculate ages from B.C. years
*/

#include <iostream>
#include <string>
#include <sstream>

int getBirthYear();
int calculateAge(int year);
int yearsToDays(int age);

int main() {

    int year = getBirthYear();
    int age = calculateAge(year);
    int ageInDays = yearsToDays(age);

    std::cout << "\nSo you're around " << age << " years old?" << std::endl;
    std::cout << "\nThat makes you roughly " << ageInDays << " days old." << std::endl;

    return 0;
}

int getBirthYear()
{
    std::string inputLine;
    int birthYear;

    std::cout << "What year were you born?" << std::endl;
    std::getline(std::cin, inputLine);

    std::stringstream ss(inputLine);

    ss >> birthYear;

    return birthYear;
}

int calculateAge(int year)
{
    const int CURRENT_YEAR = 2024;

    int age = CURRENT_YEAR - year;

    return age;
}

int yearsToDays(int age)
{
    int days = age * 365;
    
    return days;
}
