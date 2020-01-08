
// JavaScript program to merge and sort two arrays

function mergeAndSort(arr1, arr2) {
    return [...arr1, ...arr2].sort((a, b) => a - b);
}

const array1 = [3, 5, 7];
const array2 = [2, 6, 8];
console.log("Merged and sorted array:", mergeAndSort(array1, array2));
