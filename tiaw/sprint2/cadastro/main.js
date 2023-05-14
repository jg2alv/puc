(function() {
    const form = document.querySelector('form');

    form.addEventListener('submit', evt => {
        evt.preventDefault();

        const name = document.querySelector('#name');
        const age = document.querySelector('#age');
        const spec = document.querySelector('#species');
        const desc = document.querySelector('#desc');
        const photo = document.querySelector('#photo');
        const pet = {
            'name': name.value,
            'age': age.value,
            'species': spec.value,
            'desc': desc.value,
            'photo': photo.value
        };

        if(localStorage.getItem('PETS_ADOCAO') === null) {
            localStorage.setItem('PETS_ADOCAO', JSON.stringify([pet]));
        } else {
            const oldpets = JSON.parse(localStorage.getItem('PETS_ADOCAO'));
            oldpets.push(pet);
            localStorage.setItem('PETS_ADOCAO', JSON.stringify(oldpets));
        }

        evt.target.reset();
    });
})()