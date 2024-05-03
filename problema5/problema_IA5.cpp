#include <iostream>

int main() {
  // Declare variables
  float grade, totalGrade, totalApproved;
  int studentCount = 1, approvedCount = 0;

  // Design the loop to process students
  for (; studentCount <= 8; studentCount++) {
    // Get the input
    std::cout << "Please Enter Grade for student #" << studentCount << ": ";
    std::cin >> grade;

    // Check if the student is approved
    if (grade >= 60) {
      approvedCount++;
      totalApproved += grade;
    }

    // Calculate the total grade
    totalGrade += grade;
  }

  // Write the output
  std::cout << "Number of approved students: " << approvedCount << std::endl;
  std::cout << "Number of failed students: " << (8 - approvedCount) << std::endl;
  std::cout << "Average grade for the class: " << (totalGrade / 8) << std::endl;
  std::cout << "Average grade for approved students: " << (totalApproved / approvedCount) << std::endl;

  return 0;
}