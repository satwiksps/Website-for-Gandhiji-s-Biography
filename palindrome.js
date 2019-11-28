function isPalindrome(str) {
    const reversed = str.split("").reverse().join("");
    return str === reversed;
}
const input = "radar";
console.log(`${input} is ${isPalindrome(input) ? "" : "not "}a palindrome.`);