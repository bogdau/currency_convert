#include "Currency_convertor.h"

void Currency_convertor::Data_cathcer(std::string valut, float exchange) {
    if (valut == "usdeur" or valut == "eurusd"){
        convert_USD_EUR(exchange);
    }
    else if (valut == "usduah" or valut == "uahusd"){
        convert_USD_UAH(exchange);
    }
    else if (valut == "usdzlt" or valut == "zltusd"){
        convert_USD_ZLT(exchange);
    }
    else if (valut == "usdlir" or valut == "lirusd"){
        convert_USD_LIR(exchange);
    }
    else{
        std::cout <<"Wrong operation" << std::endl;
    }

}

void Currency_convertor::convert_USD_EUR(float exchange) {
    const float EUR = 0.93; //Euro
    float result = exchange * EUR;
    print_info(result);

}

void Currency_convertor::convert_USD_UAH(float exchange) {
    const float UAH = 36.42; //Ukrainian hryvnia
    float result = exchange * UAH;
    print_info(result);

}

void Currency_convertor::convert_USD_ZLT(float exchange) {
    const float ZLT = 4.45; //Polish Zloty
    float result = exchange * ZLT;
    print_info(result);

}

void Currency_convertor::convert_USD_LIR(float exchange) {
    const float LIR = 18.83; //Turkish lira
    float result = exchange * LIR;
    print_info(result);

}

void Currency_convertor::print_info(float result) {

    std::cout << "Result: " <<result<< std::endl;
}