class Solution {
public:
    int countPoints(string rings) {
        int size = rings.size();
        int redCount[100]= {0}, greenCount[100] ={0}, blueCount[100]={0};

        for(int i =0 ;i<size-1; ++i){
            int curIndex = rings[i+1] -'0';
            if(rings[i] == 'R') 
                redCount[curIndex]+=1;
            else if(rings[i] == 'G')
                greenCount[curIndex]+=1;
            else
                blueCount[curIndex]+=1;
        }
        int count = 0;
        for(int i =0 ; i<100; ++i){
            if(redCount[i]>0 && greenCount[i]>0 && blueCount[i]>0)
                count+=1;
        }
        return count;
    }
};
