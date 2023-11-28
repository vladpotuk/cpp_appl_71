#include "functions.h"

int main() {
    const std::string inputFilename = "input.txt";
    const std::string outputFilename = "output.txt";

    copyFileContent(inputFilename, outputFilename);

    return 0;
}
