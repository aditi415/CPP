// file_statistics.cpp
#include "file_statistics.hpp"
#include <fstream>
#include <cctype>

FileStats analyzeFile(const std::string& filename) {
    std::ifstream file(filename);
    FileStats stats = {0, 0, 0, 0};
    
    if (!file) {
        return stats;
    }

    std::string line;
    while (std::getline(file, line)) {
        stats.numLines++;
        stats.numCharacters += line.length() + 1; // +1 for newline character

        bool inWord = false;
        for (char ch : line) {
            if (std::isalnum(ch)) {
                if (!inWord) {
                    stats.numWords++;
                    inWord = true;
                }
            } else {
                inWord = false;
                if (ch == '.' || ch == '!' || ch == '?') {
                    stats.numSentences++;
                }
            }
        }
    }

    file.close();
    return stats;
}
