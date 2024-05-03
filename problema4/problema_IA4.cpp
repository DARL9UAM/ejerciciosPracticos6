#include <iostream>

int main() {
  // Declare variables
  float grade1, grade2, grade3, totalGrade;
  int studentCount = 1;

  // Design the loop to process students
  for (; studentCount <= 10; studentCount++) {
    // Get the input
    std::cout << "Please Enter Grade #1 for student #" << studentCount << ": ";
    std::cin >> grade1;
    std::cout << "Please Enter Grade #2 for student #" << studentCount << ": ";
    std::cin >> grade2;
    std::cout << "Please Enter Grade #3 for student #" << studentCount << ": ";
    std::cin >> grade3;

    // Calculate the total grade
    totalGrade = (grade1 + grade2 + grade3) / 3;

    // Write the output
    std::cout << "The average grade for student #" << studentCount << " is: " << totalGrade << std::endl;
  }

  return 0;
}