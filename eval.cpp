//
// Created by james on 30/04/2020.
//

void eval::confusion(std::vector<TestResult> test_data) {

	void printLine(int width_1, int width_2) {
		std::cout << "+";
		for (int i=0; i<width_1; i++) {
			std::cout << "-";
		}
		std::cout << "+";
		for (int i=0; i<width_2; i++) {
			std::cout << "-";
		}
		std::cout << "+" << std::endl;
	}

	// Generate confusion matrix
	int matrix[2][2] = {{0,0},{0,0}};
	for (std::vector<TestResult>::iterator it = test_data.begin(); it != test_data.end(); it++) {
		matrix[(*it).predicted_label][(*it).true_label]++;
	}

	// Print confusion matrix
	std::string tp = std::to_string(matrix[1][1]);
	std::string tn = std::to_string(matrix[0][0]);
	std::string fp = std::to_string(matrix[1][0]);
	std::string fn = std::to_string(matrix[0][1]);

	int col_1_width = sdt::max(tp.size(), fn.size()) + 2;
	int col_2_width = sdt::max(fp.size(), tn.size()) + 2;

	// Print table header
	printLine(col_1_width,col_2_width);

	// Print table rows
	std::cout << "| " << tp << " | " << fp << " |" << std::endl;
	printLine(col_1_width,col_2_width);
	std::cout << "| " << fn << " | " << tn << " |" << std::endl;

	// Print table footer
	printLine(col_1_width,col_2_width);

}
