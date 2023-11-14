#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
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
}
