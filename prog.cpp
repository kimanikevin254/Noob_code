#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void getTotalBill();
int runAgain();

int main() {
     getTotalBill();
}

void getTotalBill()
    {
        double discsum, savings;
        double sum = 0;


  for(int i = 1; i < 8; i++){
    double presum = 0;
    cout << "Enter price item" << i << ": ";
    cin >> presum;
    sum += presum;
  }
  if (sum > 3001)
  {
      discsum = sum - (0.15 * sum);
  }
  else if (sum > 2001)
  {
      discsum = sum - (0.11 * sum);
  }
  else if (sum > 1001)
  {
      discsum = sum - (0.09 * sum);
  }
  else if (sum <= 1000)
  {
      discsum = sum - (0.05 * sum);
  }
  else if (sum < 500)
  {
      discsum = sum;
  }

  savings = sum - discsum;

  cout << "Your total savings is " << savings << " your total bill is " << discsum << " THANK YOU FOR SHOPPING." << endl;

  runAgain();
}

int runAgain(){
    string s;
    cout << "Do you want to continue? Y if yes or press other key to exit.";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if(s == "Y"){
        getTotalBill();
    }
    else{
        return 0;
    }
}
