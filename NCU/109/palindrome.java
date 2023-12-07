public class Palindrome {

    public static void main(String[] args) {
        char[] strs = {'A', 'B', 'C', 'B', 'A'};
        System.out.println(isAPalindrome(strs, 0, strs.length - 1)); // true
    }

    public static boolean isAPalindrome(char[] arr, int start, int end) {
        // 遞迴的基本情況
        if (start >= end) {
            return true;
        }
        // 如果首尾的字符不相等，則不是回文
        if (arr[start] != arr[end]) {
            return false;
        }
        // 遞迴地檢查去掉首尾字符的子陣列
        return isAPalindrome(arr, start + 1, end - 1);
    }
}
