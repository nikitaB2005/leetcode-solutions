class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int>r;
        queue<int>d;
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                r.push(i);
            }
            else if(senate[i]=='D'){
                d.push(i);
            }
        }
            while(r.size()>0 && d.size()>0){
                int r_index=r.front();
                int d_index=d.front();
                r.pop();
                d.pop();
                if(r_index<d_index){
                    r.push(r_index+n);
                }
                else if(d_index<r_index){
                    d.push(d_index+n);
                }
            }
        
        return d.size()>r.size()?"Dire":"Radiant";
    }
};