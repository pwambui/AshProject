#include <iostream>
void exitFunction(){
        std::cout<< "Made by Paula Wambui and Oluchi Chukwunyere\n ";
        exit(0);

}
int main() {
    // This doesnt handle spaces or null input just something to test the exitfunction
    std::cout<< "Aggie Shell \n ";
    std::string prompt;
    while(1){
        std::cout<< "ash > ";
        std::cin >> prompt;
        if(prompt == "exit"){
            exitFunction();
        }
    }

}
