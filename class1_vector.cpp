//
// Created by fahim on 11/21/23.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector is dynamic

    int arr[10]; // normal array. That's create 4*10 byte spaces on the memory

    vector<int> v_arr; // vector array.Vector array create empty space on memory.

    v_arr.push_back(2); // push element into vector array on index[0];
    v_arr.push_back(3); // push element into vector array on index[1];

    cout << v_arr[0] << endl;
}
