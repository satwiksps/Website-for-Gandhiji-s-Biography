
function isAnagram(str1, str2) {
    const normalize = str => str.toLowerCase().replace(/[^a-z0-9]/g, '').split('').sort().join('');
    return normalize(str1) === normalize(str2);
}

const str1 = prompt("Enter first string: ");
const str2 = prompt("Enter second string: ");
console.log(isAnagram(str1, str2) ? "Strings are anagrams" : "Strings are not anagrams");
