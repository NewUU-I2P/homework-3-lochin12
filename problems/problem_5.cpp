#include <iostream>
int main(){
float x,y;
char operation;
    float result;
std::cin >> x>> operation >>y;
    // Perform the specified arithmetic operation
    switch (operation) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            // Check for division by zero
            if (y != 0) {
                result = x / y;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                // Set result to a special value or handle the error as needed
                result = 0.0;
            }
            break;
        default:
            std::cerr << "Error: Invalid operation!" << std::endl;
            // Set result to a special value or handle the error as needed
            result = 0.0;
            break;
    }

    return result;
}
