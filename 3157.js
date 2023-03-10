const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('', (input) => {
  console.log('Nao se refuta ciencia com opiniao');
  rl.close();
});
