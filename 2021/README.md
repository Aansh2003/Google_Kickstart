# Problem
You are given a string S which denotes a padlock consisting of lower case English letters. You are also given a string F

consisting of set of favorite lower case English letters. You are allowed to perform several operations on the padlock. In each operation, you can change one letter of the string to the one following it or preceding it in the alphabetical order. For example: for the letter c, you are allowed to change it to either b or d in an operation. The letters can be considered in a cyclic order, i.e., the preceding letter for letter a would be letter z. Similarly, the following letter for letter z would be letter a.

Your aim is to find the minimum number of operations that are required such that each letter in string S
after applying the operations, is present in string F. 

# Input
The first line of the input gives the number of test cases, T. T

test cases follow.

Each test case consists of two lines.
The first line of each test case contains the string S
.
The second line of each test case contains the string F. 

# Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of operations that are required such that each letter in string S after applying the operations, is one of the characters in string F. 

# Limit
Memory limit: 1 GB.
1≤T≤100.
1≤ the length of S≤105.
S only consists of lower case English letters.
F only consists of distinct lower case English letters.
The letters in string F are lexicographically sorted. 

# Sample input:
2
abcd
a
pppp
p

# Sample output:
Case #1: 9
Case #2: 0
Case #3: 1
