class Solution {
public:
    int appendCharacters(string s, string t) {
        int sz1=s.size(); // size of string 1
        int sz2=t.size();   // size of string 2
        int x=0,y=0;
        while(x<sz1 && y<sz2){
            if(s[x]==t[y]){
                x++;
                y++;
            }
            else{
            x++;    
            } 
        }
        return sz2-y; // sz2 is total size of string t and y has reached last position where it has some commonality with s
        
    }
};
