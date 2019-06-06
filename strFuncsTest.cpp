#include <iostream>
#include <string>
#include <cstring>
#include "strFuncs.h"

void assertpalinderome(bool expected, bool actual, string message);
void assertanagram(bool expected, bool actual, string message);


int main()
{
	string a1 = "car";
	string a2 = "arc";
	assertanagram(1,isAnagram(a1,a2),"car vs arc?");

	string p1 = "maam";
	assertanagram(1,isPalindrome(p1),"maam");

return 0;
}



void assertpalinderome(bool expected, bool actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


void assertanagram(bool expected, bool actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}
