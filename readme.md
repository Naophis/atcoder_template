# atcoder_template

atcoder用のワークスペース  
テンプレートのcppの作成、コンパイルコマンドなどを提供します。

## 利用準備

### AC(AtCoder)Libraryの導入

AtCoderが提供するACLを利用します。  
https://github.com/atcoder/ac-library のリリースからlatestのzipファイルを取得してください。（当ワークスペースの中には入れる必要はありません。）

ビルド時に使用するため、環境変数`ACLib_dir`にatcoder-libraryを格納先ディレクトリを指定してください。  

以下格納先の例
```bash
~/cpp_lib_dir # ここを環境変数に指定
└ atcoder/ # 本家からダウンロードしたzipファイルを展開したディレクトリ
```

### ワークスペースの作成

clone直後はコーディング用のcppファイルは生成されていません。
以下のコマンドを実行してください。

```bash
./make_ws.sh # template/template.cppを使い、no1~no6のcppファイルを生成します。
```

### ビルド

以下のビルド方法を想定しています。
1. CMakeLists.txtを使った全ビルド  
  clionでの利用を想定し、no1~no6.cppのファイルに対して、実行ファイルを生成する用記述してあります。
2. g++を使った個別ビルド
  引数に番号を指定してビルドします。

```bash
# 全ビルド
./all_build.sh # 実行ファイルはtmp/に格納されます。

# 個別ビルド
./build.sh 1 # 第１引数のファイル(no${1}.cpp)をg++コマンドを内部で叩いてビルドします。実行ファイルは、cppと同じ階層に出力されます。
```