HackerRank Home
HackerRank
|
Prepare
Certify
Compete
Apply
Search
 
All Contests  Diagonestic_Test_Btech  Climbing the Leaderboard
Climbing the Leaderboard
Problem
Submissions
Leaderboard
Discussions
An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:

The player with the highest score is ranked number  on the leaderboard.
Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
Example



The ranked players will have ranks , , , and , respectively. If the player's scores are ,  and , their rankings after each game are ,  and . Return .

Function Description

Complete the climbingLeaderboard function in the editor below.

climbingLeaderboard has the following parameter(s):

int ranked[n]: the leaderboard scores
int player[m]: the player's scores
Returns

int[m]: the player's rank after each new score
Input Format

The first line contains an integer , the number of players on the leaderboard.
The next line contains  space-separated integers , the leaderboard scores in decreasing order.
The next line contains an integer, , the number games the player plays.
The last line contains  space-separated integers , the game scores.

Constraints

 for 
 for 
The existing leaderboard, , is in descending order.
The player's scores, , are in ascending order.
Subtask

For  of the maximum score:

Contest ends in an hour
Submissions: 23
Max Score: 20
Difficulty: Medium
Rate This Challenge:

    
More
 
1
#include <bits/stdc++.h>
2
​
3
using namespace std;
4
​
5
string ltrim(const string &);
6
string rtrim(const string &);
7
vector<string> split(const string &);
8
​
9
/*
10
 * Complete the 'climbingLeaderboard' function below.
11
 *
12
 * The function is expected to return an INTEGER_ARRAY.
13
 * The function accepts following parameters:
14
 *  1. INTEGER_ARRAY ranked
15
 *  2. INTEGER_ARRAY player
16
 */
17
​
18
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
19
​
20
}
21
​
22
int main()
23
{
24
    ofstream fout(getenv("OUTPUT_PATH"));
25
​
26
    string ranked_count_temp;
27
    getline(cin, ranked_count_temp);
28
​
29
    int ranked_count = stoi(ltrim(rtrim(ranked_count_temp)));
30
​
31
    string ranked_temp_temp;
32
    getline(cin, ranked_temp_temp);
33
​
34
    vector<string> ranked_temp = split(rtrim(ranked_temp_temp));
35
​
36
    vector<int> ranked(ranked_count);
37
​
38
    for (int i = 0; i < ranked_count; i++) {
39
        int ranked_item = stoi(ranked_temp[i]);
40
​
41
        ranked[i] = ranked_item;
42
    }
43
​
44
    string player_count_temp;
45
    getline(cin, player_count_temp);
46
​
47
    int player_count = stoi(ltrim(rtrim(player_count_temp)));
48
​
49
    string player_temp_temp;
50
    getline(cin, player_temp_temp);
51
​
52
    vector<string> player_temp = split(rtrim(player_temp_temp));
53
​
54
    vector<int> player(player_count);
55
​
56
    for (int i = 0; i < player_count; i++) {
57
        int player_item = stoi(player_temp[i]);
58
​
59
        player[i] = player_item;
60
    }
61
​
62
    vector<int> result = climbingLeaderboard(ranked, player);
63
​
64
    for (size_t i = 0; i < result.size(); i++) {
65
        fout << result[i];
66
​
67
        if (i != result.size() - 1) {
68
            fout << "\n";
69
        }
70
    }
71
​
72
    fout << "\n";
73
​
74
    fout.close();
75
​
76
    return 0;
77
}
78
​
79
string ltrim(const string &str) {
80
    string s(str);
81
​
82
    s.erase(
83
        s.begin(),
84
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
85
    );
86
​
87
    return s;
88
}
89
​
90
string rtrim(const string &str) {
91
    string s(str);
92
​
93
    s.erase(
94
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
95
        s.end()
96
    );
97
​
98
    return s;
99
}
100
​
101
vector<string> split(const string &str) {
102
    vector<string> tokens;
103
​
104
    string::size_type start = 0;
105
    string::size_type end = 0;
106
​
107
    while ((end = str.find(" ", start)) != string::npos) {
108
        tokens.push_back(str.substr(start, end - start));
109
​
110
        start = end + 1;
111
    }
112
​
113
    tokens.push_back(str.substr(start));
114
​
115
    return tokens;
116
}
117
​
Line: 1 Col: 1
Run Code Submit CodeUpload Code as File 
Test against custom input
Interview Prep | Blog | Scoring | Environment | FAQ | About Us | Support | Careers | Terms Of Service | Privacy Policy |

