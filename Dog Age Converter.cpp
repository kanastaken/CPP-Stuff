#include <iostream>

int main() {
  
  int dog_age; // Declares the age of the dog
  
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;
  
  int human_years;
  
  if (dog_age <= 0) {
    std::cout << "Please enter a valid age (greater than 0)";
    return 1;
  } else if (dog_age <= 2) {
    // For dogs younger than or equal to 2 years
    human_years = dog_age * 10.5; // Each of first two years counts as 10.5 human years
  } else {
    // For dogs older than 2 years
    int early_years = 21; // First two years count as 21 human years (10.5 * 2)
    int later_years = (dog_age - 2) * 4; // Each additional year counts as 4 human years
    human_years = early_years + later_years;
  }
  
  std::cout << "Your dog is " << human_years << " years old in human years" << std::endl;
  
  return 0;
}