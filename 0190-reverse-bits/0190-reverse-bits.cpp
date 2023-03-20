class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
vector<int> v;
    unsigned int b=0;
        for(int i=0;i<32;i++){
            v.push_back(n&1);
            n>>=1;
        }
        for(int i=0;i<v.size()-1;i++){
             // b<<=1;
            b|=v[i];
            b<<=1;
        }
        b|=v[v.size()-1];
        return b;
    }
};