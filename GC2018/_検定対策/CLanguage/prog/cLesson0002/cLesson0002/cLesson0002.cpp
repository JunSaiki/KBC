// C Lesson 0002 �z��ƕ����� 
// 2018.6.19
//

#include "stdafx.h"

#include <stdio.h>		// printf,scanf �Ȃǂ̊֐��p�w�b�_�t�@�C��
#include <stdlib.h>		// ���[�e�B���e�B�֐��p�̃w�b�_�t�@�C��

// main�֐�:����������s����܂��B
void main(void)
{
	// ����͔z�� int�^�ϐ���10��
	int hairetsu[10] = { 0,1,2,3,4,5,6,7,8,9 };	
	
	// ����͕�����@char�^�ϐ���10��   ������͕����̐���
	char mojiretsu[10] = { '0','1','2','3','4','5','6','7','8','9' };

	// ���Ԃɕ\��������(int�^�z��)
	printf("���Ԃɕ\��������(int�^�z��)\n");
	printf("hairetsu[0]�̃f�[�^=%d\n", hairetsu[0]);
	printf("hairetsu[1]�̃f�[�^=%d\n", hairetsu[1]);
	printf("hairetsu[2]�̃f�[�^=%d\n", hairetsu[2]);
	// �����������Ă݂܂��傤

	printf("\n");		// ���s�R�[�h��W���o�͂֏o��

	// ���Ԃɕ\��������(char�^�z��)
	printf("���Ԃɕ\��������(char�^�z��)\n");
	printf("mojiretsu[0]�̃f�[�^=%c(%d)\n", mojiretsu[0], mojiretsu[0]);
	printf("mojiretsu[1]�̃f�[�^=%c(%d)\n", mojiretsu[1], mojiretsu[1]);
	printf("mojiretsu[2]�̃f�[�^=%c(%d)\n", mojiretsu[2], mojiretsu[2]);
	// �����������Ă݂܂��傤

	// ������Ƃ��ĕ\�� %s
	//printf("������Ƃ��ĕ\�� mojirestu=%s", mojiretsu);

	// ?? �Ȃ񂩂�������

	printf("\n");		// ���s�R�[�h��W���o�͂֏o��
}