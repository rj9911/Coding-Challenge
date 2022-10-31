class Solution {
public:
    string reverseWords(string A) {
       string result;
    int i=0,n=A.size();
    
    while(i<n){
        while(i<n && A[i]==' ') i++;
        int j=i+1;
        if(i>=n) break;
        while(j<n && A[j] != ' ') j++;
        string sub=A.substr(i,j-i);
        if(result.size()==0) result=sub;
        else result = sub+' '+ result;
        i=j+1; 
    }
    return result;
    }
};