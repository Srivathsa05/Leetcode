class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulk = false, heav = false;

        long long volume = 1LL * length * width * height;

        if (volume >= 1000000000 || length >= 10000 || 
            width >= 10000 || height >= 10000)
            bulk = true;

        if (mass >= 100)
            heav = true;

        if (heav && bulk)
            return "Both";
        else if (heav)
            return "Heavy";
        else if (bulk)
            return "Bulky";

        return "Neither";
    }
};