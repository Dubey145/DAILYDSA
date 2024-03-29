class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }
        // if(A=="0"||B=="0"){return "0";}
        int n = num1.length(),m = num2.length();
        string ans(n+m,'0');

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int num = (num1[i] - '0') * (num2[j] - '0') + ans[i+j+1] - '0';
                ans[i+j+1] = num%10 + '0';
                ans[i+j] += num/10;
            }
        }
        for(int i=0;i<ans.length();i++){
            if(ans[i] != '0'){ return ans.substr(i);}
        } 
        return "0";
    }
};