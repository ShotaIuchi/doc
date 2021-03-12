# 問題解決

## 「index.js:2 Uncaught ReferenceError: exports is not defined」

[exports]がないよ！って怒られる
```typescript
// TypeScript
export class User {
    public age: number
    public constructor(age: number) {
        this.age = age
    }
}
```
↓
```shell
$ npx tsc
```
↓
```javascript
// JavaScript
"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.User = void 0;
var User = /** @class */ (function () {
    function User(age) {
        this.age = age;
    }
    return User;
}());
exports.User = User;
```
[module]が[commmonjs]はダメっぽい。

#### tsconfig.json
- NG
```json
    "module": "commonjs",
```
- OK
```json
    "module": "es2015",
```

## 「Uncaught SyntaxError: Unexpected token 'export'」

[export]をつける必要があるが[export]をつけるとエラーを吐く

```typescript
export class User {
    public age: number
    public constructor(age: number) {
        this.age = age
    }
}
```
- SEE1
https://stackoverflow.com/questions/38296667/getting-unexpected-token-export
- SEE2
https://developer.mozilla.org/ja/docs/Web/JavaScript/Guide/Modules
```
モジュールが指し示されているとき、それを示すために <script type="module"> 属性を使用します。
```

[type="module"]必要らしい。

- NG
```html
<script src="module.js"></script>
```
- OK
```html
<script type="module" src="module.js"></script>
```