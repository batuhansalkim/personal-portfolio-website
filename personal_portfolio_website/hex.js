"use strict";


const elementToggleFunc = function(elem){
    elem.classList.toggle("active");
}

const sidebar = document.querySelector("[data-sidebar]");
const sidebarBtn = document.querySelector("[data-sidebar-btn]"); 


sidebarBtn.addEventListener("click", function(){
    elementToggleFunc(sidebar);
})

//Experiences variables
const testimonialsItem = document.querySelectorAll("[data-testimoials-item]");
const modalContainer = document.querySelector("[data-modal-container]");
const modalCloseBtn = document.querySelector("[data-modal-close-btn]");
const overlay = document.querySelector("[data-overlay]");

//languages veriables

const modalImg = document.querySelector("[data-modal-img]");
const modalTitle = document.querySelector("[data-modal-title]");
const modalText = document.querySelector("[data-modal-text]");


//languages function

const testimonialsModalFunc = function(){
    modalContainer.classList.toggle("active");
    overlay.classList.toggle("active");
}

for(let i=0; i<testimonialsItem.length; i++){

    testimonialsItem[i].addEventListener("click",function(){
        modalImg.src = this.querySelector("[data-testimonials-avatar]").src;
        modalImg.alt = this.querySelector("[data-testimonials-avatar]").alt,
        modalTitle.innerHTML = this.querySelector("[data-testimonials-title]").innerHTML;
        modalText.innerHTML = this.querySelector("[data-testimonials-text]").innerHTML;

        testimonialsModalFunc();
    });
}
modalCloseBtn.addEventListener("click",testimonialsModalFunc);
overlay.addEventListener("click",testimonialsModalFunc);














