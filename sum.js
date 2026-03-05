// Simple JavaScript program to find the sum of two numbers

// Function to calculate sum of two numbers
function addTwoNumbers(num1, num2) {
    return num1 + num2;
}

// Example usage with hardcoded values
const number1 = 15;
const number2 = 25;
const result = addTwoNumbers(number1, number2);

console.log(`The sum of ${number1} and ${number2} is: ${result}`);

// Alternative: Function that prompts user for input (for Node.js with readline)
function addNumbersWithInput() {
    const readline = require('readline');
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question('Enter first number: ', (num1) => {
        rl.question('Enter second number: ', (num2) => {
            const sum = addTwoNumbers(parseFloat(num1), parseFloat(num2));
            console.log(`The sum is: ${sum}`);
            rl.close();
        });
    });
}

// Uncomment the line below to use interactive input
// addNumbersWithInput();

// Export the function for use in other modules (optional)
module.exports = { addTwoNumbers };
