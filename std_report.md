# std

## std の基本のコード?
stdについて簡単にまとめてみました。  
簡単に調べただけなので、指摘等お願いします。

以下は、 std::cout の基本的な書き方です。  

![](https://github.com/hiroto1130/image_preservation/blob/master/std/std%201.png?raw=true)  

### ヘッダについて  

使用するヘッダは
- #include "iostream" 入出力関連ヘッダ
- #include "fstream"  ファイル入出力関連ヘッダ  
※ <> の代わりに "" を使っています。  

の二種類です。  

### 書き方の違いについて

書き方の違いは以下の通りです。  

|std|C言語|基本？|
|:-|:-|:-|
|cout|console out|printf|
|endl|end of line|\n|

### 違いについて

|std|記号|c言語|C++|
|:-|:-|:-|:-|
|出力演算子|<<|左シフト|演算子|
|入力演算子|>>|右シフト|演算子|

 
## using namespace を使用したコード

使用例が以下のコードになります。

![](https://github.com/hiroto1130/image_preservation/blob/master/std/std%202.png?raw=true)

using namespace std;
上記のコードで、std 名前空間をデフォルトで参照可能（可視状態）にすることが出来ます。

なので、基本は  

#include "iostream"  
using namespace std;  

を使うのが一般的とか、サイトには書いてありました。  

## 変数について

変数を表示させたい場合、以下のコードの様に、 << HP << と書く必要があるみたいです。  
なので、「"体力は %d です",HP」と表記させていたのが、「"体力は" << HP << "です"」という風に書かないと駄目？みたいです。  

![](https://github.com/hiroto1130/image_preservation/blob/master/std/std%203.png?raw=true)









