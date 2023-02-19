#include <iostream>
#include <memory>

class Currency_convertor {
private:
    void convert_USD_EUR(float exchange);
    void convert_USD_UAH(float exchange);
    void convert_USD_ZLT(float exchange);
    void convert_USD_LIR(float exchange);

    void print_info(float result);

public:
    void Data_cathcer(std::string valut, float exchange);
};
