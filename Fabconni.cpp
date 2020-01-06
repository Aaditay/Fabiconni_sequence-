#include <iostream>
#include <vector>
#include <string>

std::vector<int> fabconnni(int x, int y, int n) {
	std::vector<int> a;
	a.push_back(x);
	a.push_back(y);
	for (int i = 0; i <= n; i++) {
		int sum = a[i] + a[i + 1];
		a.push_back(sum);
	}
	return(a);
}

void print(std::string label, std::vector<int> vec) {
	std::cout << label << std::endl;
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << "\n";
	}


}

int main() {
	std::string label;
	std::vector <int> thi;
	int a, b, n;
	int sample;
	std::cout << " Enter the label" << std::endl;
	std::cin >> label;

	std::cout << " Enter two starting values" << std::endl;

	std::cin >> a >> b;
	std::cout << "Eneter number of elements in that            ::::::::       ";
	std::cin >> n;



	thi = fabconnni(a, b, n);

	print(label, thi);
	return 0;
}
