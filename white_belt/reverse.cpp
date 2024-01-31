#include <iostream>
#include <vector>

void Reverse(std::vector<int>& v) {
    std::reverse(v.begin(), v.end());
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Original vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    Reverse(numbers);

    std::cout << "Reversed vector: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
