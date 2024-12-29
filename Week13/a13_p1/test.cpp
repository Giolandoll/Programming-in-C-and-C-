// // /*
// // CH-230-A
// // a13 p1.cpp
// // Giovanni Falconer
// // gfalconer@jacobs-university.de
// // */

// // #include <iostream>
// // #include <fstream>
// // #include <string>
// // using namespace std;

// // int main() {
// //     //Get the input file name
// //     cout << "Enter the name of the file (e.g., input.txt): ";
// //     string inputFileName;
// //     cin >> inputFileName;

// //     //Extract the base name and extension from the input file name
// //     size_t dotIndex = inputFileName.find_last_of('.');
// //     string baseName = inputFileName.substr(0, dotIndex);
// //     string extension = inputFileName.substr(dotIndex);

// //     string outputFileName = baseName + "_copy" + extension;

  
// //     ofstream outputFile(outputFileName);

 

// //     cout << "File copy successful. Output file: " << outputFileName << endl;

// //     return 0; // Exit successfully
// // }


// #include <iostream>
// #include <filesystem>
// #include <string>

// namespace fs = std::filesystem;

// int main() {
//     // Get the input file name
//     std::cout << "Enter the name of the file (e.g., input.txt): ";
//     std::string inputFileName;
//     std::cin >> inputFileName;

//     // Check if the input file exists
//     if (!fs::exists(inputFileName)) {
//         std::cerr << "Error: Input file does not exist." << std::endl;
//         return 1; // Exit with an error code
//     }

//     // Extract the base name and extension from the input file name
//     fs::path inputPath(inputFileName);
//     std::string baseName = inputPath.stem().string();
//     std::string extension = inputPath.extension().string();

//     // Create the output file name with "_copy" appended
//     std::string outputFileName = baseName + "_copy" + extension;

//     try {
//         // Create the output file without copying the contents
//         fs::path outputPath(outputFileName);
//         fs::create_empty_file(outputPath);

//         std::cout << "File copy successful. Output file: " << outputFileName << std::endl;
//     } catch (const std::exception& e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//         return 1; // Exit with an error code
//     }

//     return 0; // Exit successfully
// }
