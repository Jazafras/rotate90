#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::vector<std::string> lines;
  std::size_t max_line_size = 0;
  std::string line;
  while (std::getline(std::cin, line)) {
    lines.push_back(line);
    if( max_line_size < line.size()){
        max_line_size = line.size(); //store length of longest string
    }
  }
  std::reverse(lines.begin(),lines.end());
  //print vertically
  for( std::size_t i=0; i<max_line_size; i++){
    for( const std::string& line : lines){
        std::cout << ( line.size() > i ? line[i] : ' ');
    }
    std::cout << '\n';
  }
  return 0;
}
