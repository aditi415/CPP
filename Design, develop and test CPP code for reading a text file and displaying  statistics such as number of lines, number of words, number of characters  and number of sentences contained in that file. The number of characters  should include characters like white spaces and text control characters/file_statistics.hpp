// file_statistics.hpp
#ifndef FILE_STATISTICS_HPP
#define FILE_STATISTICS_HPP
#include <string>

struct FileStats {
    int numLines;
    int numWords;
    int numCharacters;
    int numSentences;
};

FileStats analyzeFile(const std::string& filename);

#endif // FILE_STATISTICS_HPP
