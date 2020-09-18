#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"          vector exercise"<<endl;
    cout << "vector from initializer list: " << endl;
    vector<int> vi1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vi1.resize(15);

    cout << "size: " << vi1.size() << endl;
    cout << "front: " << vi1.front() << endl;
    cout << "back: " << vi1.back() << endl;

    // iterator
    vector<int>::iterator itbegin = vi1.begin();
    vector<int>::iterator itend = vi1.end();
    for (auto it = itbegin; it < itend; ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;

    cout << "element at 5: " << vi1[5] << endl;
    cout << "element at 5: " << vi1.at(5) << endl;

    cout << "range-based for loop:" << endl;
    for (int &i : vi1)
    {
        cout << i << ' ';
    }
    cout << endl;

    cout << "insert 42 at begin + 5: " << endl;
    vi1.insert(vi1.begin() + 5, 42);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;

    cout << "erase at begin + 5: " << endl;
    vi1.erase(vi1.begin() + 5);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;

    cout << "push_back 47: " << endl;
    cout << "push_back 55:" << endl;
    vi1.push_back(47);
    vi1.push_back(55);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1.back() " << vi1.back() << endl;

    cout << "range-based for loop: " << endl;
    for (int &v : vi1)
    {
        cout << v << ' ';
    }
    cout << endl
         << endl;
    cout<<"the number of elements in the array:"<<vi1.size()<<endl;
    int max=*max_element(vi1.begin(),vi1.end());
    int min=*min_element(vi1.begin(),vi1.end());
    cout<<"the min array elements is:"<<min<<endl;
    cout<<"the max array elements is:"<<max<<endl;
    // from C-array
    const static size_t size = 10;
    int ia[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "vector from C-array: " << endl;
    vector<int> vi2(ia, ia + size);
    for (int &i : vi2)
    {
        cout << i << ' ';
    }
    cout << endl
         << endl;

    // vector of strings
    cout << "vector of strings:" << endl;
    vector<string> vs = {"one", "two", "three", "four", "five"};
    for (string &v : vs)
    {
        cout << v << endl;
    }

    return 0;
}
