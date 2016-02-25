#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> lines;

  std::string line;
  while (std::getline(std::cin, line)) {
    lines.push_back(line);
  }

  // Insert code here
  for(auto s : lines) {		//for every line stored in vector
	cout << s;		//print each line
	for(auto c : s) {
		
	}
}

  return 0;
}
