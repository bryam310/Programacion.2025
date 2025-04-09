/*
juego de adivinar numero 

tener un numero 
preguntar al usuario el numero 
Informae si lo adivino

*/


#include <iostream>

int main(void) {
    const int NUM = 10;
    int guessed_number = NUM/2;

   while (guessed_number != NUM) {        
        std::cout << "adivina un numero entre 1 y 100:\n";
        std::cin >> guessed_number;

        if (guessed_number == NUM) {
            std::cout << "GANASTE!!!!\n";
            break;
        }else if (guessed_number > NUM){
            std::cout << "te pasaste.\n";
        } else { // menor
            std::cout << "te falta.\n";
        }
    }

 return 0;
}