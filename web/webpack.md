# LINK

- とりあえず webpack を使ってみる
https://qiita.com/kerupani129/items/72c1a8d5ab6dffa70abf


# 概要

- モジュールバンドラ
    - モジュール＋バンドル
    - モジュール：細分ファイル
    - バンドル：結合ファイル

```
 app.js(エントリポイント) + user.js + etc.js
    ↓ webpack バンドル
 app.build.js (user.js + etc.js)
```

## 類似

- Browserify
- RequireJS


# Install

webpackでtypescriptで利用する場合はts-loaderが必要

- JavaScript
```shell
$ npm --save-dev install webpack webpack-cli
```

- TypeScript
    - webpackを使わないならtypescriptのみでもいい。
    - $ npx tsc でjsにビルドしてjsとして利用するならwebpack不要
```shell
// typescript
$ npm --save-dev install typescript
// webpack用
$ npm --save-dev install webpack webpack-cli ts-loader
```


