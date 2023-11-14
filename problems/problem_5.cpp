float problemSolution5(float x, float y, char operation) {
   float result;
   // write your code here
std::string macX = std::to_string(static_cast<int>(x));
    std::string macY = std::to_string(static_cast<int>(y));

    auto getMacAddressType = [](const std::string& macAddress) {
        std::istringstream ss(macAddress);
        int firstOctet;

       
        ss >> std::hex >> firstOctet;

 
        if (macAddress == "FF:FF:FF:FF:FF:FF") {
            return "Broadcast";
        }

     
        if (firstOctet % 2 == 0) {
            return "Unicast";
        }

        
        if (firstOctet % 2 != 0) {
            return "Multicast";
        }

    
        return "Unknown";
    };


    std::string typeX = getMacAddressType(macX);
    std::string typeY = getMacAddressType(macY);

    // Display the MAC address types
    std::cout << "MAC Address Type for x: " << typeX << std::endl;
    std::cout << "MAC Address Type for y: " << typeY << std::endl;

    // Placeholder for the actual operation logic based on MAC address types
    // Modify this part according to your specific requirements

    // For now, just return the sum of x and y
    result = x + y;
   return result;
}
