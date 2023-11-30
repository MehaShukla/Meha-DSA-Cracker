class Solution {
public:
    string removeDuplicates(string s, int k) {
  int n = s.length();
    int i = 0;

    for (int j = 0; j < n; ) {
        s[i] = s[j];
        ++i;

        // If the current character is the same as the k-1 characters before it, remove them
        if (i >= k && s.substr(i - k, k) == std::string(k, s[i - 1])) {
            i -= k;
        }

        ++j;
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
