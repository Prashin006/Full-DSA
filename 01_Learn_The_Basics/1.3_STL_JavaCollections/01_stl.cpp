#include <bits/stdc++.h>
using namespace std;

// Pairs => pairs are a part of the utility library in cpp
// Internally a DYNAMIC ARRAY is maintained for VECTOR & DOUBLY LINKED LIST is maintained for LIST
// Internally a TREE Data Structure is maintained for PRIORITY QUEUE. TREE is a non-linear DS
// Again TREE DS is maintained for Set
// insert operation in vector is much costlier than push_front operation in list
void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {96, 83}};
    cout << arr[1].second;

    pair<int, char> p1 = {1, 'b'};
    cout << p1.second;
}

void explainVector()
{
    // When we want to store many variables of same data type we create an array. But if we want to add one more element into it we cannot modify its size & we have to create a new array of larger size & copy contents into it. So we use a vector which is DYNAMIC in nature, meaning we can add, delete elements from it
    // vector is a container which stores elements in a similar fashion as the array does
    // vector<int> v;    // {}
    // // Generally emplace_back is FASTER than push_back
    // v.push_back(1);     // {1}
    // v.emplace_back(2);      // {1,2}

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});    // {{1,2}}
    vec.emplace_back(97, 91); // {{1,2},{97,91}}

    // vector<int> v(5,100);       // a vector v of size 5 with all 5 elements being 100 is defined, ie, v = {100,100,100,100,100}
    // vector<int> v(5);       // a vector of size 5 with all values as garbage value is defined

    // vector<int> v1(5, 20); // {20,20,20,20,20}
    // vector<int> v2(v1);    // a COPY of v1 is created in v2,ie, v2 does not reference to v1,ie, v2 is a COPY of v1

    vector<int> v(3, 97);
    v[1] = 108, v[2] = 91;
    v.push_back(111);
    cout << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << endl;
    // We can access elements of vector in array fashioned way as shown above
    // Another way is to use ITERATORS => begin, end, rend, rbegin => these METHODS return an iterator

    vector<int>::iterator it = v.begin(); // v.begin() returns an iterator that points to 1st element of the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    // For rend & rbegin methods just reverse the vector,ie, v = {111,91,108,97} & now think in usual terms. Therefore, rend points at memory location after 97. rbegin points at 111. If we increment rbegin, it will now point at 91.
    // end will point to memory location AFTER the LAST element of the vector
    // vector<int>::iterator end = v.end();    // end points to memory location after 111
    // rend will point to memory location BEFORE the FIRST element of the vector
    // vector<int>::iterator rend = v.rend();      // rend points to memory location before 97
    // vector<int>::iterator rbegin = v.rbegin();

    cout << v.back() << endl; // back points to the last element of the vector. 111 in our case

    // STL provides auto which automatically assigns it to a vector iterator so no need of writing huge syntax
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    // Deletion in vectors
    // to delete single element
    v.erase(v.begin() + 2);     // deletes the 3rd element,ie, 91 in our case

    // to delete multiple elements v.erase(start address, end address)
    // NOTE that end address has to be greater than the last element you want to delete
    // v.erase(v.begin() + 1, v.begin() + 3); // v = {97,111}
    // in below for loop, it != iterator, it == int because it is of int data type
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << "\n";

    // Insert function
    v.insert(v.begin() + 1, {108, 91});
    vector<int> v1(2, 100);            // {100,100}
    v1.insert(v1.begin(), 300);        // {300,100,100}
    v1.insert(v1.begin() + 1, 2, 108); // {300,108,108,100,100}
    vector<int> copy(2, 50);
    v1.insert(v1.begin() + 3, copy.begin(), copy.end()); // {300,108,108,50,50,100,100}
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << "\n";

    // size
    // cout << v1.size() << "\n";
    // v1.pop_back();      // removes last element. NOTE that no data is returned. v1 = {300,108,108,50,50,100}
    // for (auto it : v1)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";

    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};
    // v1.swap(v2); // v1 -> {30,40}, v2 -> {10,20}
    // for (auto it : v1)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";
    // for (auto it : v2)
    // {
    //     cout << it << " ";
    // }
    // cout << "\n";
    v1.clear(); // erases the entire vector
    // empty returns 1 if vector is empty else returns 0
    cout << v1.empty() << "\n";
    cout << v2.empty() << "\n";
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);       // {2}
    ls.emplace_back(4);    // {2,4}
    ls.push_front(5);      // {5,2,4}
    ls.emplace_front(108); // {108,5,2,4}
    ls.erase(ls.begin());  // {5,2,4}
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << "\n";
    // rest of the functions like begin, end, rend, rbegin, swap, size, empty, erase, clear are same as vector
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(4);      // {4}
    dq.emplace_back(7);   // {4,7}
    dq.push_front(1);     // {1,4,7}
    dq.emplace_front(97); // {97,1,4,7}
    dq.pop_front();       // {1,4,7}
    dq.pop_back();        // {1,4}
    dq.push_front(108);   // {108,1,4}
    dq.emplace_back(97);  // {108,1,4,97}
    for (auto it : dq)
    {
        cout << it << " ";
    }
    // rest of the functions like begin, end, rend, rbegin, swap, size, empty, erase, clear are same as vector
}

