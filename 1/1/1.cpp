#include <iostream>
#include<string>
#include<map>
#include<algorithm>

int main()
{
	std::string str = "Hello world!!";
	std::cout << "[IN]: ";
	std::cout << str;
	std::map<char, int> map = {};

	int num = 0;
	for (int i = 0; i < str.size(); i++) {
		num = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[i] == str[j]) {
				num++;
			}
			else {
				continue;
			}
		}
		map[str[i]] = num;
	}

	for (const auto& pair : map) {
		std::cout << "\n" << pair.first << ": " << pair.second;
	}
}
