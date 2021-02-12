//Consider an -element array, , where each index  in the array contains a reference to an array of  integers 
//(where the value of  varies from array to array). See the Explanation section below for a diagram.
////
//Given , you must answer  queries. Each query is in the format i j, where  denotes an index in 
//array  and  denotes an index in the array located at . For each query, find and print the value of
// element  in the array at location  on a new line.

// --------------------Explanation-----------------------------------------------------------------

//You are given two numbers at the start. The first tells you how many rows of data there will be, and the second tells you how many pieces of data you are going to be pulling from it.
//
//The next rows are the variable-length arrays (data). Each row starts with a number that tells you how long that row is. Then, the numbers following that are the actual data.
//
//The rows after that are sort of like the coordinates for the data you are supposed to output. The first number tells you what row it is in, and the second tells you what column it is in.
//
//Example:
//
//2 1
//
//5 3 4 2 5 1
//
//7 9 6 8 4 6 7 0
//
//1 2
//
//The "2 1" tells us we have two rows of data and one question about it.
//
//The next two rows are that data. We have 5 important numbers in the first row and 7 in the next, with one number at the start telling us so:
//
//5 3 4 2 5 1 (The five pieces of data are "3 4 2 5 1")
//
//7 9 6 8 4 6 7 0 ("9 6 8 4 6 7 0")
//
//Since we start everything with zero in programming, you could say that the 3 in that data is the 0th number in the 0th row. 5 is the 3rd number in the 0th row. 8 is the 2nd number in the 1st row.
//
//The last line, "1 2", is the question. It is asking you to print out the second number in the first row. (Don't forget that we start counting at zero!) In this case, that is 8. If you printed out an 8 in response to this example problem, you would be correct.
//
//Example 2:
//
//2 3
//
//5 3 4 2 5 1
//
//7 9 6 8 4 6 7 0
//
//1 2
//
//0 0
//
//0 4
//
//This is the exact same as the first problem, but it has three questions now.
//
//The solution would be:
//
//8 3 1

#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}

// Input Data
// n = 2 q = 2
// size = 3 data for size [1,5,4]
// size = 5 data for size [1,2,8,9,3]
// for the queries(q)
// 0 1
// 1 3
