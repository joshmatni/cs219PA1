#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
#define ADDITION_FILE "operations.txt"
using namespace std;

bool performAddition(const string& operand1, const string& operand2, uint32_t& result) 
{
    uint32_t num1 = stoul(operand1, nullptr, 16);
    uint32_t num2 = stoul(operand2, nullptr, 16);
    
    result = num1 + num2;
    return num1 > UINT32_MAX - num2; // Check for overflow
}

int main()
{
    ifstream file(ADDITION_FILE);
    string operation, operand1, operand2;

    if (!file.is_open())
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    while (file >> operation >> operand1 >> operand2)
    {
        if(operation == "ADD") 
        {
            uint32_t result;
            bool overflow = performAddition(operand1, operand2, result);
            cout << "ADD " << operand1 << " " << operand2 << ": 0x" << hex << result << endl;
            if (overflow) 
            {
                cout << "Overflow: YES" << endl;
            } 
            else 
            {
                cout << "Overflow: NO" << endl;
            }
        }
    }
    file.close();
    return 0;
}
