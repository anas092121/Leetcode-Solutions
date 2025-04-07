class Solution {
public:
    int countCollisions(string directions) {
        int collisions = 0;
        int n = directions.size();
        int i = 0;
        while (i < n && directions[i] == 'L') i++;
        int j = n - 1;
        while (j >= 0 && directions[j] == 'R') j--;
        for (int k = i; k <= j; ++k) {
            if (directions[k] != 'S')
                collisions++;
        }
        return collisions;
    }
};
