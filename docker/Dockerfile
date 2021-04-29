# escape=`

FROM mcr.microsoft.com/windows:20H2

SHELL ["cmd", "/S", "/C"]

# visual studioのビルドツール（コマンドラインツールのみ）のインストーラ
ADD https://aka.ms/vs/16/release/vs_buildtools.exe C:\TEMP\vs_buildtools.exe

# 上記インストーラの実行
# --allで全部インストール
RUN C:\TEMP\vs_buildtools.exe --quiet --wait --norestart --nocache `
    --installPath C:\BuildTools `
    --all `
    --remove Microsoft.VisualStudio.Component.Windows10SDK.10240 `
    --remove Microsoft.VisualStudio.Component.Windows10SDK.10586 `
    --remove Microsoft.VisualStudio.Component.Windows10SDK.14393 `
    --remove Microsoft.VisualStudio.Component.Windows81SDK `
 || IF "%ERRORLEVEL%"=="3010" EXIT 0

# --addで必要そうなやつだけインストール
# Visual Studio Build Tools のコンポーネント ディレクトリ
# https://docs.microsoft.com/ja-jp/visualstudio/install/workload-component-id-vs-build-tools?view=vs-2019#c-build-tools
# RUN C:\TEMP\vs_buildtools.exe --quiet --wait --norestart --nocache `
#     --installPath C:\BuildTools `
#     --add Microsoft.VisualStudio.Workload.ManagedDesktopBuildTools `
#     --add Microsoft.VisualStudio.Workload.VCTools `
#     --remove Microsoft.VisualStudio.Component.Windows10SDK.10240 `
#     --remove Microsoft.VisualStudio.Component.Windows10SDK.10586 `
#     --remove Microsoft.VisualStudio.Component.Windows10SDK.14393 `
#     --remove Microsoft.VisualStudio.Component.Windows81SDK `
#  || IF "%ERRORLEVEL%"=="3010" EXIT 0

ENTRYPOINT ["C:\\BuildTools\\Common7\\Tools\\VsDevCmd.bat", "&&", "powershell.exe", "-NoLogo", "-ExecutionPolicy", "Bypass"]