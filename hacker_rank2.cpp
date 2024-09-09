HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  CPP_DSA_TEST_FIRST  Treasure Hunt
Treasure Hunt
Problem
Submissions
Leaderboard
Discussions
Imagine you're organizing a treasure hunt for a group of kids, consisting of 4𝑛 clues, each leading to the next. For each clue, there are four possible paths labeled 'P', 'Q', 'R', and 'S'. The hunt is designed so that exactly 𝑛 clues require taking path 'P', 𝑛 for path 'Q', 𝑛 for path 'R', and 𝑛 for path 'S'. One of the participants, Jamie, attempted the treasure hunt and recorded their chosen paths on a sheet. For some clues, Jamie was unsure and left a question mark '?' instead of choosing a path. Given Jamie's answer sheet containing 4𝑛 entries (comprising 'P', 'Q', 'R', 'S', and '?'), what is the maximum number of correct paths Jamie could have chosen during the treasure hunt?

Input Format

First line of input contains T- number of test cases. Each test case contains n and string of 4n characters.

Constraints

1<=T<=100, 1<=4*n <=1000,

Output Format

Print the maximum number of correct paths.

Sample Input 0

6
1
PQRS
2
PPPPPPPP
2
PPPPQQQQ
2
????????
3
PQRPQRPQRPQR
5
PRPSR??PRPR?SRPPQR?PQR
Sample Output 0

4
2
4
0
9
14
Contest ends in an hour
Submissions: 18
Max Score: 15
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    return 0;
12
}
13
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |









HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  CPP_DSA_TEST_FIRST  Don't Miss
Don't Miss
Problem
Submissions
Leaderboard
Discussions
Your friend Harish and you attend a DSA lecture at Cipher Schools . Lecture lasts n minutes. Mentor tells ai DSA concept during the i-th minute. Harish is really interested in DSA, though it is so hard to stay awake for all the time of lecture. You are given an array t of Harish's behaviour. If Harish is asleep during the i-th minute of the lecture then ti will be equal to 0, otherwise it will be equal to 1. When Harish is awake he writes down all the DSA concepts he is being told — ai during the i-th minute. Otherwise he writes nothing. You know some secret technique to keep Harish awake for k minutes straight. However you can use it only once. You can start using it at the beginning of any minute between 1 and n - k + 1. If you use it on some minute i then Harish will be awake during minutes j such that and will write down all the DSA concepts that meteor tells.. Your task is to calculate the maximum number of DSA concepts Harish will be able to write down if you use your technique only once to wake him up.

Input Format

The first line of the input contains two integer numbers n and k — the duration of the lecture in minutes and the number of minutes you can keep Harish awake. The second line of the input contains n integer numbers a1, a2, ... an — the number of DSA concept mentors tells during the i-th minute. The third line of the input contains n integer numbers t1, t2, ... tn — type of Harish's behaviour at the i-th minute of the lecture.

Constraints

1 ≤ k ≤ n ≤ 1000000, 1 ≤ ai ≤ 100000, 0 ≤ ti ≤ 1

Output Format

Print only one integer — the maximum number of DSA concepts Harish will be able to write down if you use your technique only once to wake him up.

Sample Input 0

6 6
1 3 5 2 5 4 
1 1 0 1 0 0
Sample Output 0

20
Contest ends in an hour
Submissions: 66
Max Score: 15
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    
12
    return 0;
13
}
14
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |






















HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  CPP_DSA_TEST_FIRST  Team Building
Team Building
Problem
Submissions
Leaderboard
Discussions
Imagine you're organizing a team-building activity where participants are divided into groups. Each group has a certain number of points, represented by an array of 𝑛 positive integers. In this activity, you have a special rule: If two groups have different types of team compositions—one with an odd number of members and the other with an even number—you can merge them into a new group by adding their points together. The smaller group’s points get added to the larger group's points. For example: If group A has fewer points than group B, group A will be merged into group B, and their combined points will be assigned to the larger group. This process continues until all groups have the same type of team composition (either all groups have odd numbers of members or all have even numbers). Given an array 𝑎 of 𝑛 positive integers representing the points of the groups, determine the minimum number of operations needed to make all groups have the same type of team composition.

Input Format

First Line of input T- number of test cases. Each test case contains n and the next line contains an array.

Constraints

1<=T<=100, 1<=n<=1000,

Output Format

Print the minimum number of operations.

Sample Input 0

7
5
1 3 5 7 9
4
4 4 4 4
3
2 3 4
4
3 2 2 8
6
4 3 6 1 2 1
6
3 6 1 2 1 2
5
999999996 999999997 999999998 999999999 1000000000
Sample Output 0

0
0
2
4
3
3
3
Contest ends in an hour
Submissions: 8
Max Score: 15
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    return 0;
12
}
13
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |






HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  CPP_DSA_TEST_FIRST  Managing File System
Managing File System
Problem
Submissions
Leaderboard
Discussions
You're organizing a project located at /home/user/project, with subfolders like "Design" and "Development." While navigating, you might use paths like /home/user/project/Development/../ to move between directories. To keep your navigation clean, you need to simplify this path. Given an absolute Unix-style path starting with '/', simplify it to its canonical form by following these rules: A single period '.' is the current directory. A double period '..' moves up one directory. Multiple slashes '//' are treated as a single slash. Period sequences like '...' are valid file or directory names. The canonical path should: Start with a single '/'. Separate directories with one '/'. Not end with a '/', unless it's the root. Exclude '.' and '..' where appropriate. Task: Return the simplified canonical path.

Input Format

First line of input contains T- number of test cases each test cases contains a string.

Constraints

.

Output Format

Print the new string.

Sample Input 0

1
/home/
Sample Output 0

/home
Contest ends in an hour
Submissions: 26
Max Score: 20
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    return 0;
12
}
13
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

























HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  CPP_DSA_TEST_FIRST  Win Game
Win Game
Problem
Submissions
Leaderboard
Discussions
Your friend plays a game with an opponent. Games are very different. In this game there is an array given and your friend has to tell a value k and after that the opponent chooses any i , j such that (1<=i

Help your friend to find maximum k.

Input Format

First line of input T- number of test cases. Each test case contains n - size of array. The next line contains an array.

Constraints

1<=T<=100, 1<=n<=1000

Output Format

Print maximum k.

Sample Input 0

6
4
2 4 1 7
5
1 2 3 4 5
2
1 1
3
37 8 16
5
10 10 10 10 9
10
3 12 9 5 2 3 2 9 8 2
Sample Output 0

3
1
0
15
9
2
Contest ends in an hour
Submissions: 9
Max Score: 20
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <cmath>
2
#include <cstdio>
3
#include <vector>
4
#include <iostream>
5
#include <algorithm>
6
using namespace std;
7
​
8
​
9
int main() {
10
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
11
    return 0;
12
}
13
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

