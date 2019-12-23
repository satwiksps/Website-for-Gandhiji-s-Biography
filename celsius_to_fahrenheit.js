
function celsiusToFahrenheit(celsius) {
    return (celsius * 9/5) + 32;
}

const celsius = prompt("Enter temperature in Celsius: ");
console.log(`Fahrenheit: ${celsiusToFahrenheit(Number(celsius))}`);
