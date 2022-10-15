void NextPermutation(string &str,int ind,vector<string>&ans){
    // base case
    if(ind>=str.size()){
        ans.push_back(str);
        return;
    }
    for(int j=ind;j<str.size();j++){
        swap(str[ind],str[j]);
        NextPermutation(str,ind+1,ans);
        // backtracking
        swap(str[ind],str[j]);
    }
}
int main() {
    string str;
    cin>>str;
   vector<string>ans;
   NextPermutation(str,0,ans);
    for(string s:ans){
        cout<<s<<" ";
    }
}

// Time Complexity is O(n*n!) & Space Complexity is O(n!),where n is the length of a string
