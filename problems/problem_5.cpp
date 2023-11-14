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
            if (y != 0) {
                result = x / y;
            } else {
                std::cerr << "Error: Division by zero!" << std::endl;
                result = 0.0;
            }
            break;
        default:
            std::cerr << "Error: Invalid operation!" << std::endl;
            result = 0.0;
            break;
    }
   return result;
}
