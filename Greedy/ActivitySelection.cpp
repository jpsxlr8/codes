// Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.






class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
       vector<pair<int,int>>arr;
       for(int i=0;i<n;i++){
           arr.push_back(make_pair(start[i],end[i]));
       }
       sort(arr.begin(),arr.end(),[](pair<int,int>p1,pair<int,int>p2){return p1.second<p2.second;});
        int cnt_activity=1; // var to count the number of activity
        int end_point=arr[0].second; // end point of first interval
        for(int i=1;i<n;i++){
            if(arr[i].first>end_point){
                cnt_activity++;
                end_point=arr[i].second;// if start of present interval is greater than end of previous interval then we'll assign the end to end of curr interval
            }
        }
        return cnt_activity;
        
    
    }
};
