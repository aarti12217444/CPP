class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        //step1: convert time string into min. integer value
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalMinutes=hours * 60 + min;
            minutes.push_back(totalMinutes);
        }
        //sort
        sort(minutes.begin(),minutes.end());
        //difference and calculate min diff
        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }
        //GAME CHANGER
        int lastDiff=(minutes[0]+1440)-minutes[n-1];
        mini=min(mini,lastDiff);
        return mini;
    }
};