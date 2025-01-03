function valueadd() {
  let value = parseInt(document.getElementById("demo").innerHTML);
  value++;
  document.getElementById("demo").innerHTML = value;
}
let valueplus;
function start() {
  valueplus = setInterval(valueadd, 1000);
}
function stop() {
  clearInterval(valueplus);
}
 function myclear()
 {
    clearInterval(valueplus);
    document.getElementById("demo").innerHTML=0;
 }
  

