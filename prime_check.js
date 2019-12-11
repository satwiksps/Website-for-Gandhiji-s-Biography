function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}
const number = 29;
console.log(`${number} is ${isPrime(number) ? "" : "not "}a prime number.`);