#include <iostream>
#include <random>
#include <sstream>

int main() {
    std::uniform_real_distribution<double> distribution(0.0, 100.0);
    std::stringstream ss;
    ss << distribution;
    std::cout << ss.str() << std::endl;
}
