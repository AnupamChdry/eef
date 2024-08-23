#include <iostream>
#include <vector>

int main() {
    std::vector<int> intArray;

    int placeholder = -1;  // Use -1 as a placeholder
    intArray.push_back(static_cast<int>('_'));

    // Print the placeholder value
    std::cout << intArray[0] << std::endl;  // Output will be -1

    return 0;
}
