function factorial(n) {
    return n === 0 ? 1 : n * factorial(n - 1);
}
const num = 5;
console.log(`Factorial of ${num} is ${factorial(num)}`);