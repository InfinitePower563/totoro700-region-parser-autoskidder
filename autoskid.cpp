#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

int main() {
    std::cout << "fortnite gaming sussy amogus at 3am baby gronk skibidi toilet livvy dunne fantum tax at 3am ohio rizz\nPresents:\n";
    std::cout << "Totoro700/region-23-24-parser autoskidder";
    std::cout << "\n\n";
    std::cout << "initializing the halal curry no virus no apk still working 2023™ autoskidder...\n";
    
    std::string line;

    // Create an ifstream object for reading the existing file
    std::ifstream inFile("file.skid");

    // Create an ofstream object for writing to a new file
    std::ofstream outFile("skid.py");

    // Check if both files are open
    if(inFile && outFile){
        // Read the source file line by line
        while(getline(inFile, line)){
            // Write each line to the destination file
            outFile << line << "\n";
        }
        std::cout << "skid successfully :D ( halal + curry + +30 social credit :) )\n";
    } else {
        // Print an error message if unable to read or write files
        std::cout << "unable to autoskid ( haram + no curry + -30 social credit >:( )\n";
    }

    // Close both files
    inFile.close();
    outFile.close();

    return 0;
}