#include <iostream>
#include <memory>
#include "Program_start.h"

int main()
{
 std::unique_ptr<Program_start>ps = std::make_unique<Program_start>();
 ps->program_start();
}
