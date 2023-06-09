
// A. Median Maximization
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given two positive integers n
//  and s
// . Find the maximum possible median of an array of n
//  non-negative integers (not necessarily distinct), such that the sum of its elements is equal to s
// .

// A median of an array of integers of length m
//  is the number standing on the ⌈m2⌉
// -th (rounding up) position in the non-decreasing ordering of its elements. Positions are numbered starting from 1
// . For example, a median of the array [20,40,20,50,50,30]
//  is the ⌈m2⌉
// -th element of [20,20,30,40,50,50]
// , so it is 30
// . There exist other definitions of the median, but in this problem we use the described definition.

// Input
// The input consists of multiple test cases. The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases. Description of the test cases follows.

// Each test case contains a single line with two integers n
//  and s
//  (1≤n,s≤109
// ) — the length of the array and the required sum of the elements.

// Output
// For each test case print a single integer — the maximum possible median.

// Example
// inputCopy
// 8
// 1 5
// 2 5
// 3 5
// 2 1
// 7 17
// 4 14
// 1 1000000000
// 1000000000 1
// outputCopy
// 5
// 2
// 2
// 0
// 4
// 4
// 1000000000
// 0
// Note
// Possible arrays for the first three test cases (in each array the median is underlined):

// In the first test case [5–]
// In the second test case [2–,3]
// In the third test case [1,2–,2]










#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll mid = (n + 1) / 2;
        mid = n - (mid - 1);
        ll ans = s / mid;
        cout << ans << endl;
    }
}