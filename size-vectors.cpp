#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Nutella");
  grocery.push_back("Lays Chips");
  grocery.push_back("Cadbury Bournville");
  
  std::cout << grocery.size() <<" "<< "items.\n";
  
  
  
}