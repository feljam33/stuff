// James uppgift :)
#include <iostream>
#include <iomanip>

int F1(), F2(), F3(), F4(), F5(), F6(), choice1;
float rate = 1.00, sek, sekNew = 1;

int main() {
    F1();
    return 0;
}

int F1() {
    std::cout << std::endl;
    std::cout << "1. Set exchange rate in SEK (current rate: " << std::setprecision(2) << std::fixed << rate << ")" << std::endl;
    std::cout << "2. Convert prices from the foreign currency" << std::endl; 
    std::cout << "3. End" << std::endl;
    std::cout << std::endl;
    std::cout << "Give Your choice (1 - 3): ";
    F2();
    switch(choice1) {
        case 1:
            F3();
        case 2:
            F5();
        case 3:
            std::cout << "End of program!" << std::endl;
            std::cout << std::endl;
            exit(0);
        default:
            std::cout << "Not a valid choice!" << std::endl;
            F1();
    }
    return 0;
}

int F2() {
    std::cin  >> choice1;
    std::cout << std::endl;
    return 0;
}

int F3() {
    std::cout << std::endl;
    std::cout << "Give exchange rate: ";
    std::cin >> rate;
    F1();
    return 0;
}

int F4() {
    if (sekNew > 0) {
        sek += sekNew;
    }
    F5();
    return 0;
}

int F5() {
    while (sekNew > 0) {
        std::cout << "Give price (finish with < 0): ";
        std::cin >> sekNew;
        F4(); 
    }
    F6();
    return 0;
}

int F6() {
   std::cout << std::endl;
   std::cout << "Sum in foreign currency: " << sek << std::endl; 
   std::cout << "Sum in SEK: " << sek * rate << std::endl;
   std::cout << std::endl;
   F1();
   return 0;
}
