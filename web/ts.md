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
