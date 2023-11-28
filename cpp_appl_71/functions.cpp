#include "functions.h"
#include <iostream>

void copyFileContent(const std::string& inputFilename, const std::string& outputFilename) {
 
    FILE* inputFile;
    if (fopen_s(&inputFile, inputFilename.c_str(), "r") != 0) {
        std::cerr << "Error opening file: " << inputFilename << std::endl;
        return;
    }

    
    FILE* outputFile;
    if (fopen_s(&outputFile, outputFilename.c_str(), "w") != 0) {
        std::cerr << "Error opening file: " << outputFilename << std::endl;
        fclose(inputFile);
        return;
    }

 
    char line[1024];  
    while (fgets(line, sizeof(line), inputFile)) {
        fprintf(outputFile, "%s", line);
    }

    
    fclose(inputFile);
    fclose(outputFile);

    std::cout << "File content copied from " << inputFilename << " to " << outputFilename << std::endl;
}
