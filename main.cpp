#include <vector>

int findOdd(const std::vector<int>& numbers) {
    int count = 0;
    int nr = 0;
    int size = numbers.size();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }
        if (count % 2 != 0) {
            return numbers[i];
        }
    }
    return nr;
}
