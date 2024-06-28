#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

int main()
{
	std::string str = "Hello world!!";
	std::cout << "[IN]: ";
	std::cout << str;
	std::vector<char> str_vec = {};
	std::vector<int> num_vec = {};

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
		str_vec.push_back(str[i]);
		num_vec.push_back(num);
	}

	for (int i = 0; i < str_vec.size(); i++) {
		num = 0;
		for (int j = 0; j < str_vec.size(); j++) {
			if (str_vec[i] == str_vec[j]) {
				num++;
				if (num > 1) {
					str_vec.erase(str_vec.begin() + j);
					num_vec.erase(num_vec.begin() + j);
				}
				else {
					continue;
				}
			}
			else {
				continue;
			}
		}
	}

	for (int i = 0; i < num_vec.size(); i++) {
		for (int j = 0; j < num_vec.size(); j++) {
			if (num_vec[i] > num_vec[j]) {
				std::swap(num_vec[i], num_vec[j]);
				std::swap(str_vec[i], str_vec[j]);
			}
			else {
				continue;
			}
		}
	}

	std::cout << "\n[OUT]: \n";
	for (int i = 0; i < str_vec.size(); i++) {
		std::cout << str_vec[i] << ": " << num_vec[i] << "\n";
	}
}