:root {
    --text-color: #353535;
    --main-background: #f7f7f4;
    --secondary-background: #231f20;
    --accent-color: #fcce01;
}

body {
    margin: 0px;
    font-family: arial;
    color: var(--text-color);
    background-color: var(--main-background);
}

.navbar {
    display: flex;
    flex: 1 1 auto;
    justify-content: space-evenly;
    background-color: var(--secondary-background);
    padding: 12px;
}

.navbar a {
    color: var(--accent-color);
    text-decoration: none;
    font-weight: bold;
}

@media (max-width: 500px) {
    .navbar a img {
        display: none;
    }

    .navbar a {
        font-size: 14px;
    }

    .doubleColumn {
        flex-wrap: wrap;
    }
}

h2 {
    text-align: center;
}

h3 {
    text-align: center;
}


.icon {
    width: 12px;
    filter: invert(73%) sepia(80%) saturate(598%) hue-rotate(358deg) brightness(99%) contrast(105%);
}

.title {
    border-color: var(--accent-color);
    border-bottom-style: solid;
    border-bottom-width: 2px;
    padding-bottom: 5px;
}

main {
    display: flex;
    flex: 1 1 auto;
    justify-content: center;
    height: 100%;
}

.content {
    display: flex;
    flex: 1 1 auto;
    flex-direction: column;
    max-width: 700px;
    height: 100%;
    padding-left: 12px;
    padding-right: 12px;
    justify-content: center;
}

.bibliography p {
    text-indent: 3em hanging;
}

.bibliography a {
    color: var(--text-color);
    text-decoration: none;
}

.freeResponse {
    /*background-color: var(--secondary-background);*/
    /*color: var(--main-background);*/
    margin-left: 48px;
    padding: 6px;
    border-radius: 6px;
}

.divider {
    border-color: var(--accent-color);
    border-bottom-style: solid;
    border-bottom-width: 2px;
    margin-bottom: 12px;
    margin-top: 12px;
}

.doubleColumn {
    display:flex;
    gap:12px;
    justify-content:center;
    align-items:center;
    align-self:center;
}

img {
    max-width: 100%;
    max-height: 100%;
}

h2 {
    color: var(--text-color);
}

canvas {
    margin-top: 12px;
    margin-bottom: 12px;
}

ol { 
    padding-left: 0px;
}

li {
    list-style-position: inside;
}

.interviewResponse {
    margin-top: 12px;
    margin-bottom: 12px;
}
