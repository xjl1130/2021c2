
function setup() {
    initializeFields();
    createCanvas(300, 300);
    textSize(40);
}

var choice;

function draw() {
    background(color(0x64, 0x5C, 0xC1));
    fill(color(0xDC, 0xFF, 0x00));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    text("Coice 1", 50, 50);
    text("Coice 2", 50, 100);
    text("Coice 3", 50, 150);
}

function mousePressed() {
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
