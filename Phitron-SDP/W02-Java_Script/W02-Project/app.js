
// function showMenu(item){
//     const li = document.createElement("li");
//     li.innerText = item;
//     document.getElementById("menu").appendChild(li);
// };

// function showMenu(items){
//     document.getElementById("total-item").innerText = items.length;

//     items.forEach(item => {
//         const li = document.createElement("li");
//         li.innerText = item.strMeal; // meal name
//         document.getElementById("menu").appendChild(li);
//     });
// };

function showMenu(items){
    document.getElementById("total-item").innerText = items.length;

    items.forEach(item => {
        console.log(item);
        const div = document.createElement("div");
        div.innerHTML = `
        <div class="food-card">
            <img class="food-img" src="${item?.strMealThumb}" alt="food">
            <div class="d-flex flex-column text-center justify-content-around align-items-center">
                <h3 class="food-name">${item?.strMeal}</h3>
                <p>${item?.strInstructions.slice(0,50)}...</p>
                <button id="dtl-btn" type="button" class="btn btn-primary" data-bs-toggle="modal" data-bs-target="#details-Modal" onclick="details(${item?.idMeal})">Details</button>
            </div>
        </div>
        `
        // item.strMeal; // meal name
        document.getElementById("food").appendChild(div);


        // details(item?.idMeal,item?.strInstructions,item?.strYoutube);
        // document.getElementById("cook-des").innerText = `${item?.strInstructions}`;
        // document.getElementById("cook-link").href = `${item?.strYoutube}`;
    });
};


// // function details(id){
// const details = (id) => {    // arrow function
//     console.log(id);
//     // document.getElementById("cook-des").innerText = dtls;
//     // document.getElementById("cook-link").href = lnk;

//     fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`) //template string
//         .then(res => res.json())
//         .then(data => console.log(data.meals))
//         // .then(data => console.log(data.meals[0].strInstructions))
//         .catch(err => console.log(err));
// };

const details = async(id) => {
    console.log(id);
    try{
        const response = await fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`); //template string
        const data = await response.json();
        console.log(data.meals);
    }
    catch{
        (err) => console.log(err);
    }
};

// function loadData(){
const loadData = () => {    // arrow function
    const inVal = document.getElementById("srch-input").value;

    console.log("loading...");

    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${inVal}#`) //template string
        .then(res => res.json())
        // .then(data => console.log(data.meals)) // pass array (of objects)
        .then(data => showMenu(data.meals)) // pass array (of objects)
        .catch(err => console.log(err));
};

