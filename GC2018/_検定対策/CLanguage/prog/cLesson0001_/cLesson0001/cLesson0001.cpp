//
// C Lesson 0001 : 配列
// 2018.6.19
//

#include "stdafx.h"

#include <stdio.h>		// printf,scanf などの関数用ヘッダファイル
#include <stdlib.h>		// ユーティリティ関数用のヘッダファイル

// main関数:ここから実行されます。
void main(void)
{
	int hensuu;			// これは変数
	int hairetsu[10];	// これは配列 int型変数が10個

	hensuu = 100;		// 変数にはひとつしか値が入らない
						//hensuu = 10;		// こうすると中身は上書きされ"10"になる。

	printf("%d", hensuu);
	printf("\n");		// 改行コードを標準出力へ出力

						// じゃあ配列は？ 10個入れるの？
						//  ↓エラーになる。※例外あり！！
						//hairetsu[] = {0,1,2,3,4,5,6,7,8,9};

						// 順番に入れるしかない？
	hairetsu[0] = 0;
	hairetsu[1] = 1;
	hairetsu[2] = 2;
	// 続きを書いてみましょう

	// 順番に表示させる
	printf("hairetsu[0]のデータ=%d\n", hairetsu[0]);
	printf("hairetsu[1]のデータ=%d\n", hairetsu[1]);
	printf("hairetsu[2]のデータ=%d\n", hairetsu[2]);
	// 続きを書いてみましょう

	printf("\n");		// 改行コードを標準出力へ出力
}