/* Chas Azubuike, Using operators to calculate GPA & Honors */
/* I declared the bool statements once, the code is based on a 4.0 scale for now. */

#include <iostream>
using namespace std;

int main()
{

  float grade1 = 0.0f;
  float grade2 = 0.0f;
  float grade3 = 0.0f;
  float grade4 = 0.0f;
  
  bool summaCumLaude = true;
  bool magnacumLaude = false;
  bool cumLaude = true;
  bool withoutHonors = false;

  std::cout << "Welcome to the GPA calculator!\n";
  
  cout << "Enter your first grade: " << endl;
    cin >> grade1;

  cout << "Enter your second grade: " << endl;
    cin >> grade2;

  cout << "Enter your third grade: " << endl;
    cin >> grade3;

  cout << "Enter your fourth grade: " << endl;
    cin >> grade4;

	float result = (grade1 + grade2 + grade3 + grade4) / 4;
	cout << "The results are: " << result << endl;
	return 0;
}
