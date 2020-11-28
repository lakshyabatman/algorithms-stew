const Person: { name: string } = {
    name: 'Lakshya',
};
class Emoji {
    private _prev: string;
    constructor(private _icon: string) {
        this._prev = '';
    }

    get icon() {
        return this._icon;
    }
    get prev() {
        return this._prev;
    }

    change(val: string) {
        this._prev = this._icon;
        this._prev = val;
    }

    static saySomething(): void {
        console.log(this);
    }
}

const emoji = new Emoji('<3');
emoji.change(':3');
console.log(emoji.icon, emoji.prev);
Emoji.saySomething();

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

// Generics

function hello<T>(name: T): void {
    console.log(`hello ${name}`);
}

hello('Kayb hoe');

function someRandomFunction<T>(arg: T): T {
    return arg;
}

const someRandomVariable: <T>(arg: T) => T = someRandomFunction;

someRandomVariable('Hello');

const someRandomVariable1: { <T>(arg: T): T } = someRandomFunction;

someRandomVariable1('Hello');

// generic class

class GenericClass<T> {
    someValue!: T;
    add!: (a: T, b: T) => T;
}

const genericObject = new GenericClass<number>();
genericObject.someValue = 2;
genericObject.add = (a: number, b: number) => a + b;
console.log(genericObject.add(2, 2));

const x = { a: 1, b: 2, c: 3 };

function someAnotherRandomFunction<T>(x: T, key: keyof T): T[keyof T] {
    return x[key];
}

console.log(someAnotherRandomFunction(x, 'a'));

// Generic Factory

function create<T>(c: { new (val: string): T }, val: string): T {
    return new c(val);
}

console.log(create(Emoji, ';)'));
