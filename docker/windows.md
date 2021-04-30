## メモ

### 同梱[Dockerfile]

- Windows10
- ビルドバージョン：20H2

### Windows コンテナ

- Docker Hub
- https://hub.docker.com/_/microsoft-windows
- Build Tools をコンテナーにインストールする
- https://docs.microsoft.com/ja-jp/visualstudio/install/build-tools-container?view=vs-2019
- 参考:Windows コンテナで VC++ プロジェクトのビルド環境を作る
- https://blog.techlab-xe.net/windows-container-and-vcbuildtools/

### GITポータル

- MinGit-2.18.0-64-bit.zip
- https://github.com/git-for-windows/git/releases/tag/v2.18.0.windows.1
- 解凍後のmingw64をとりあえず入れてパス通したらcloneできた（パスワードなしgithub）

### ビルド対象

- チュートリアル: MSBuild プロジェクト ファイルのゼロからの作成
- https://docs.microsoft.com/ja-jp/visualstudio/msbuild/walkthrough-creating-an-msbuild-project-file-from-scratch?view=vs-2019