// main.cpp
#include <iostream>
#include "file_statistics.hpp"

int main() {
    std::string filename;
    std::cout << "Enter the filename: ";
    std::cin >> filename;
    
    FileStats stats = analyzeFile(filename);
    
    std::cout << "Number of lines: " << stats.numLines << std::endl;
    std::cout << "Number of words: " << stats.numWords << std::endl;
    std::cout << "Number of characters: " << stats.numCharacters << std::endl;
    std::cout << "Number of sentences: " << stats.numSentences << std::endl;
    
    return 0;
}
