<div id="top"></div>
// TEST README
<h1>
キャラクター戦闘シミュレーション
</h1>


## 使用技術一覧

<!-- シールド一覧 -->
<!-- 該当するプロジェクトの中から任意のものを選ぶ-->
<p style="display: inline">
 <img src="https://img.shields.io/badge/-Cplusplus-00599C.svg?logo=cplusplus&style=plastic">
</p>
<br>


## 概要
<p>
これは、C++で書かれたシンプルなコンソールベースのキャラクター戦闘シミュレーションです。<br>
Characterクラスを定義し、2体のキャラクター（ヒーローとモンスター）が互いに一度ずつ攻撃しあう様子を描画します。<br>
オブジェクト指向プログラミングの基本的な概念（クラス、オブジェクト、メソッド）を示すためのサンプルコードです。
</p>
<br>

## 機能
<p>
 <li><b>キャラクターの作成</b>: 名前、体力（health）、攻撃力（attackPower）を持つキャラクターを作成できます。</li>
 <li><b>ステータス表示</b>: キャラクターの現在のステータスをコンソールに表示します。</li>
 <li><b>攻撃</b>: あるキャラクターが別のキャラクターを攻撃し、ダメージを与えることができます。</li>
 <li><b>ダメージ計算</b>: 攻撃を受けると、キャラクターの体力から攻撃者の攻撃力分のダメージが引かれます。体力が0以下になると、そのキャラクターは倒れます。</li>
</p>
<br>

## 実行方法
<ol>
<li><b>コンパイル</b>: C++コンパイラ（例: g++）を使用してソースコードをコンパイルします。</li><br>

```
g++ main.cpp -o battle_simulation
```
<br>

<li><b>実行</b>: コンパイルして生成された実行可能ファイルを実行します。</li><br>

```
./battle_simulation
```
</ol>
<br>

<b>実行結果の例</b><br>
```
-hero-
Health:100
Attack Power:20

-Boss-
Health:1000
Attack Power:10

heroはBossに攻撃した！
Bossはheroに攻撃した！

-hero-
Health:90
Attack Power:20

-Boss-
Health:980
Attack Power:10
```
