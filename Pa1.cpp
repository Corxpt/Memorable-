} 
 for (int i = 1; i <= height; ++i) { 
 std::string line(i, fillingChar); 
 std::cout << line << std::endl; 
 } 
} 
int main() { 
 int height = 5; 
 char fillingChar = '*'; 
 star(height, fillingChar); 
 return 0; 
}