/*
*  Paula Wambui && Oluchi Chukwunyere
*  COMP 350 | Online
*  Sept 24th 2020
*  Bare bones Aggie Shell that responses to user input and exits shell
*/
#include <iostream>

std::string  userInput(){ // Allow users to input any prompt they wish
    char userInput[50000];//5000 Chars allows
    std:: cin.getline(userInput,sizeof(userInput));
    return userInput;
}

void exitFunction(){ // Allows users to exit out of aggie shell as needed
        std::cout<< "Aggie Shell Created by Paula Wambui and Oluchi Chukwunyere\n ";
        exit(0);
}

int main(){
    std::cout<< "COMP 350 Aggie Shell\n Checkpoint 1 \n";
    std::string prompt;
    while(1){ //Allows for shell to continue operating till exit is inputted
        std::cout<< "ash > ";
        prompt = userInput();
        if( prompt == "exit"){
            exitFunction();
        }
    }
}
