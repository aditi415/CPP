#include "TextStatistics.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <cctype>

TextStatistics::TextStatistics(const std::string& fname)
    : filename(fname), lineCount(0), wordCount(0), charCount(0), sentenceCount(0) {}

void TextStatistics::analyze() {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << "\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        lineCount++;
        charCount += line.length() + 1; // +1 for newline char

        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;

            for (char ch : word) {
                if (ch == '.' || ch == '?' || ch == '!') {
                    sentenceCount++;
                }
            }
        }
    }

    file.close();
}

void TextStatistics::displayStatistics() const {
    std::cout << "File: " << filename << "\n";
    std::cout << "Lines: " << lineCount << "\n";
    std::cout << "Words: " << wordCount << "\n";
    std::cout << "Characters (including whitespaces and control chars): " << charCount << "\n";
    std::cout << "Sentences: " << sentenceCount << "\n";
}