void explainStack()
{
    // it is invalid to use index for stack,ie, st[1] etc is invalid
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}
    // cout << st.top() << "\n"; // prints 5
    st.pop(); // {3,3,2,1}
    // cout << st.size() << "\n";
    // cout << st.empty() << endl;
    stack<int> st1;
    st.swap(st1);
    // cout << st.empty() << endl;
    // cout << st1.empty() << endl;
    // printing the stack
    while (st1.top())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
}

void explainQueue()
{
    queue<int> q;
    q.push(2);                 // {2}
    q.push(4);                 // {2,4}
    q.push(5);                 // {2,4,5}
    q.back() += 5;             // {2,4,10}
    cout << q.back() << endl;  // 10
    cout << q.front() << endl; // 2
    q.pop();                   // 2
    cout << q.front() << endl; // 4
}

void explainPriorityQueue()
{
    // TC : pop = log(n), top = 1, push = log(n)
    // Below given DS is typically known as "Max Heap"
    // The largest element remains in the front
    // priority_queue<int> pq;
    // pq.push(5);  // {5}
    // pq.push(2);  // {5,2}
    // pq.push(8);  // {8,5,2}
    // pq.push(10); // {10,8,5,2}
    // cout << pq.top() << endl;
    // pq.pop(); // 10
    // cout << pq.size() << endl;

    // To implement Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);               // {5}
    pq.push(2);               // {2,5}
    pq.push(8);               // {2,5,8}
    pq.emplace(10);           // {2,5,8,10}
    cout << pq.top() << endl; // 2
}

void explainSet()
{
    // Every operation in set takes log(n) time
    // Set => 1. Sorted order 2. Unique
    set<int> st;
    st.insert(3);  // {3}
    st.emplace(1); // {1,3}
    st.emplace(2); // {1,2,3}
    st.emplace(2); // {1,2,3}
    st.emplace(4); // {1,2,3,4}

    // find returns an iterator to the element. If the element is not present then it returns set.end() iterator
    // auto it = st.find(3);
    // cout << *it << endl;
    // it = st.find(6);

    // st.erase(4);                 // {1,2,3} => takes log(n) time
    // cout << st.count(1) << endl; // 1
    // cout << st.count(5) << endl; // 0

    st.insert(5); // {1,2,3,5}
    st.insert(4); // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5}
    for (int i = 1; i <= 5; i++)
    {
        cout << st.count(i) << " ";
    }
    cout << "\n";
}

void explainMultiset()
{
    // Everything same as set only stores duplicate elements also
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}
    // ms.erase(1);        // all 1's erased
    cout << ms.count(1) << endl;

    // only single 1 deleted
    ms.erase(ms.find(1)); // {1,1}
    ms.insert(1);         // {1,1,1}
}

void explainUnorderedset()
{
    // lower_bound & upper_bound fns do not work, rest same
    // stores only unique elements in unordered manner,ie, does not store elements in a particular order. It has better complexity than set in most cases except when collision happens
    // O(1) most times but O(n) in worst case
}

void explainMap()
{
    // Stores everything as key-value pairs. Keys are unique, values can be duplicate. Map stores unique keys in sorted order
    map<int, int> mpp;
    map<int, string> myMap;
    mpp[0] = 42;          // {0,42}
    mpp.emplace(1, 108);  // {{0,42},{1,108}}
    mpp.insert({2, 302}); // {{0,42},{1,108},{2,302}}
    // for (map<int, int>::const_iterator it = mpp.begin(); it != mpp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    myMap.emplace(36, "Prashin");
    myMap.emplace(17, "Rahul");
    myMap.emplace(49, "Ricky");
    // for (map<int, string>::iterator it = myMap.begin(); it != myMap.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    // auto it = myMap.find(36);
    // cout << it->second << endl;

    auto it = mpp.lower_bound(1);
    cout << it->first << endl;
}

