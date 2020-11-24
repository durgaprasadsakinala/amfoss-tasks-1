 //we need to open up telegram web and go to the chat you want to spam 
//open console using ( Ctrl + Shift + J )
//execute the code 
var message = "Hi Dude"; 
var interval = 1  ;
var count = 50 ;
var notifyInterval = 5 ; 
var i = 0 
var timer = setInterval(function(){
	document.getElementsByClassName('composer_rich_textarea')[0].innerHTML = message;
	$('.im_submit').trigger('mousedown');	
	i++;
	if( i  == count )
	clearInterval(timer);
	if( i % notifyInterval == 0)
	console.log(i + ' MESSAGES SENT');
} , interval * 1000 ) ;
