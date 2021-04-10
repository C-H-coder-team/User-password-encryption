#pragma once
#ifndef HEAD_FILE_H//ͷ�ļ�'s name(��д)
#define HEAD_FILE_H//ͷ�ļ�'s name(��д)ͬ��
#include"stdc++.h"//����д���Ǹ�ͷ�ļ�"stdc++.h"  GitHub�У��������Ǹ������our_headfile���棩
char caesarnormal(long long int key, char mingma, char mima) 
{
	if((mingma>='A')&&(mingma<='Z'))mima='A'+(mingma-'A'+key)%26;
	if((mingma>='a')&&(mingma<='z'))mima='a'+(mingma-'a'+key)%26;
}
char caesarchemistry(long long int key, long long int add)
{
	switch(key-add)
	{
		case 1:printf("%s","H"); break;
		case 2:printf("%s","He"); break;
		case 3:printf("%s","Li"); break;
		case 4:printf("%s","Be"); break;
		case 5:printf("%s","B"); break;
		case 6:printf("%s","C"); break;
		case 7:printf("%s","N"); break;
		case 8:printf("%s","O"); break;
		case 9:printf("%s","F"); break;
		case 10:printf("%s","Ne"); break;
		case 11:printf("%s","Na"); break;
		case 12:printf("%s","Mg"); break;
		case 13:printf("%s","Al"); break;
		case 14:printf("%s","Si"); break;
		case 15:printf("%s","P"); break;
		case 16:printf("%s","S"); break;
		case 17:printf("%s","Cl"); break;
		case 18:printf("%s","Ar"); break;
		case 19:printf("%s","K"); break;
		case 20:printf("%s","Ca"); break;
		case 21:printf("%s","Sc"); break;
		case 22:printf("%s","Ti"); break;
		case 23:printf("%s","V"); break;
		case 24:printf("%s","Cr"); break;
		case 25:printf("%s","Mn"); break;
		case 26:printf("%s","Fe"); break;
		case 27:printf("%s","Co"); break;
		case 28:printf("%s","Ni"); break;
		case 29:printf("%s","Cu"); break;
		case 30:printf("%s","Zn"); break;
		case 31:printf("%s","Ga"); break;
		case 32:printf("%s","Ge"); break;
		case 33:printf("%s","As"); break;
		case 34:printf("%s","Se"); break;
		case 35:printf("%s","Br"); break;
		case 36:printf("%s","Kr"); break;
		case 37:printf("%s","Rb"); break;
		case 38:printf("%s","Sr"); break;
		case 39:printf("%s","Y"); break;
		case 40:printf("%s","Zr"); break;
		case 41:printf("%s","Nb"); break;
		case 42:printf("%s","Mo"); break;
		case 43:printf("%s","Tc"); break;
		case 44:printf("%s","Ru"); break;
		case 45:printf("%s","Rh"); break;
		case 46:printf("%s","Pd"); break;
		case 47:printf("%s","Ag"); break;
		case 48:printf("%s","Cd"); break;
		case 49:printf("%s","In"); break;
		case 50:printf("%s","Sn"); break;
		case 51:printf("%s","Sb"); break;
		case 52:printf("%s","Te"); break;
		case 53:printf("%s","I"); break;
		case 54:printf("%s","Xe"); break;
		case 55:printf("%s","Cs"); break;
		case 56:printf("%s","Ba"); break;
		case 57:printf("%s","La"); break;
		case 58:printf("%s","Ce"); break;
		case 59:printf("%s","Pr"); break;
		case 60:printf("%s","Nd"); break;
		case 61:printf("%s","Pm"); break;
		case 62:printf("%s","Sm"); break;
		case 63:printf("%s","Eu"); break;
		case 64:printf("%s","Gd"); break;
		case 65:printf("%s","Tb"); break;
		case 66:printf("%s","Dy"); break;
		case 67:printf("%s","Ho"); break;
		case 68:printf("%s","Er"); break;
		case 69:printf("%s","Tm"); break;
		case 70:printf("%s","Yb"); break;
		case 71:printf("%s","Lu"); break;
		case 72:printf("%s","Hf"); break;
		case 73:printf("%s","Ta"); break;
		case 74:printf("%s","W"); break;
		case 75:printf("%s","Re"); break;
		case 76:printf("%s","Os"); break;
		case 77:printf("%s","Ir"); break;
		case 78:printf("%s","Pt"); break;
		case 79:printf("%s","Au"); break;
		case 80:printf("%s","Hg"); break;
		case 81:printf("%s","Tl"); break;
		case 82:printf("%s","Pb"); break;
		case 83:printf("%s","Bi"); break;
		case 84:printf("%s","Po"); break;
		case 85:printf("%s","At"); break;
		case 86:printf("%s","Rn"); break;
		case 87:printf("%s","Fr"); break;
		case 88:printf("%s","Ra"); break;
		case 89:printf("%s","Ac"); break;
		case 90:printf("%s","Th"); break;
		case 91:printf("%s","Pa"); break;
		case 92:printf("%s","U"); break;
		case 93:printf("%s","Np"); break;
		case 94:printf("%s","Pu"); break;
		case 95:printf("%s","Am"); break;
		case 96:printf("%s","Cm"); break;
		case 97:printf("%s","Bk"); break;
		case 98:printf("%s","Cf"); break;
		case 99:printf("%s","Es"); break;
		case 100:printf("%s","Fm"); break;
		case 101:printf("%s","Mc"); break;
		case 102:printf("%s","No"); break;
		case 103:printf("%s","Lr"); break;
		case 104:printf("%s","Rf"); break;
		case 105:printf("%s","Db"); break;
		case 106:printf("%s","Sg"); break;
		case 107:printf("%s","Bh"); break;
		case 108:printf("%s","Hs"); break;
		case 109:printf("%s","Mt"); break;
		case 110:printf("%s","Ds"); break;
		case 111:printf("%s","Rg"); break;
		case 112:printf("%s","Cn"); break;
		case 113:printf("%s","Nh"); break;
		case 114:printf("%s","Fl"); break;
		case 115:printf("%s","Mc"); break;
		case 116:printf("%s","Lv"); break;
		case 117:printf("%s","Ts"); break;
		case 118:printf("%s","Og"); break;
		default:printf("%s","wrong input");
	}
}
char chinesekeyboard(char a)
{
	switch(a)
	{
		case 'a':printf("%s","s"); break;
		case 'b':printf("%s","n"); break;
		case 'c':printf("%s","v"); break;
		case 'd':printf("%s","f"); break;
		case 'e':printf("%s","r"); break;
		case 'f':printf("%s","g"); break;
		case 'g':printf("%s","h"); break;
		case 'h':printf("%s","j"); break;
		case 'i':printf("%s","o"); break;
		case 'j':printf("%s","k"); break;
		case 'k':printf("%s","l"); break;
		case 'l':printf("%s","a"); break;
		case 'm':printf("%s","z"); break;
		case 'n':printf("%s","m"); break;
		case 'o':printf("%s","p"); break;
		case 'p':printf("%s","q"); break;
		case 'q':printf("%s","w"); break;
		case 'r':printf("%s","t"); break;
		case 's':printf("%s","d"); break;
		case 't':printf("%s","y"); break;
		case 'u':printf("%s","i"); break;
		case 'v':printf("%s","b"); break;
		case 'w':printf("%s","e"); break;
		case 'x':printf("%s","c"); break;
		case 'y':printf("%s","u"); break;
		case 'z':printf("%s","x"); break;
	}
}
//��һ�Ѻ��������������Զ���
//�����Զ�����
#endif
