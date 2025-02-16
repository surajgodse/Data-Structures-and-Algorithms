class Solution {
public:
    bool isFreqSame(int freq1[], int freq2[]){
        for(int i = 0; i<26; i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};                 //calculate freq
        for(int i=0; i<s1.length(); i++){
            freq[s1[i] - 'a']++;
        }

        int WindSize = s1.length();
        for(int i =0; i<s2.length(); i++){
            int WindIdx = 0, idx = i;
            int WindFreq[26] = {0};

            while(WindIdx < WindSize && idx < s2.length()){
                WindFreq[s2[idx] - 'a']++;
                WindIdx++; idx++;
            }

            if(isFreqSame(freq, WindFreq)){
                return true;
            }
        }
        return false;
    }
};