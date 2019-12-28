
function factorial(n) {
    if (n === 0 || n === 1) return 1;
    return n * factorial(n - 1);
}

const number = parseInt(prompt("Enter a number: "), 10);
console.log(`Factorial: ${factorial(number)}`);
