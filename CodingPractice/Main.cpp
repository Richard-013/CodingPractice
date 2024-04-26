/*
* Get birth year from the user [Done]
* Calculate age from birth year [Done]
* Convert years to days [Done]
* Return number of days for age [Done]
*
* Extra challenges:
* Include extra days for leap years [Done]
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
int calculateAge(int year, int currentYear);
int countLeapYears(int year, int currentYear);
int yearsToDays(int age, int numLeapYears);

int main() {
    const int CURRENT_YEAR = 2024;

    int year = getBirthYear();
    int age = calculateAge(year, CURRENT_YEAR);
    int leapYears = countLeapYears(year, CURRENT_YEAR);
    int ageInDays = yearsToDays(age, leapYears);

    std::cout << "\nSo you're around " << age << " years old?" << std::endl;
    std::cout << "\nYou've seen " << leapYears << " leap years." << std::endl;
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

int calculateAge(int year, int currentYear)
{
    int age = currentYear - year;

    return age;
}

int countLeapYears(int year, int currentYear)
{
    // Leap years are years that can be divided by 4 but not by 100
    // Except for years which can be divided by 400 which are leap years
    // Total each type of year and sum/subtract them

    year--; // Move birth year back by one to account for those born in a leap year
    int leapYearsUntilBirth = (year / 4) - (year / 100) + (year / 400);

    int leapYearsAfterBirth = (currentYear / 4) - (currentYear / 100) + (currentYear / 400);

    return leapYearsAfterBirth - leapYearsUntilBirth;
}

int yearsToDays(int age, int numLeapYears)
{
    int days = (age * 365) + numLeapYears;
    
    return days;
}
