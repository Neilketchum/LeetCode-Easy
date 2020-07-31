 #include<bits/stdc++.h>
 using namespace std;
 int compress(vector<char>& chars) {
        int i = 0;
        while(i < chars.size()) {
            int j = i;
            while(j < chars.size() && chars[j] == chars[i]) {
                ++j;
            }
            if(j == i+1) {
                ++i;
            }
            else {
                chars.erase(chars.begin()+i+1, chars.begin()+j);
                int step = 0, ctr = j - i;
                while(ctr != 0) {
                    chars.insert(chars.begin()+i+1, '0' + ctr%10);
                    ctr /= 10;
                    ++step;
                }
                i += step + 1;
            }
        }
        return chars.size();
    }
int main(int argc, char const *argv[])
{
    vector<char> c= {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout<<compress(c);
    return 0;
}
