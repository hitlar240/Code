// alert("Hello World");

// console.log("okkk");


function isVerified(check)
{
    return check ? '<i class="bi bi-patch-check-fill text-primary"></i>' : "";
};

function postedTime(posted)
{
    if(posted)
    {
        const hrs = parseInt(posted/(60*60));
        const min = parseInt((posted-hrs*60*60)/60);
        return `<p class="posted">${hrs} hrs ${min} min ago</p>`;
    }
    else
        return "";
}

function noCard()
{
    const card = document.createElement("div");
    card.innerHTML = `
    <div class="nocard text-center p-5">
        <img src="./image/Icon.png" alt="no Content">
        <h1 class="mt-5">Oops!! Sorry, There is no content here</h1>
    </div>
    `
    return card;
}


const boxContainer = document.getElementById("box-container"); //global scope

function addCard(contents)
{
    if(contents.length == 0)
    {
        boxContainer.appendChild(noCard());
        return;
    }

    contents.forEach(content =>{
        console.log("contents",content);
        const card = document.createElement("div");
        card.innerHTML = `
        <div class="v-card">
            <div class="thumbnail-container">
                <img class="thumbnail" src=${content.thumbnail} alt="thumbnail">
                ${postedTime(content.others.posted_date)}
            </div>
            <div class="d-flex p-3 gap-2">
                <img class="prifile-img" src=${content.authors[0].profile_picture} alt="profile">
                <div>
                    <h6>${content.title}</h6>
                    <p class="mb-2">${content.authors[0].profile_name}<span> ${isVerified(content.authors[0].verified)}</span></p>
                    <p class="text-secondary">${content.others.views} views</p>
                </div>
            </div>
        </div>
        `
        boxContainer.appendChild(card);
    });
};


function category(id)
{
    boxContainer.innerHTML = ""; // clear loaded container
    fetch(`https://openapi.programming-hero.com/api/videos/category/${id}`)
        .then(res => res.json())
        // .then(info => console.log(info.data))
        .then(info => addCard(info.data))
        .catch(err => console.log(err));
};
category(1000); // default call


function sortedView(id)
{
    fetch("https://openapi.programming-hero.com/api/videos/category/1000")
        .then(res => res.json())
        .then(info => {
            console.log("before",info.data);

            let contents = info.data;
            contents.sort(function(a,b){ // compare function ???
                let x = parseFloat(a.others.views.slice(0,-1));
                let y = parseFloat(b.others.views.slice(0,-1));
                return y-x;
            })
            console.log("sorted",info.data);

            boxContainer.innerHTML = ""; // clear loaded container
            addCard(contents);
        })
        .catch(err => console.log(err));
};





