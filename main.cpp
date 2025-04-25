//main.cpp

#include <iostream>
#include <string>
#include <map>
#include "maps_header.h"
#include "functions.h"


void getVerse(const std::map< int, std::string>& myMap, const int key);
int whichVerse(), mainLoop();

int main()
{
    mainLoop();
    return 0;
}

int mainLoop()
{
    int verse = whichVerse();
    std::cout << "\nKing James Version:\n";
    getVerse(kjv_james_chapter1, verse);
    std::cout << "\nNew International Version:\n";
    getVerse(niv_james_chapter1, verse);
    std::cout << "\nRevised Standard Version:\n";
    getVerse(rsv_james_chapter1, verse);
    mainLoop();
    return 0;
}