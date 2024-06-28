#include <iostream>
#include <set>

int main() {

    std::cout << "[IN]: \n";
    int total;
    int num;
    std::cin >> total;

    std::set<int> set;
    for (int i = 0; i < total; i++) {
        std::cin >> num;
        set.insert(num);
    }

    std::cout << "[OUT]: \n";
    for (auto it = set.rbegin(); it != set.rend(); ++it) {
        std::cout << *it << "\n";
    }
}
