(function () {
    // if (localStorage.getItem('PETS_ADOCAO') === null) return;
    document.querySelector('#nothing').remove();

    localStorage.setItem('PETS_ADOCAO', '[{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"},{"name":"Black","age":6,"spec":"shih-tzu","desc":"Black, o cachorro branco","photo":"https://diariodonordeste.verdesmares.com.br/image/contentid/policy:7.4516804:1621518947/Shih-Tzu.jpg?f=default&$p$f=88cd607"}]')

    const ROWS = 3;

    const cnt = document.querySelector('#container');
    const pets = JSON.parse(localStorage.getItem('PETS_ADOCAO'));
    const numrows = Math.ceil(pets.length / ROWS);
    const rows = [];


    for (let i = 0; i < numrows; i++) {
        const row = document.createElement('div');
        row.classList.add('row', 'row-cols-3');
        cnt.appendChild(row);
        rows.push(row);
    }

    pets.forEach((pet, i) => {
        const col = document.createElement('div');
        const idx = Math.floor(i / ROWS);

        col.classList.add('col', 'btn');
        col.style.backgroundImage = `url(${pet['photo']})`;
        col.innerHTML = `<div class='list-group'><div class='list-group-item list-group-item-action flex-column align-items-start active'><div class='d-flex w-100 justify-content-between'><h5 class='mb-1'>${pet['name']}</h5><small>${pet['age']}</small></div><p class='mb-1'>${pet['desc']}</p><small>${pet['spec']}</small></div></div>`

        col.addEventListener('mouseover', () => {
            col.firstChild.style.display = 'block';
            col.style.backgroundImage = 'none';
        });

        col.addEventListener('mouseout', () => {
            col.firstChild.style.display = 'none';
            col.style.backgroundImage = `url(${pet['photo']})`;
        });

        rows[idx].appendChild(col);
    });
})();
