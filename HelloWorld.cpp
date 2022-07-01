#include <iostream>
#include <string>

using namespace std; // allows cout << instead of std::cout <<, etc.

/* 
    Help Comments 

    std::cin and std::cout always go on the left-hand side of the statement.

    std::cout is used to output a value (cout = character output), similar to Console.WriteLine() in C#

    std::cin is used to get an input value (cin = character input), similar to Console.ReadLine() in C#

    << is used with std::cout, and shows the direction that data is moving
        (if std::cout represents the console, the output data is moving from the variable to the console). 
        std::cout << 4 moves the value of 4 to the console

    >> is used with std::cin, and shows the direction that data is moving 
        (if std::cin represents the keyboard, the input data is moving from the keyboard to the variable). 
        std::cin >> x moves the value the user entered from the keyboard into x

    Kind of following this but not really at the same time lol 
    https://www.learncpp.com/cpp-tutorial/forward-declarations/
*/

/* Forward Declarations
    - Add these at the top and function ordering doesn't matter lol 
*/
int mathAdd(int a, int b);
int mathSubtract(int a, int b);
int mathMultiply(int a, int b);
int mathDevide(int a, int b);
void LettuceMaff(int _smallNumber, int _largeNumber);
void OutputData(int _largeNumber, int _smallNumber, string _person, int _birthMonth, int _birthDay, int _birthYear);
void ReadingData();
int ReadingDataUserInput();

// Main Call - Program starts here
int main()
{
    // Variables
    string person = "Ginger Max";

    int birthDay = 20;
    int birthMonth = 4;
    int birthYear = 1869;
    int smallNumber = 1;
    int largeNumber = 45;

    // Outputting data
    OutputData(largeNumber, smallNumber, person, birthMonth, birthDay, birthYear);

    // Reading data from Console and Outputting it
    ReadingData();

    // Lets do some maff
    LettuceMaff(smallNumber, largeNumber);

    return 0;
}

// Our actual functions wit data n shizz :)
void OutputData(int _largeNumber, int _smallNumber, string _person, int _birthMonth, int _birthDay, int _birthYear) {
    cout << " Ouputting data\n";
    cout << "      Hello World!\n";
    cout << "      This is an example of a new line in the Hello World application.\n";

    cout << "      The number " << _largeNumber << " is larger than " << _smallNumber << ".\n";

    cout << "      My name is " << _person << ".\n";

    cout << "      " << _person << "'s Birthday is " << _birthMonth << "-" << _birthDay << "-" << _birthYear << ".\n";
}

void ReadingData() {
    cout << " Reading data from Console and Outputting it\n";
    cout << "      Please enter Max Mayfields Cellphone Number\n";

    int cellPhone{ ReadingDataUserInput() };

    cout << "     Please enter Max Mayfields Housephone Number\n";

    int housePhone{ ReadingDataUserInput() };

    //cin >> _maxPhoneNumber >> _maxHousePhoneNumber;

    cout << "      Thank you, I will store " << cellPhone << " as Max's Cellphone Number, and " << housePhone << " as their Housephone Number.\n\n";
}

int ReadingDataUserInput() {
    int userInput;
    cin >> userInput;
    return userInput;
}

void LettuceMaff(int _smallNumber, int _largeNumber) {
    cout << " Lettuce dookie maff\n";
    cout << "      1 + 45 is " << mathAdd(_smallNumber, _largeNumber) << endl;
    cout << "      1 - 45 is " << mathSubtract(_smallNumber, _largeNumber) << endl;
    cout << "      1 * 45 is " << mathMultiply(_smallNumber, _largeNumber) << endl;
    cout << "      1 / 45 is " << mathDevide(_smallNumber, _largeNumber) << endl;
    cout << "      1 + (1 * 45) is " << mathAdd(_smallNumber, mathMultiply(_smallNumber, _largeNumber)) << endl;
}

int mathAdd(int a, int b) {
    return a + b;
}

int mathSubtract(int a, int b) {
    return a - b;
}

int mathMultiply(int a, int b) {
    return a * b;
}

int mathDevide(int a, int b) {
    return a / b;
}