#include <iostream>
#include <string>

/* Help Comments 

    std::cin and std::cout always go on the left-hand side of the statement.

    std::cout is used to output a value (cout = character output), similar to Console.WriteLine() in C#

    std::cin is used to get an input value (cin = character input), similar to Console.ReadLine() in C#

    << is used with std::cout, and shows the direction that data is moving
        (if std::cout represents the console, the output data is moving from the variable to the console). 
        std::cout << 4 moves the value of 4 to the console

    >> is used with std::cin, and shows the direction that data is moving 
        (if std::cin represents the keyboard, the input data is moving from the keyboard to the variable). 
        std::cin >> x moves the value the user entered from the keyboard into x

*/
void OutputData(int _largeNumber = 0, int _smallNumber = 0, std::string _person = "", int _birthMonth = 0, int _birthDay = 0, int _birthYear = 0) {
    std::cout << " Ouputting data\n";
    std::cout << "      Hello World!\n";
    std::cout << "      This is an example of a new line in the Hello World application.\n";

    std::cout << "      The number " << _largeNumber << " is larger than " << _smallNumber << ".\n";

    std::cout << "      My name is " << _person << ".\n";

    std::cout << "      " << _person << "'s Birthday is " << _birthMonth << "-" << _birthDay << "-" << _birthYear << ".\n";
}

int main()
{
    // Variables
    std::string person = "Ginger Max";

    int birthDay = 20;
    int birthMonth = 4;
    int birthYear = 1869;
    int smallNumber = 1;
    int largeNumber = 45;
    int maxPhoneNumber = 0;
    int maxHousePhoneNumber = 0;

    // Outputting data
    OutputDate(largeNumber, smallNumber, person, birthMonth, birthDay, birthYear);

    // Reading data from Console and Outputting it
    std::cout << " Reading data from Console and Outputting it\n";
    std::cout << "      Do you know what Max Mayfields mobile number and house number is?  I don't have then.\n";
    std::cout << "      Enter numbers seperated via a space 1111111 2222222.\n";

    std::cin >> maxPhoneNumber >> maxHousePhoneNumber;

    std::cout << "      Thank you, I will store " << maxPhoneNumber << " as Max's Phone Number, and " << maxHousePhoneNumber <<
                 "       as their House Phone Number.\n\n";

    // Lets do some maff
    std::cout << " Lettuce dookie maff\n";
    std::cout << "      1 + 45 is " << smallNumber + largeNumber << std::endl;
    std::cout << "      1 - 45 is " << smallNumber - largeNumber << std::endl;
    std::cout << "      1 * 45 is " << smallNumber * largeNumber << std::endl;
    std::cout << "      1 / 45 is " << smallNumber / largeNumber << std::endl;

    return 0;
}

//int mathAdd(int num1, int num2) {
//    return num1 + num2;
//}
//
//int mathSubtract(int num1, int num2) {
//    return num1 - num2;
//}