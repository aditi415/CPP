#ifndef TEXTSTATISTICS_HPP
#define TEXTSTATISTICS_HPP

#include <string>

class TextStatistics {
private:
    std::string filename;
    int lineCount;
    int wordCount;
    int charCount;
    int sentenceCount;

public:
    TextStatistics(const std::string& fname);
    void analyze();
    void displayStatistics() const;
};

#endif // TEXTSTATISTICS_HPP
