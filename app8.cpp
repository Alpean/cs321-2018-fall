// std::erase, std::remove_if, std::copy_if

// haskell  -> c++              -> python
// ---------------------------------------
// map      -> std::transform   -> map
// filter   -> std::copy_if     -> filter
// fold*    -> std::accumulate  -> reduce

// vector, list, back_inserter, front_inserter, iota
// Google's MapReduce?

#include <iostream>
#include <vector>
//#include <list>
//#include <algorithm>
//#include <numeric>

int main(int argc, char* argv[])
{
    using namespace std;

    auto print = [](const auto& container) {
        for(auto val : container)
            cout << val << ", ";
        cout << endl;
    };

    vector<int> v = { 1, 2, 3, 4, 5 };
    vector<int> y(v.size());


    auto it2 = y.begin();
    for(auto it = v.begin(); it != v.end(); ++it)
        *it2++ = (*it) * (*it);

    print(v);
    print(y);

    return 0;
}
