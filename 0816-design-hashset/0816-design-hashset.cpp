#include <unordered_map>

class MyHashSet {
public:
    std::unordered_map<int, int> mp;

    void add(int key) {
        mp[key] = 1;
    }

    void remove(int key) {
        if (mp.count(key)) {
            mp.erase(key);
        }
    }

    bool contains(int key) {
        return mp.count(key) > 0;
    }
};
