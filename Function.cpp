#include <vector>

using namespace std;

vector<int> increaseVectorElements(const vector<int>& vec, int n) {
    std::vector<int> result;
    for (int num : vec) {
        result.push_back(num + n); 
    }
    return result;
}