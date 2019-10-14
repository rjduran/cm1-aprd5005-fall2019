// Section 4: Events

// oncopy
function copy() {
	window.alert("You copied some text. Good job!");
}
document.getElementById("copy_this").oncopy = copy;
 
// onclick
function send_alerts() {
	window.alert("Hi there, and welcome to my page!");
	window.alert("HPlease sign the guest book before you leave!");
	window.alert("Are these alerts annoying you yet? Ha, Ha!");

}
var button = document.getElementById("get_alerts");
button.onclick = send_alerts;

// ondblclick
function dbl_clk() {
	window.alert("you just double clicked");
}
document.ondblclick = dbl_clk;

// Section 5: Keypresses

// Learn more about char key codes here: https://www.cambiaresearch.com/articles/15/javascript-char-codes-key-codes

var info = document.getElementById('info');

window.addEventListener("keydown", keydownFcn, false);
//window.addEventListener("keyup", keyupFcn, false);
//window.addEventListener("keypress", keypressFcn, false);

function keydownFcn(e) {
  //console.log("keydown: " + e.keyCode);
  
  info.innerText = "keydownFcn: keyCode = " + e.keyCode;
    
  // check if a specific key is pressed
  // what does 65 mean?
  if (e.keyCode == "65") {
      console.log("keyCode = " + e.keyCode);
      console.log("The 'a' key is pressed");
  }
}

/*
function keyupFcn(e) {
  //console.log("keyup: " + e.keyCode);
}

function keypressFcn(e) {
  //console.log("keypress: " + e.charCode);
      
  // whats the difference between keyCode and charCode?
  // what does 97 mean?
  if (e.charCode == "97") {
    console.log("charCode = " + e.charCode);
    console.log("The 'a' key is pressed");
  }
}
 */

 