const Person: { name: string } = {
    name: 'Lakshya',
};

function sayName(Person: { name: string }) {
    return Person.name;
}

function greed(): void {
    console.log('Hello world');
}

let helloSpeaker: (Person: { name: string }) => string;
helloSpeaker = sayName;
console.log(helloSpeaker(Person));
// helloSpeaker = greed;
// helloSpeaker();
const complex: { name: string; sayName: () => string } = {
    name: 'Lakshya',
    sayName: function (): string {
        return this.name;
    },
};

console.log(complex.sayName());
// type Alias
type Complex = { name: string; sayName: () => string };

const complex2: Complex = {
    name: 'Lakshya',
    sayName: function (): string {
        return this.name;
    },
};
console.log(complex2.sayName());

//union types
let someRandom: string | number | boolean = true;
console.log(someRandom);
someRandom = 'Lakshya';
console.log(someRandom);
someRandom = 23;
console.log(someRandom);
// let hobbies  = ["Cooking","Coding","Reading"]

// hobbies[1] = 2;

const hobbies: [string, number] = ['Cooking', 2];
console.log(hobbies);

enum Colours {
    Red,
    Blue = 101,
    Green,
}

for (const colour in Colours) {
    console.log(colour);
}

function neverReturns(): never {
    throw new Error('UGHH');
}
// neverReturns();
