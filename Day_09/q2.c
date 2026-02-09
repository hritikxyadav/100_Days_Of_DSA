//Write a function that reverses a string. The input string is given as an array of characterss.You must do this by modifying the input array in-place with O(1) extra memory.

void helper(char* s, int left, int right) {
    if (left >= right) return;

    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;

    helper(s, left + 1, right - 1);
}

void reverseString(char* s, int sSize) {
    helper(s, 0, sSize - 1);
}