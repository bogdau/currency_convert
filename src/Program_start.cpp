#include "Program_start.h"

int Program_start::program_start() {
    std::unique_ptr<Currency_convertor> cc;

    std::string valut;
    float exchange = 0;

    std::cout << "Hi i'm Currency Convertor\nI can convert valut like\nUSD EUR UAH ZLT LIR" << std::endl;
    std::cout << "Enter valut which will be convert (UAH EUR): ";
    std::getline(std::cin,valut);
    std::cout << "Enter sum of exchange: ";
    std::cin >> exchange;

    refactor_string(valut);

    cc->Data_cathcer(valut, exchange);

    return 0;
}

std::string Program_start::refactor_string(std::string &valut){
    for (auto & c: valut) c = tolower(c);
    valut.erase(remove(valut.begin(),valut.end(),' '), valut.end());
    return valut;
}