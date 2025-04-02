#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    std::string fileName;
    int fileTimes;
    std::string writing;
    std::string extension;
    std::cout << "Enter a file name: " << std::endl;
    getline(std::cin, fileName);
    std::cout << "Enter a file extension please: " << std::endl;
    std::cin >> extension;
    std::cout<<"Tell me how many times to write a file please (Non text formats may not work): \n";
    std::cin >> fileTimes;
    std::cout << "Tell me what you want to write to the file please: " << std::endl;
    std::cin.ignore();
    getline(std::cin, writing);
    for(int i = 0; i < fileTimes; i++){
        file.open(fileName + std::to_string(i + 1) + "." + extension, ios::out);
        file << writing;
        file.close();
    }

    return 0;
}
