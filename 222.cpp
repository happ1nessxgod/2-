#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

int main() {
    std::ifstream file("C:/Users/synesthesia/source/repos/ConsoleApplication3/numbers.txt");
    std::vector<int> numbers;
    int number;

    while (file >> number) {
        numbers.push_back(number);
    }
    file.close();

    bubbleSort(numbers);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}
