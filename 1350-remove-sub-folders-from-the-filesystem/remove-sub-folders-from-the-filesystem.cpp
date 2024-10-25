class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string>s;
        for(auto it:folder)s.insert(it);
        vector<string>ans;
        for(auto sub_folder:folder){
            bool track=false;
            string t=sub_folder;
            while(!sub_folder.empty()){
                 size_t pos=sub_folder.find_last_of('/');
                 sub_folder=sub_folder.substr(0,pos);
                 if(s.find(sub_folder)!=s.end()){
                    track=true;
                    break;
                 }
            }
            if(!track)ans.push_back(t);
        }
        return ans;
    }
};