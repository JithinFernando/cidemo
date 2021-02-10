#include <bits/stdc++.h> 
using namespace std; 
 
 
// Function to print permutations of string 
// This function takes three parameters: 
// 1. String 
// 2. Starting index of the string 
// 3. Ending index of the string. 
void test(int expected, int actual, string testcasename)
{
    if(expected == actual)
    {
	cout<<testcasename<<"\t PASSED\n";
    }	
    else
    {
	cout<<testcasename<<"\t FAILED\n";
    }

}
bool arePermutation(string str1, string str2)
{
    // Get lenghts of both strings
    int n1 = str1.length();
    int n2 = str2.length();
 
    // If length of both strings is not same,
    // then they cannot be Permutation
    if (n1 != n2)
      return false;
 
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1;  i++)
       if (str1[i] != str2[i])
         return false;
 
    return true;
}
 
// Driver Code 
int main() 
{ 
    test(true, arePermutation("a","a")," Test_case_1");
    test(true, arePermutation("abn","za")," Ttest_case_2");
    return 0; 
} 