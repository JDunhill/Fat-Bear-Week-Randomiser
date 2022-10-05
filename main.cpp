#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>


int main()
{
    int randomBear = 0, totalBears = 0, totalPeople = 0;
    std::string bear, person;

    std::cout << "How many bears are there in Fat Bear Week?" << std::endl;
    std::cin >> totalBears;

    // creating separate vectors to randomize and print outputs

    std::vector<std::string> bearVect;
    std::vector<std::string> personVect;

    // inputting bears into bearVect

    for (int i = 0; i < totalBears; i++) {

        
        std::cout << "Enter a bear: " << std::endl;
        std::cin >> bear;
        bearVect.push_back(bear);

    }


    std::cout << "How many people are participating in Fat Bear Week sweepstake?" << std::endl;
    std::cin >> totalPeople;

    // inputting people into peopleVect

    for (int j = 0; j < totalPeople; j++) {

        std::cout << "Enter a person: " << std::endl;
        std::cin >> person;
        personVect.push_back(person);

    }

    std::random_shuffle(bearVect.begin(), bearVect.end());

    /* accounting for larger number of people than bears, allowing multiple people to be allocated the same bear
       but only once unique allocations are made
    */

    for (int l = 0; l < totalPeople; l++) {

        randomBear = rand() % bearVect.size();
        bearVect.push_back(bearVect[randomBear]);
    }

   

    for (int k = 0; k < totalPeople; k++) {

        
        std::cout << personVect[k] << " has: '" << bearVect[k] << "' as their bear!" << std::endl;
    }

    
    
    





}

