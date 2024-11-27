class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = -1;
        int left = 0;
        for(int i=0; i<forts.size(); i++){
            if(forts[i]==1){
                int temp = 0;
                for(int j=i+1; j<forts.size(); j++){
                    if(forts[j]==0){
                        temp++;
                    }
                    else if(forts[j]==-1){
                        left = max(left,temp);
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
            if(forts[i]==-1){
                int temp = 0;
                for(int j=i+1; j<forts.size(); j++){
                    if(forts[j]==0){
                        temp++;
                    }
                    else if(forts[j]==1){
                        left = max(left,temp);
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return left;

    }
};