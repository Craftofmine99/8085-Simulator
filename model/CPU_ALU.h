#ifndef alu
#define alu
#include "CPU_Register.h"
class CPU_ALU
{
public:
    CPU_ALU();
    CPU_Register Accumulator;
    CPU_Register B;
    CPU_Register C;
    CPU_Register D;
    CPU_Register E;
    CPU_Register H;
    CPU_Register L;
};
#endif