class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long MASS = mass;
        sort(asteroids.begin(), asteroids.end());
        for(auto it: asteroids){
            if(it <= MASS){
                MASS += it; 
            }else{
                return false;
            }
        }
        return true;
    }
};