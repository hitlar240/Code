// alert("welcome...");

function element(id)
{
    return document.getElementById(id);
}
function getVal(id,what)
{
    if(what == "value")
        return parseInt(element(id).value);
    else if(what == "innerText")
        return parseInt(element(id).innerText);
}
function setVal(id,val)
{
    element(id).innerText = val;
}



var withdraw = element("withdrawAmount");
var diposit = element("dipositAmount");
var total = element("total");

function Dipo(e)
{
    var in_dipo = element("in-diposit");
    diposit.innerText = parseInt(diposit.innerText) + parseInt(in_dipo.value);
    total.innerText = parseInt(total.innerText) + parseInt(in_dipo.value);
    in_dipo.value = ""; 

//     var amount = getVal("in-diposit","value");
//     setVal("dipositAmount",getVal("dipositAmount","innerText")+amount);
//     setVal("total",getVal("total","innerText")+amount);
//     element("in-diposit").value = ""; 
}



function With(e)
{
    // var in_with = element("in-withdraw");
    // withdraw.innerText = parseInt(withdraw.innerText) + parseInt(in_with.value);
    // total.innerText = parseInt(total.innerText) - parseInt(in_with.value);
    // in_with.value = ""; 
    
    var amount = getVal("in-withdraw","value");
    setVal("withdrawAmount",getVal("withdrawAmount","innerText")+amount);
    setVal("total",getVal("total","innerText")-amount);
    element("in-withdraw").value = ""; 
}

