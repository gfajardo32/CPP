//Guido Fajardo
#include <iostream>

//This version of the program is for dogs older than 2 years old.
int main() {
  int dog_age = 10;
//“The first two years of a dog’s life count as 21 human years.”
  int early_years = 21;
//“Each following year counts as 4 human years.”
  int later_years = (dog_age -2)*4;
//ads your dog's early years and later years so you can have them in human years.
  int human_years = early_years + later_years;

  std::cout << "My name is SOMEDOGGO! Ruff ruff, I am " << human_years << " years old in human years.";
}