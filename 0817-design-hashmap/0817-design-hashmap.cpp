#include <unordered_map>

class MyHashMap {
public:
    std::unordered_map<int, int> mp;

    void put(int key, int value) {
        mp[key] = value;
    }

    int get(int key) {
        return mp.count(key) ? mp[key] : -1; // Return -1 if key doesn't exist
    }

    void remove(int key) {
        mp.erase(key);
    }
};
