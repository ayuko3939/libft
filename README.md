# libft

42スクールのlibftプロジェクト - C標準ライブラリの関数の再実装

## 概要

libftは、C標準ライブラリの基本的な関数を独自に実装したライブラリです。文字列操作、メモリ管理、型判定などの基本的な機能を提供します。

## 構成

### Part 1 - C標準ライブラリ関数の再実装

**文字の型判定・変換**
- `ft_isalpha` - アルファベット文字かどうかを判定
- `ft_isdigit` - 数字文字かどうかを判定
- `ft_isalnum` - 英数字かどうかを判定
- `ft_isascii` - ASCII文字かどうかを判定
- `ft_isprint` - 印刷可能文字かどうかを判定
- `ft_toupper` - 小文字を大文字に変換
- `ft_tolower` - 大文字を小文字に変換

**文字列操作**
- `ft_strlen` - 文字列の長さを取得
- `ft_strchr` - 文字列内で文字を検索
- `ft_strrchr` - 文字列内で文字を逆方向検索
- `ft_strncmp` - 文字列を指定文字数まで比較
- `ft_strnstr` - 部分文字列を検索
- `ft_strlcpy` - 文字列を安全にコピー
- `ft_strlcat` - 文字列を安全に連結

**メモリ操作**
- `ft_memset` - メモリ領域を指定値で埋める
- `ft_bzero` - メモリ領域を0で埋める
- `ft_memcpy` - メモリ領域をコピー
- `ft_memmove` - 重複を考慮したメモリコピー
- `ft_memchr` - メモリ領域内で値を検索
- `ft_memcmp` - メモリ領域を比較

**変換・メモリ割り当て**
- `ft_atoi` - 文字列を整数に変換
- `ft_calloc` - 初期化されたメモリを割り当て
- `ft_strdup` - 文字列を複製

### Part 2 - 追加関数

- `ft_substr` - 部分文字列を作成
- `ft_strjoin` - 2つの文字列を連結
- `ft_strtrim` - 指定文字を文字列の前後から除去
- `ft_split` - 区切り文字で文字列を分割
- `ft_itoa` - 整数を文字列に変換
- `ft_strmapi` - 文字列の各文字に関数を適用
- `ft_striteri` - 文字列の各文字に関数を適用（void版）

**ファイル出力**
- `ft_putchar_fd` - 文字をファイルディスクリプタに出力
- `ft_putstr_fd` - 文字列をファイルディスクリプタに出力
- `ft_putendl_fd` - 文字列と改行をファイルディスクリプタに出力
- `ft_putnbr_fd` - 数値をファイルディスクリプタに出力

### Bonus - 連結リスト操作

- `ft_lstnew` - 新しいリストノードを作成
- `ft_lstadd_front` - リストの先頭にノードを追加
- `ft_lstsize` - リストのサイズを取得
- `ft_lstlast` - リストの最後のノードを取得
- `ft_lstadd_back` - リストの末尾にノードを追加
- `ft_lstdelone` - 単一ノードを削除
- `ft_lstclear` - リスト全体をクリア
- `ft_lstiter` - リストの各ノードに関数を適用
- `ft_lstmap` - リストの各ノードに関数を適用して新しいリストを作成

## ビルド方法

```bash
# 基本ライブラリをビルド
make

# ボーナス部分も含めてビルド
make bonus

# オブジェクトファイルを削除
make clean

# ライブラリファイルも含めて削除
make fclean

# 再ビルド
make re
```

## 使用方法

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, World!");
    ft_putstr_fd(str, 1);
    free(str);
    return (0);
}
```

コンパイル時にライブラリをリンク：
```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

## 作者

yohasega (yohasega@student.42.fr)
