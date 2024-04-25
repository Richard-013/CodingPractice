/* Your assignment for this quiz
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    std::fstream myfileI("input.txt", std::ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else std::cout << "Unable to open file for writing";

    //create an input stream to write to the file
    std::fstream myfileO("input.txt");
    if (myfileO.is_open())
    {
        while (std::getline(myfileO, line))
        {
            std::cout << line << '\n';
        }
        myfileO.close();
    }

    else std::cout << "Unable to open file for reading";

    return 0;
}
