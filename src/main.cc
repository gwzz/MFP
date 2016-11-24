#include <iostream>
#include <string>
#include "html.h"

int main(int argc, char const *argv[]){
	if (argc < 2)
  {
    std::cerr << "Usage: " << argv[0] << "File Path to parse" << std::endl;
    return 1;
  }
  Html html_file(argv[1]);
	return 0;
}