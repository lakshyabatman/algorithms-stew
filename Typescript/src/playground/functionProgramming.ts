type State = { counter: number; data: number[] };

let state: State = {
    counter: 0,
    data: [],
};

state = Object.freeze({ ...state });

// state.counter++;

const addCounterBy = (val: number) => {
    return (state: State) => {
        const newState = { ...state };
        newState.counter += val;
        return newState;
    };
};

const addCounterBy3 = addCounterBy(3);

const addCounterBy4 = addCounterBy(4);

const appendData = (val: number): ((state: State) => State) => {
    return (state: State) => {
        const newState = { ...state };
        newState.data.push(val);
        return newState;
    };
};
const append2 = appendData(2);
const append3 = appendData(3);

state = addCounterBy3(state);
state = addCounterBy4(state);
console.log(state);
state = append3(state);
state = append2(state);

console.log(state);
