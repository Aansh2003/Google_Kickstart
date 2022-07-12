# Problem
 It is important for researchers to write many high quality academic papers. Jorge has recently discovered a way to measure how impactful a researcher's papers are: the H-index.

The H-index score of a researcher is the largest integer h such that the researcher has h papers with at least h citations each.

Jorge has written N papers in his lifetime. The i-th paper has Ai citations. The number of citations that each paper has will never change after it is written. Please help Jorge determine his H-index score after each paper he wrote. 

# Input
 The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing N, the number of papers Jorge wrote.

The second line contains N integers. The i-th integer is Ai, the number of citations the i-th paper has. 

# Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is a space-separated list of integers. The i-th integer is the H-index score after Jorge wrote his i-th paper. 

# Time limit
Time limit: 50 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
1 ≤ Ai ≤ 105.

# Sample input:
2
3
5 1 2
6
1 3 3 2 2 15

# Sample output:
Case #1: 1 1 2
Case #2: 1 1 2 2 2 3