void explainMultimap()
{
    // Everything same as map, only it can store multiple keys. only mpp[key] cannot be used here
    // We can store duplicate keys but in sorted order
    multimap<int, string> mpp;
    mpp.insert({2, "Joyal"});
    mpp.insert({1, "Parikh"});
    mpp.insert({2, "Keyur"});
    mpp.insert({1, "Prashin"});
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }
}

void explainUnorderedmap()
{
    // Same as seen in unordered_set, no duplicates, random order
    // Mostly takes O(1) time except in worst case takes O(n)
    unordered_map<int, string> umpp;
    umpp.insert({1, "Prashin"});
    umpp.insert({1, "Joyal"});
    umpp.insert({1, "Keyur"});
    umpp.insert({2, "Keyur"});
    umpp.insert({2, "Modi"});
    for (auto it : umpp)
    {
        cout << it.first << " " << it.second << endl;
    }
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    // Given assumption is that p1 occurs before p2
    if (p1.second < p2.second)
    {
        return true; // given order that p1 comes before p2 is correct
    }
    else if (p1.second > p2.second)
    {
        return false; // given order that p1 comes before p2 is wrong
    }
    // only case left is that if p1.second == p2.second. In this case check for first element of both pairs
    else if (p1.first > p2.first)
    {
        return true; // p1 occurs before p2 is correct
    }
    // else either p1.first == p2.first or p1.first < p2.first. In this case return false
    return false;
}

void explainExtra()
{
    // TC of built-in sort function is O(nlogn) & SC is O(1)
    // int arr[] = {1, 3, 5, 46, 20, 108};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n); // use this for array a of size n
    // cout << "Array after sorting is ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
    // // greater<int> is a built-in comparison operator
    // sort(arr, arr + n, greater<int>());
    // cout << "Array after sorting in descending order is ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";

    // Sort it according to 2nd element, if 2nd element is same then sort on basis of 1st element in descending order
    // pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    // int n = sizeof(a)/sizeof(a[0]);
    // sort(a, a + n, comp); // comp is SELF WRITTEN COMPARATOR (BOOLEAN FUNCTION)
    // cout << "The array of pair of 2 integers after sorting according to my way is\n";
    // for (auto it : a)
    // {
    //     cout << it.first << " " << it.second << "\n";
    // }
    // sort(v.begin(),v.end());    // use this for a vector v

    // int num = 7;
    // int setBits = __builtin_popcount(num);  // binary representation of 7 is 0111 so it returns the no of 1's or no of set bits or no of bits that are on or high bits
    // cout << setBits << endl;
    // long long n = 1121862817621;
    // cout << __builtin_popcountll(n) << endl;

    // Capital alphabets: A-Z range from 65-90 while a-z range from 97-122
    // NOTE that next_permutation function starts with given string and generates next permutation in dictionary order
    // Hence, to print all permutations you start with the sorted string
    // string s = "123";    // Total 6 permutations are possible: 123,132,213,231,312,321
    // string s = "231";
    // string s = "Tom";
    // string s = "aab";
    // sort(s.begin(), s.end());
    // do
    // {
    //     cout << s << endl;
    // } while (next_permutation(s.begin(), s.end()));

    // cout << (int)'Z' << endl;
    // for (int i = 91; i < 98; i++)
    // {
    //     cout << (char)(i);
    // }
    // cout << (char)122;

    // NOTE both max_element & min_element return an iterator or address to the specified variable, so we need to derefernce them
    int a[] = {106, 148, 209, 31, 26, 79};
    int n = sizeof(a) / sizeof(a[0]);
    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);
    cout << "Max: " << maxi << " Min: " << mini << endl;
}
int main()
{
    // STL in cpp is divided into 4 parts: 1. Algorithms 2. Containers 3. Functions 4. Iterators
    // auto name = "Prashin";  // also valid
    // explainPairs();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiset();
    // explainUnorderedset();
    // explainMap();
    // explainMultimap();
    // explainUnorderedmap();
    // explainExtra();
    // string num = "1234";
    // cout<<stoi(num) + 5;
    // cout << INT_MAX << endl;
    // cout << INT_MIN << endl;
    // cout << -123 % 10 << endl;
    // cout << abs(-334) << endl;
    // cout << -334 % 8 << endl;
    cout << 8 % -6 << endl;
    return 0;
}