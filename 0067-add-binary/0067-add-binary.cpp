class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int k = b.size() - 1;
        int carry = 0;
        string result = "";
        
        while (i >= 0 || k >= 0 || carry) {
            if (i >= 0 && a[i--] == '1') ++carry;
            if (k >= 0 && b[k--] == '1') ++carry;
            result.insert(0,1 ,carry % 2 == 1 ? '1' : '0');
            carry /= 2;
        }
        
        return result;
    }
};