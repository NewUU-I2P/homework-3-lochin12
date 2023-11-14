#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::istringstream ss(macAddress);
    int firstOctet;

    // Read the first octet from the MAC address
    ss >> std::hex >> firstOctet;

    // Check for Broadcast address
    if (macAddress == "FF:FF:FF:FF:FF:FF") {
        return "Broadcast";
    }

    // Check for Unicast address
    if (firstOctet % 2 == 0) {
        return "Unicast";
    }

    // Check for Multicast address
    if (firstOctet % 2 != 0) {
        return "Multicast";
    }

    // Default case (should not reach here in a valid scenario)
    return "Unknown";
}
