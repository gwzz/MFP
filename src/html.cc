#include "html.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

Html::Html(std::string filename) {
	std::string line;
	std::ifstream myfile (filename);

	if (myfile.is_open()) {
		getline(myfile, line);
		while (getline (myfile, line)) {
			this->file_chunk.push_back(line);
		}
		myfile.close();
	}
}

void Html::ToMarkdown() {
	std::cout << "Work" << std::endl;
}

void Html::Parse() {
	
}