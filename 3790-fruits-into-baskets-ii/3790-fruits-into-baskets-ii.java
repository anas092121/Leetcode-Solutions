class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] basket) {
        int count = 0;
        for(int i=0; i<fruits.length; i++){
            for(int j=0; j<basket.length; j++){
                if(basket[j] == -1) continue;
                if(basket[j] >= fruits[i]){
                    basket[j] = -1;
                    count++;
                    break;
                }
            }
        }
        return fruits.length-count;
    }
}