/*
juego de adivinar numero 

tener un numero 
preguntar al usuario el numero 
Informae si lo adivino

*/


#include <iostream>
#include <random>

//declaracion
void play( int min_val, int max_val);

int main(void){
    play(1, 100);
    play(2, 22);
    
    return 0;
}

//implementacion
void play( int min_val, int max_val) 
{

    //reto: el numero sea aleatorio 
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>distro(min_val, max_val);

    const int NUM = distro(gen);

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