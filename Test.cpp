#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
vector<int> increaseVectorElements(const vector<int>& vec, int n);


void testIncreaseVectorElements() {

    vector<int> vec1 = { 1, 2, 3 };
    int n1 = 2;
    vector<int> expected1 = { 3, 4, 5 };
    assert(increaseVectorElements(vec1, n1) == expected1);

    vector<int> vec2 = { -1, -2, -3 };
    int n2 = 5;
    vector<int> expected2 = { 4, 3, 2 };
    assert(increaseVectorElements(vec2, n2) == expected2);

    vector<int> vec3 = { 0, 0, 0 };
    int n3 = 0;
    vector<int> expected3 = { 0, 0, 0 };
    assert(increaseVectorElements(vec3, n3) == expected3);

    cout << "All tests passed!" << endl;
}

int main() {
    testIncreaseVectorElements();
    return 0;
}
