function processData(input) {
    //Enter your code here
    let arr = input.split(/\r\n|\r|\n/);
    let numberToComppare  = arr[0].split(" ")[1];
    let nums  = arr[1].split(" ");
    // process.stdout.write(numberToComppare);
     let result = 0
    if(checkSum(nums, numberToComppare) != 0){
        process.stdout.write("True");
    } else{
        process.stdout.write("False");
    }
    
}

function checkSum(numbers, targetNum) {
  var map = [];
  var indexNum = [];
  
  for (var x = 0; x < numbers.length; x++)
  {
  if (map[numbers[x]] != null)
  {
  var index = map[numbers[x]];
  indexNum[0] = index;
  indexNum[1] = x;
  break;
  }
  else
  {
  map[targetNum - numbers[x]] = x;
  }
  }
  return indexNum.length;
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
