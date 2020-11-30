function processData(input) {
    //Enter your code here
   
    let arr = input.split(/\r\n|\r|\n/);
    let testCases = arr[0];
     arr.shift()
   for (i = 0; i <= testCases*2-1 ; i= i+2) {
       // let tc =
     let wordAt = arr[i];
       var strSplit = arr[i+1].split(" ");
       if(wordAt <= strSplit.length){
           let word = strSplit[wordAt];
            let myVarAscii = 0
            for (let character of word) {
                myVarAscii = myVarAscii+character.charCodeAt(0);
            }
           process.stdout.write(`${myVarAscii.toString()}\n`)
        }
        else{
           process.stdout.write(`-1 \n`)
       }
    }
    
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
