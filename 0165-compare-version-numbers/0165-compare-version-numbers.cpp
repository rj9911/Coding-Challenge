class Solution {
public:
    int compareVersion(string v1, string v2) {
        int i=0,j=0,n=v1.size(),m=v2.size(),n1,n2;
        while(i<n || j<m){
            n1=0,n2=0;
            while(i<n && v1[i] != '.'){
                n1=n1*10 + (v1[i]-'0');
                i++;
            }
            while(j<m && v2[j] != '.'){
                n2=n2*10 + (v2[j]-'0'); j++;
            }
            if(n1<n2) return -1;
            else if(n1>n2) return 1;
            i++; j++; // i and j will be at dot.
        }
        return 0;
    }
};