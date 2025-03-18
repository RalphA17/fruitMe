// array_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

std::string x;

//Function camelCaseing
void askUser() 
{ 
    if (x=="Apple" || x == "Apples" || x == "apple" || x == "apples")
    {
        std::cout << "\nYou have selected " + x;
        std::cout << "\nThank you for your purchased!";

    }
    else if(x=="Banana" || x == "Bananas" || x == "banana" || x == "bananas")
    {
        std::cout << "\nYou have selected " + x;
        std::cout << "\nThank you for your purchased!";
    }
    else if(x=="Grape" || x == "Grapes" || x == "grape" || x == "grapes")
    {
        std::cout << "\nYou have selected " + x;
        std::cout << "\nThank you for your purchased!";
    }
    else if (x == "Cherry" || x == "Cherries" || x == "cherry" || x == "cherries")
    {
        std::cout << "\nYou have selected " + x;
        std::cout << "\nThank you for your purchased!";
    }
    else if (x == "Orange" || x == "Oranges" || x == "orange" || x == "oranges")
    {
        std::cout << "\nYou have selected " + x;
        std::cout << "\nThank you for your purchased!";
    }
    else 
    {
        std::cout << "\nPlease select one fruit of your choice\n\n";
        std::cin >> x; 
    }
    std::cout << "\n";
}

int main()
{
    std::cout << "Good morning, this is fruitsME.";
    std::cout << " We are currently selling these fruits for a limited time. \n\n";
    std::cout << "Apples, Bananas, Grapes, Cheeries, Oranges. ";

    std::cout << "\n";
    std::cout << "\nPlease select one fruit of your choice";
    std::cout << "\n\n";

    std::cin >> x;

    askUser();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
