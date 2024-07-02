#include <iostream>
using namespace std;

int main()
{
    // Declare Variable
    //  int a;
    // Initialize Variable
    //! Comma Operator
    // int a, int b, int c, int d;
    // a = 20, b = 30, c = 40, d = 50;

    int z = 10;
    // int b = 9;
    //! Bitwise Operators
    //&, | , ^ , ~, << , >>
    //& - Bitwise AND
    //| - Bitwise OR
    //^ - Bitwise XOR
    //~ - Bitwise NOT
    //<< - Left Shift
    //>> - Right Shift
    int a = -5; // 0 1111 1010
    int b = 6;  // 0000 0110

    int bAnd = a & b;    // 0000 0100 -> if both 1 then result 1 otherwise 0
    int bOr = a | b;     // 0000 0111 -> if both 0 then result 0 otherwise 1
    int bXor = a ^ b;    // 0000 0011 -> If both are different then result 1 otherwise 0
    int bNot = ~a;       // 0000 1001 ->  1 -> 0 and 0 -> 1
    int bLeft = a << 2;  // Shift Left Binary characters by given numbers (Here it is 2)
    int bRight = b >> 1; // Shift Right Binary characters by given numbers (Here it is 1)

    // 00000110 => 11111001
    //  00000101 => 00010100  -> Left Shift Example
    //  00000110 =>  00000011 -> Right Shift Example

    //! Assignment Operators
    /*
    = (Simple assignment)
    += (Add and assign)
    -= (Subtract and assign)
    *= (Multiply and assign)
    /= (Divide and assign)
    %= (Modulus and assign)þ
    &= (Bitwise AND and assign)
    |= (Bitwise OR and assign)
    ^= (Bitwise XOR and assign)
    <<= (Left shift and assign)
    >>= (Right shift and assign)
    */

    // z = 15;
    z += 20; // z = z + 20;
    z -= 50; // z = z - 50;
    z *= 10; // z = z * 10;
    z /= 50; // z = z / 50;
    z %= 3;  // z = z % 3;
    z &= 2;  // z = z & 2;
    z |= 3;  // z = z | 3;
    z ^= 4;  // z = z ^ 4;
    z <<= 2; // z = z << 2;
    z >>= 1; // z = z >> 2;

    int y = 40; // 10100
    y &= 20;    // 01010 => y = y & 20 //00000
    y |= 10;    // y = y | 10; 0000 | 1010 //1010
    //! Increment and Decrement Operator => Loops
    // ++i, i++, i--, --i
    int g = 50;
    int h = g--;
    //! Conditional Operator

    int f = 5;
    int j = 7;

    int i = 6 > 8 ? f - j : j - f;

    cout << i << endl;
    int yt, uy, op;
    yt = 20, uy = 40, op = 32;
    return 0;
}