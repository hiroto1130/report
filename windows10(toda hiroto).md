# windows10についてのレポート

## Win10のアップデートの種類について

windows10のアップデートは以下の 3 種類がある。  
1. [Feature](https://ejje.weblio.jp/content/feature)  Update  
2. [Quality](https://ejje.weblio.jp/content/Quality)  Update
3. [Security](https://ejje.weblio.jp/content/Security) Update

まず１つ目の「  [Feature](https://ejje.weblio.jp/content/feature) Update」について。  
このアップデートは年に2回、4月と10月にあり配布される。  
主にこのアップデートでは**新しい機能の追加**がメインになる。  
今年の4月にあった大型アップデートの「windows10 May 2019 Update 1903」もこのアップデートである。  
そして、このアップデートは特定のビルド番号を持ち。  
バージョンについては20**19**年の**03**月にアップデートされたことから「1903」となっている、

次に２つ目の「Quality  Update」について。  
このアップデートは**毎月**配布されるアップデートでマイクロソフトソフト社内での細かなアップデートを１ヶ月まとめて配布したもの。  

最後に３つ目の「Security Update」について。  
このアップデートは決まった時期というものは無く、必要に応じて臨時で配布されることが多い。
このアップデートは**セキュリティ関係**を主としており、一番新しいこのアップデートは2019年06月12日に実装されたアップデートでマイクロソフトが新たに確認したWindowsの脆弱性についてのアップデートがありました。  

補足：Windows10のアップデートタイミングについての図解

![](https://image.itmedia.co.jp/ait/articles/1804/13/wi-win10updatesupport01.png)

[参考にさせて頂いたサイト様](https://www.atmarkit.co.jp/ait/articles/1804/13/news024.html)  
2019年06月12日にあったアップデート内容については[こちら](https://blogs.technet.microsoft.com/jpsecurity/2019/06/12/201906-security-updates/)を参照

***

## バージョン番号 ビルド番号について

まず、バージョン番号について。  
windows10のアップデートには上記に記述した通り３種類あり、バージョン番号が付くのは「 Featur Update」のアップデートです。  
このアップデートにで付くバージョン番号は YYMM ( year year month month )の法則で付けられています。

次にビルド番号について。  
ビルド番号とは、アプリや[OS](https://ja.wikipedia.org/wiki/%E3%82%AA%E3%83%9A%E3%83%AC%E3%83%BC%E3%83%86%E3%82%A3%E3%83%B3%E3%82%B0%E3%82%B7%E3%82%B9%E3%83%86%E3%83%A0)などコンピューターのプログラムに付けられる番号です。いつ作られたものか示しており、一般的には、数の少ない方が古く、多い方が新しくなっています。

以上のことから基本的に  

- 「バージョン番号が変わるのは大きな変更」
- 「ビルド番号が変わるのは設計変更がなく、修正などを施した小さな変更」

となっていることが多いようです。

余談ですが自分のパソコンのバージョン番号とビルド番号の簡単な確認の仕方は、[ Windows key ] と [R key]　の両方を押し、出てくる画面に [ winver ] と入れる事で、表示させる事ができます。

![](https://github.com/hiroto1130/image_preservation/blob/master/Windowskey_R1.png?raw=true)
＊[ windows key ]　と [ R key ] を押したときの画面  
![](https://github.com/hiroto1130/image_preservation/blob/master/Windowskey_R2.png?raw=true)
＊[ winver ] 入力後画面

現在の自分が使用するパソコンのバージョン番号とビルド番号は  

- バージョン 1809  
- [OS](https://ja.wikipedia.org/wiki/%E3%82%AA%E3%83%9A%E3%83%AC%E3%83%BC%E3%83%86%E3%82%A3%E3%83%B3%E3%82%B0%E3%82%B7%E3%82%B9%E3%83%86%E3%83%A0) ビルド　17763.557  

となっていました。  
上で述べた通り、バージョン番号の「1809」は 20**18**年 **09**月 にアップデートされたことを示しています。
もし、今回のWWDCで発表されたアップデートをした場合、バージョン番号が「1903」に変更されます。

***

## 今回のアップデート内容について

主なアップデート内容は以下の通りです。

- Windowsサンドボックス
- ライトテーマ
- Windowsアップデートの保留
- クラウドグリップボード
- シンボル入力
- マウスをカスタマイズ

以下詳細説明になります。

### サンドボックスについて

サンドボックス([Sandbox](https://ejje.weblio.jp/content/Sandbox))の機能は名前そのままの機能だったりします。
主となる機能については**隔離された環境内でアプリを実行できる機能**です。  
わかりやすく言うと、この機能を使えば自分のWindowsを危険にさらすことなくアプリの実験や検証に使用できる、ということです。
具体的には、アプリに何らかの、危険性が潜んでおりwindowが使えなくなってしまっても、サンドボックス内で行えばサンドボックスで作られた環境を捨てるだけで済む、ということです。  

### ライトテーマについて

これは実際にやってみるとわかりやすいです  
スタートメニュー -> 個人設定 -> 色  
の手順で設定ができます。
これをすることで、スタートメニューの色を設定できる。

黒に変更時
![](https://github.com/hiroto1130/image_preservation/blob/master/2019-06-22-18.png?raw=true)

赤に変更時
![](https://github.com/hiroto1130/image_preservation/blob/master/2019-06-22-19.png?raw=true)

### Windowsアップデートの保留機能について
  
この機能は一定期間（35日間）、Windowsアップデートを保留する機能です。  
設定期間が過ぎると、再延期をしないかぎり、そのあいだに更新を保留していたアップデートがすべて強制的にインストールされます。

### クラウドグリップボードについて

設定の仕方は  
システム -> クリップボード -> クリップボードの履歴 -> デバイス間で同期する をオン  
これで、［CTRL］＋［V］のかわり［Windowsキー］＋［V］を押すと、クリップボード履歴がポップアップで表示され、好きな履歴を選んで貼り付けることができるようになります。

実行結果
![](https://github.com/hiroto1130/image_preservation/blob/master/Windowskey_V1.png?raw=true)

### シンボル入力について

［Windowsキー］＋［ : ］で、たくさんのシンボルを含んだ絵文字パネルを表示させることができる機能です。

＊実行結果
![](https://github.com/hiroto1130/image_preservation/blob/master/Windowskey_paint1.png?raw=true)
### マウスカスタマイズについて

設定方法は  
［簡単操作］ ＞［カーソルとポインター］  
と進むと、マウスポインターのサイズやカラーを変更できます。

以上で簡易的なWindows 10 May Update　1903 の説明を終わります。

[参考にさせて頂いたサイト様](https://www.lifehacker.jp/2019/06/192126windows10-may-2019-update.html)  

***

## win10のエディション毎の違いについて

Windows10には4種類のエディションがあります、名前については以下の通りです。  
  
 1. Home
 2. Pro
 3. Enterprise
 4. Education

これらの使用規格を細分化すると以下の通りです。

- 個人で使用する・・・Home / Pro
- 中小企業で使用する・・・Pro / Enterprise
- 大企業で使用する・・・Enterprise
- 教育機関で使用する・・・Education

ここからは自分達が一番使用することが多いであろう[**Home**]と[**Pro**]の違いです。

Homeに無くてProに有る機能は

- ドメイン管理できる
- リモートデスクトップが使える
- BitLockerで暗号化できる
- Hyper-Vで仮想マシンが使える

という点です。以下説明になります。

#### ドメイン管理について

まず、ドメイン([domain](https://ejje.weblio.jp/content/domain))とは,
噛み砕いて言えば「住所」みたいなものです。  
ドメインの例として「～.jp」みたいな物をドメインと呼びます。
そして、ドメインにも種類がありますがここでは省略させていただきます。
詳しく知りたい人は[ここ](https://ja.wikipedia.org/wiki/%E3%83%89%E3%83%A1%E3%82%A4%E3%83%B3%E5%90%8D)から。  
ドメイン管理するメリット、デメリットについては[こちら](https://webtan.impress.co.jp/e/2014/03/27/17182)を参照。

[参考にさせて頂いたサイト様]()
#### リモートデスクトップについて

まず、リモートデスクトップとは。
手元のコンピュータからネットワークで接続された他のコンピューターのGUIやデスクトップ環境を操作する技術の総称である。(Wikipedia参照)
そして、Windows10 のこの機能を使えば、外出先でも 自宅 or 会社 のパソコンに接続することができます。
設定方法は[こちら](https://forest.watch.impress.co.jp/docs/serial/win10tips/1154641.html)を参照。

#### BitLockerについて

「BitLocker」とは、Windows 10 に搭載されているデータを暗号化する機能です。ドライブをまるごと暗号化することで、不正なアクセスから情報を守る。そのため、出先や移動中にPCを紛失またはUSBメモリーや外付けHDDを抜き取られたとしても、暗号解除のパスが無ければ解読できない。
この機能は Windows10 Home でも使用はできますが、Home で使える機能、暗号化[ドライブ](http://e-words.jp/w/%E3%83%89%E3%83%A9%E3%82%A4%E3%83%96.html)のロック解除/読み書き。[CUI(character user interface)](https://ja.wikipedia.org/wiki/%E3%82%AD%E3%83%A3%E3%83%A9%E3%82%AF%E3%82%BF%E3%83%A6%E3%83%BC%E3%82%B6%E3%82%A4%E3%83%B3%E3%82%BF%E3%83%95%E3%82%A7%E3%83%BC%E3%82%B9)の管理ツール に加えて、[ドライブ](http://e-words.jp/w/%E3%83%89%E3%83%A9%E3%82%A4%E3%83%96.html)の暗号化、[GUI(Graphical User Interface)](https://ja.wikipedia.org/wiki/%E3%82%B0%E3%83%A9%E3%83%95%E3%82%A3%E3%82%AB%E3%83%AB%E3%83%A6%E3%83%BC%E3%82%B6%E3%82%A4%E3%83%B3%E3%82%BF%E3%83%95%E3%82%A7%E3%83%BC%E3%82%B9)の管理ツール が追加されます。

#### Hyper-V、仮想マシンについて

Hyper-Vとは、
マイクロソフトが提供する[ハイパーバイザ](https://ja.wikipedia.org/wiki/%E3%83%8F%E3%82%A4%E3%83%91%E3%83%BC%E3%83%90%E3%82%A4%E3%82%B6)ベース(hyper visor base)のx64向け[仮想化システム](http://itdoc.hitachi.co.jp/manuals/link/cosmi_v0870/APVK/EU180006.HTM)で、1台のコンピュータ（サーバ）で複数の[仮想マシン](https://ja.wikipedia.org/wiki/%E4%BB%AE%E6%83%B3%E6%A9%9F%E6%A2%B0)を実現する機能のことです。

