const n = 10;
let a = 0, b = 1;
console.log("Fibonacci Series:");
for (let i = 0; i < n; i++) {
    console.log(a);
    [a, b] = [b, a + b];
}