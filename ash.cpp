/*
*  Paula Wambui && Oluchi Chukwunyere
*  COMP 350 | Online
*  Oct 23rd 2020
*  Adding to the shell by creating a  CD and Path function
*/
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <iomanip>
#include <unistd.h>

using namespace std;

std::string  userInput(){ // Allow users to input any prompt they wish
    char userInput[50000];
    std:: cin.getline(userInput,sizeof(userInput));
    return userInput;
}

// takes in the path from the cd command changes directory
void cdMethod(string input){
    std::cout<< "This is the cd is taking in: " + input + "\n";
    int changeDir = chdir(input.c_str());
    if (changeDir < 0) {
        std::cout<< "cd function did not process \n ";
    }else{
        std::cout<< "cd function DID process \n ";

    }
}

//
void exitFunction(){ // Allows users to exit out of aggie shell as needed
    std::cout<< "Aggie Shell Created by Paula Wambui and Oluchi Chukwunyere\n ";
    exit(0);
}

std::string spiltString(string input){ // Helper function to split cd input
    std::istringstream iss(input);
    std::vector<std::string> result{
            std::istream_iterator<std::string>(iss), {}
    };
    string command = result.at(0);
    if( command == "exit"){
        exitFunction();
    }
    if(command == "cd"){
        std::string path = result.at(1);
        std::cout<< "This is the path: " + path;
        cdMethod(path);
    }
    if(command == " "){
        std::cout<< "Input incorrect" ;
    }

    std::cout << result.at(1) << '\n';
}


int main(){
    std::cout<< "COMP 350 Aggie Shell Checkpoint 2 \n";
    std::string prompt;
    while(1){ //Allows for shell to continue operating till exit is inputted
        std::cout<< "ash > ";
        prompt = userInput();
        std::istringstream iss(prompt);
        std::vector<std::string> result{
                std::istream_iterator<std::string>(iss), {}
        };
        string command = result.at(0);
        if( command == "exit"){
            exitFunction();
        }
        if(command == "cd"){
            std::string path = result.at(1);
            cdMethod(path);
        }

    }
}