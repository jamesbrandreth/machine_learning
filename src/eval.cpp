//
// Created by james on 30/04/2020.
//

#include "eval.h"

void printLine(int width_1, int width_2) {
	std::cout << "+";
	for (int i = 0; i < width_1; i++) {
		std::cout << "-";
	}
	std::cout << "+";
	for (int i = 0; i < width_2; i++) {
		std::cout << "-";
	}
	std::cout << "+" << std::endl;
}

void eval::confusion(std::vector<TestResult> test_data) {



	// Generate confusion matrix
	int matrix[2][2] = {{0, 0},
						{0, 0}};
	for (std::vector<TestResult>::iterator it = test_data.begin(); it != test_data.end(); it++) {
		matrix[(*it).predicted_label][(*it).true_label]++;
	}

	// Print confusion matrix
	std::string tp = std::to_string(matrix[1][1]);
	std::string tn = std::to_string(matrix[0][0]);
	std::string fp = std::to_string(matrix[1][0]);
	std::string fn = std::to_string(matrix[0][1]);

	const int padding = 1;
	int col_1_width = std::max(tp.size(), fn.size());
	int col_2_width = std::max(fp.size(), tn.size());

	// Print table header
	printLine(col_1_width + 2 * padding, col_2_width + 2 * padding);

	// Print table rows
	std::cout << "| ";

	for (int i = 0; i < col_1_width - tp.size(); i++) {
		std::cout << " ";
	}
	std::cout << tp;

	std::cout << " | ";

	for (int i = 0; i < col_2_width - fp.size(); i++) {
		std::cout << " ";
	}
	std::cout << fp << " |" << std::endl;

	printLine(col_1_width + 2 * padding, col_2_width + 2 * padding);

	std::cout << "| ";
	for (int i = 0; i < col_1_width - fn.size(); i++) {
		std::cout << " ";
	}
	std::cout << fn;

	std::cout << " | ";

	for (int i = 0; i < col_2_width - tn.size(); i++) {
		std::cout << " ";
	}
	std::cout << tn << " |" << std::endl;

	// Print table footer
	printLine(col_1_width + 2 * padding, col_2_width + 2 * padding);

}
