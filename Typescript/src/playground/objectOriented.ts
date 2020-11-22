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
