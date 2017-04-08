// 我的答案

class Solution {
public:
	std::vector<std::string> fizzBuzz(int n) {
		std::vector<std::string> vecFizzBuzz;
		for (int i = 1; i <= n; ++i) {
			if (0 == i % 3 && 0 == i % 5) {
				vecFizzBuzz.push_back("fizz buzz");
			} else if (0 == i % 3) {
				vecFizzBuzz.push_back("fizz");
			} else if (0 == i % 5) {
				vecFizzBuzz.push_back("buzz");
			} else {
				vecFizzBuzz.push_back(to_string(i));
			}
		}
		return vecFizzBuzz;
	}
};

// 标准答案

class Solution {
public:
	/**
	* param n: As description.
	* return: A list of strings.
	*/
	vector<string> fizzBuzz(int n) {
		vector<string> results;
		for (int i = 1; i <= n; i++) {
			if (i % 15 == 0) {
				results.push_back("fizz buzz");
			} else if (i % 5 == 0) {
				results.push_back("buzz");
			} else if (i % 3 == 0) {
				results.push_back("fizz");
			} else {
				results.push_back(to_string(i));
			}
		}
		return results;
	}
};