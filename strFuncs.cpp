#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2)
{

	int countS1 = s1.length();
	int countS2 = s2.length();

	/*for (int i = 0; i < countS1; i++)
	{
		if (ispunct(s1[i]) || isspace(s1[i]))
			s1.erase(i,1);
	}
		
	for (int i = 0; i < countS2; i++)
	{
		if (ispunct(s2[i]) || isspace(s2[i]))
			s2.erase(i,1);
	}
	*/
	if (countS1 != countS2)
		return false;
	
	for (int i=0; i < countS1; i++)
	{
			s1[i] = tolower(s1[i]);
			s2[i] = tolower(s2[i]);
	}
		
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
        for (int i = 0; i < countS1; i++)
        {
		if ((s1[i] != s2[i]) && !(ispunct(s1[i]) && !(ispunct(s2[i]) && !(isspace(s1[i]) && !(isspace(s2[i]))))))
		{
			return false;
		}
	}
	
  return true;
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1)
{
  	if (s1.length() <= 1)
		return true;
	else 
	{
		if (s1.at(0) != s1.at(s1.length()-1))	
			return false;
		else
			return isPalindrome(s1.substr(1, s1.length()-2));			

	}

}


