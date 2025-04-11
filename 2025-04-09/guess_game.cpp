/*
juego de adivinar numero 

tener un numero 
preguntar al usuario el numero 
Informae si lo adivino

*/


#include <iostream>

//declaracion
void play(void);

int main(void){
    play();

    return 0;
}

//implementacion
void play(void) 
{
    const int NUM = 10;
    int guessed_number = NUM/2;

    const int MIN=1;
    const int MAX=100; 

   while (guessed_number != NUM) {        
        std::cout << "adivina un numero entre 1 y 100:\n";
        std::cin >> guessed_number;
        std:: cout << "Escribiste:" << guessed_number << "\n";

        // validacion rango 
        if (guessed_number <MIN or MAX< guessed_number) {
            std::cout << " Solo se admite numeros entre 1 y 100 \n";
            continue;;
        }

        if (guessed_number == NUM) {
            std::cout << "GANASTE!!!!\n";
            break;
        }else if (guessed_number > NUM){
            std::cout << "te pasaste.\n";
        } else { // menor
            std::cout << "te falta.\n";
        }
   }
}