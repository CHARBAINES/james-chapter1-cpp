// functions.cpp
#include "functions.h"
#include <iostream>
#include <string>
#include <map>

void getVerse(const std::map< int, std::string>& myMap, const int key)
{
    auto it = myMap.find(key);
    
    if (it != myMap.end())
    {
        std::string value = it->second;
        std::cout << value << std::endl;
        
    }
    else
    {
        std::cout << "That verse does not exist." << std::endl;
    }
}


int whichVerse() {
    std::cout << "\nEnter a verse number: " << std::endl;
    int verse;
    std::cin >> verse;
    return verse;
}