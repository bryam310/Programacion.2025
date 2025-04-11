/*
juego de adivinar numero 

tener un numero 
preguntar al usuario el numero 
Informae si lo adivino

*/


#include <iostream>

//declaracion
void play(int success, int min_val, int max_val);

int main(void){
    play(10, 1, 100);
    play(20, 2, 22);
    return 0;
}

//implementacion
void play(int success, int min_val, int max_val) 
{
    const int NUM = success;
    int guessed_number = NUM/2;

    const int MIN=min_val;
    const int MAX=max_val; 

    std::cout << "\nINICIA EL JUEGO\n";

   while (guessed_number != NUM) {        
        std::cout << "adivina un numero entre " <<MIN<< " y " <<MAX<< "\n";
        std::cin >> guessed_number;
        std:: cout << "Escribiste:" << guessed_number << "\n";

        // validacion rango 
        if (guessed_number <MIN or MAX< guessed_number) {
            std::cout << " Solo se admite numeros entre " <<MIN<< " y " <<MAX<< "\n";
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