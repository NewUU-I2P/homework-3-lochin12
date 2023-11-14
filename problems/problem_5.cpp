float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
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
                // For simplicity, we set the result to 0.0 in case of division by zero
                result = 0.0;
            }
            break;
        default:
            std::cerr << "Error: Invalid operation!" << std::endl;
            // Set result to a special value or handle the error as needed
            // For simplicity, we set the result to 0.0 in case of an invalid operation
            result = 0.0;
            break;
    }


   return result;
}
