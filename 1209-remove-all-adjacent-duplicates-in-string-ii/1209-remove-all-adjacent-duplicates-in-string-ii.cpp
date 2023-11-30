class Solution {
public:
    string removeDuplicates(string s, int k) {
           int n = s.length();
    int i = 0;

    for (int j = 0; j < n; ++j, ++i) {
        s[i] = s[j];

        // If the current character is the same as the k-1 characters before it, remove them
        if (i >= k - 1 && s.substr(i - k + 1, k) == std::string(k, s[i])) {
            i -= k;
        }
    }

    // Resize the string to remove any extra characters at the end
    s.resize(i);

    return s;
    }
};

// #include <iostream>

// std::string removeDuplicates(const std::string &s, int k) {
 
// }

// int main() {
//     std::string input = "abcd";
//     int k = 2;

//     std::cout << "Input string: " << input << std::endl;

//     std::string result = removeDuplicates(input, k);

//     std::cout << "String after k duplicate removals: " << result << std::endl;

//     return 0;
// }
