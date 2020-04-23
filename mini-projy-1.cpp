#include<iostream>
#include<vector>

int main()
{
  int sum, product;
  sum = 0;
  product = 0;
  std::vector<int>numbers = {10,11,12,13,14,15,16};
  
  for(int i =0; i<=numbers.size(); i++)
  {
    if(numbers[i]%2 == 0)
    {
      sum += numbers[i];
    }
    else
      product *= numbers[i];
  }
  
  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is" << product << "\n";
  
}