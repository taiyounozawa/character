<div id="top"></div>
// TEST README

# キャラクター戦闘シミュレーション



## 使用技術一覧

<!-- シールド一覧 -->
<!-- 該当するプロジェクトの中から任意のものを選ぶ-->
<p style="display: inline">
 <img src="https://img.shields.io/badge/-Cplusplus-00599C.svg?logo=cplusplus&style=plastic">
</p>

## 概要

これは、C++で書かれたシンプルなコンソールベースのキャラクター戦闘シミュレーションです。
Characterクラスを定義し、2体のキャラクター（ヒーローとモンスター）が互いに一度ずつ攻撃しあう様子を描画します。
オブジェクト指向プログラミングの基本的な概念（クラス、オブジェクト、メソッド）を示すためのサンプルコードです。

## 機能

- **キャラクターの作成**: 名前、体力（health）、攻撃力（attackPower）を持つキャラクターを作成できます。
- **ステータス表示**: キャラクターの現在のステータスをコンソールに表示します。
- **攻撃**: あるキャラクターが別のキャラクターを攻撃し、ダメージを与えることができます。
- **ダメージ計算**: 攻撃を受けると、キャラクターの体力から攻撃者の攻撃力分のダメージが引かれます。体力が0以下になると、そのキャラクターは倒れます。

## 実行方法

1.  **コンパイル**: C++コンパイラ（例: g++）を使用してソースコードをコンパイルします。
    ```shell
    g++ main.cpp -o battle_simulation
    ```

2.  **実行**: コンパイルして生成された実行可能ファイルを実行します。
    ```shell
    ./battle_simulation
    ```

### 実行結果の例

```console
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
