// script.js

// Declare a boolean variable equal to false
let isGreeting = false;

// Find in the DOM the lime cat img using the "lime-cat-img" id
let imageElem  = document.getElementById("lime-cat-img");

// Call this function when user click on the image
imageElem.onclick = function() {
    isGreeting = !isGreeting;

    let heyP = document.getElementById("greeting");
    if(isGreeting) {
        heyP.innerHTML = "Hey!"
    }
    else {
        heyP.innerHTML = ""
    }
};
