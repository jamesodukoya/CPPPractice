#include <iostream>

class Solution {
  public:
    void pattern9(int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < (N - i - 1); j++) {
                std::cout << ' ';
            }
            for (int j = 0; j < (2 * i + 1); j++) {
                std::cout << "*";
            }
            for (int j = 0; j < (N - i - 1); j++) {
                std::cout << ' ';
            }
            std::cout << '\n';
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < i; j++) {
                std::cout << ' ';
            }
            for (int j = 0; j < (2 * (N - i) - 1); j++) {
                std::cout << "*";
            }
            for (int j = 0; j < i; j++) {
                std::cout << ' ';
            }
            std::cout << '\n';
        }
    }
    void pattern10(int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                std::cout << '*';
            }
            std::cout << '\n';
        }
        for (int i = N - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                std::cout << '*';
            }
            std::cout << '\n';
        }
    }
    void pattern11(int N) {
        for (int i = 1; i <= N; i++) {
            for (int j = i; j > 0; j--) {
                std::cout << j % 2;
            }
            std::cout << '\n';
        }
    }
    void pattern12(int N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= i; j++) {
                std::cout << j + 1;
            }
            for (int j = 0; j < 2 * (N - i - 1); j++) {
                std::cout << ' ';
            }
            for (int j = 0; j <= i; j++) {
                std::cout << i - j + 1;
            }
            std::cout << '\n';
        }
    }
    void pattern13(int N) {
        int k = 1;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                std::cout << k << ' ';
                k++;
            }
            std::cout << '\n';
        }
    }
    void pattern14(int N) {
        for (int i = 0; i < N; i++) {
            char letter{'A'};
            for (int j = 0; j <= i; j++) {
                std::cout << letter;
                letter++;
            }
            std::cout << '\n';
        }
    }
    void pattern15(int N) {
        for (int i = N; i > 0; i--) {
            for (char ch = 'A'; ch < 'A' + i; ch++) {
                std::cout << ch;
            }
            std::cout << '\n';
        }
    }
    void pattern16(int N) {
        for (int i = 0; i < N; i++) {
            char ch{static_cast<char>('A' + i)};
            for (int j = 0; j <= i; j++) {
                std::cout << ch;
            }
            std::cout << '\n';
        }
    }
    void pattern17(int N) {
        for (int i = 1; i < N; i++) {
            int spaces{N - i - 1};
            for (int j = 0; j < spaces; j++) {
                std::cout << ' ';
            }
            for (char j = 'A'; j < 'A' + i; j++) {
                std::cout << j;
            }
            for (char j = static_cast<char>('A' + i - 2); j >= 'A'; j--) {
                std::cout << j;
            }
            std::cout << '\n';
        }
    }
};

int main() {
    int N = 5;
    Solution obj;
    obj.pattern17(N);
    return 0;
}