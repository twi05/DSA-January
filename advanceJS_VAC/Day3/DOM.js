
function changeFontColor(colors){
    document.querySelector('.box').style.color =colors;
}

function changeColor(){
    document.querySelector('.box').style.backgroundColor = document.querySelector('.input').value;

    changeFontColor('red');
}

document.querySelector(".applyColor").addEventListener('click', changeColor);