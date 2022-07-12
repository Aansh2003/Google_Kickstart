# Problem
 You are a contestant on a popular new game show and are playing for the grand prize!

There are two big buttons, a red one and a black one. You will make a sequence of exactly N button presses.

There are lots of different sequences of presses you could make, but there are P forbidden prefixes, each of length no greater than N. If you make a sequence of presses which begins with any of the forbidden sequences, you will not win the grand prize. It is fine for your sequence to contain one or more forbidden prefixes as long as they do not appear at the start of your sequence.

A winning sequence must consist of exactly N button presses and must not begin with one of the forbidden prefixes. How many different winning sequences are there? 

# Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with a line containing two integers N and P, as described above. Then, there are P more lines, each of which contains a string of between 1 and N characters, inclusive, describing one of the forbidden sequences of presses. An R represents pressing the red button, whereas a B represents pressing the black button. 

# Output
 For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of winning sequences, as desribed above.
 
# Limits
1 ≤ T ≤ 100.
Time limit: 20 seconds per test set.
Memory limit: 1 GB.
1 ≤ P ≤ min(2N, 100).
Each forbidden prefix is between 1 and N characters long, inclusive.
No two forbidden prefixes will be the same.

# Sample Input:
3
3 2
BBB
RB
5 1
R
4 3
R
B
RBRB

# Sample Output:
Case #1: 5
Case #2: 16
Case #3: 0
