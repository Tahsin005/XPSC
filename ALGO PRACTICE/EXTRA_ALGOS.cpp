#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

Lambda functions

*/
int main(){
    cout << [](int x, int y) {
        return x + y;
    }(3, 7) << endl;

    auto sum = [](int a, int b) {
        return a + b;
    };

    cout << sum(5, 8) << endl;

    vector<int> array = {-3, -4, -1, -2, -9};


    cout << "All positive or not? " << all_of(array.begin(), array.end(), [](int x){
        return x > 0;
    }) << endl;

    cout << "Any positive or not? " << any_of(array.begin(), array.end(), [](int x){
        return x > 0;
    }) << endl;

    cout << "Not all positive or not? " << none_of(array.begin(), array.end(), [](int x){
        return x > 0;
    }) << endl;

    // sort(array.begin(), array.end(), [&](int a, int b) {
    //     return a > b;
    // });

    // for (int val: array) {
    //     cout << val << " ";
    // }

    return 0;
}