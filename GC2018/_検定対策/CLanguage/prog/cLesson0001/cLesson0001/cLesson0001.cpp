//
// C Lesson 0001 : �z��
// 2018.6.19
//

#include "stdafx.h"

#include <stdio.h>		// printf,scanf �Ȃǂ̊֐��p�w�b�_�t�@�C��
#include <stdlib.h>		// ���[�e�B���e�B�֐��p�̃w�b�_�t�@�C��

// main�֐�:����������s����܂��B
void main(void)
{
	int hensuu;			// ����͕ϐ�
	int hairetsu[10];	// ����͔z�� int�^�ϐ���10��

	hensuu = 100;		// �ϐ��ɂ͂ЂƂ����l������Ȃ�
						//hensuu = 10;		// ��������ƒ��g�͏㏑������"10"�ɂȂ�B

	printf("%d", hensuu);
	printf("\n");		// ���s�R�[�h��W���o�͂֏o��

						// ���Ⴀ�z��́H 10�����́H
						//  ���G���[�ɂȂ�B����O����I�I
						//hairetsu[] = {0,1,2,3,4,5,6,7,8,9};

						// ���Ԃɓ���邵���Ȃ��H
	hairetsu[0] = 0;
	hairetsu[1] = 1;
	hairetsu[2] = 2;
	// �����������Ă݂܂��傤

	// ���Ԃɕ\��������
	printf("hairetsu[0]�̃f�[�^=%d\n", hairetsu[0]);
	printf("hairetsu[1]�̃f�[�^=%d\n", hairetsu[1]);
	printf("hairetsu[2]�̃f�[�^=%d\n", hairetsu[2]);
	// �����������Ă݂܂��傤

	printf("\n");		// ���s�R�[�h��W���o�͂֏o��
}