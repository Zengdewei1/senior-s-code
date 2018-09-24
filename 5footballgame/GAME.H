/*********************        H�ļ�         ************************/

/**********************************************************

Copyright (C) 2017 ��ԣ�� �ƽܺ�.
File name:      game.h
Author:         �ƽܺ�
Version��        1.1
Date��           2017/11/1
Description��    ������Ϸ�ⲿ�������к�����ͷ�ļ���


Function List��
	1.void Update(struct _GAME * self);
	2.void changestate(struct _GAME * self, _state * pnewstate);
		״̬��ѭ�����ı�״ִ̬�еĺ���

	3.void initgame(struct _GAME * game);
		��ʼ���ṹgame�ڲ���

	4.void menu_enter(struct _GAME * game);
	5.void menu_execute(struct _GAME * game);
	6.void menu_exit(struct _GAME * game);
		״̬���˵���������

	7.void doubleman_enter(struct _GAME * game);
	8.void doubleman_execute(struct _GAME * game);
	9.void doubleman_exit(struct _GAME * game);
		˫����Ϸ

	10.void choose_enter(struct _GAME * game);
	11.void choose_execute(struct _GAME * game);
	12.void choose_exit(struct _GAME * game);
		����ѡ��浵

	13.void single_enter(struct _GAME * game);
	14.void single_execute(struct _GAME * game);
	15.void single_exit(struct _GAME * game);
		�����浵�ڽ���

	16.void achieve_enter(struct _GAME * game);
	17.void achieve_execute(struct _GAME * game);
	18.void achieve_exit(struct _GAME * game);
		������ʾ�ɾ͡�������Աϵͳ

	19.void shop_enter(struct _GAME * game);
	20.void shop_execute(struct _GAME * game);
	21.void shop_exit(struct _GAME * game);
		�����̵깺����Ա�͵���

	22.void mything_enter(struct _GAME * game);
	23.void mything_execute(struct _GAME * game);
	24.void mything_exit(struct _GAME * game);
		�����ֿ�鿴�ѹ������������ߵ�

	25.void myteamchoose_enter(struct _GAME * game);
	26.void myteamchoose_execute(struct _GAME * game);
	27.void myteamchoose_exit(struct _GAME * game);
		����������ʼѡ���Լ�����

	28.void menchoose_enter(struct _GAME * game);
	29.void menchoose_execute(struct _GAME * game);
	30.void menchoose_exit(struct _GAME * game);
		����������ѡ��

	31.void levelchoose_enter(struct _GAME * game);
	32.void levelchoose_execute(struct _GAME * game);
	33.void levelchoose_exit(struct _GAME * game);
		����ѡ������Ѷ�

	34.void pause(struct _GAME * game);
		�˳�״̬����ȫ��



	35.void normal();
		ÿ���������Ͻ�ͼ��

	36.void readfile(struct _GAME * game);
		�浵����

	37.void writefile(struct _GAME * game);
		��������

	38.void cleanfile(struct _GAME * game, int x);
		ѯ���Ƿ���մ浵

	39.void paintmoney(int x, int y, int size, unsigned char color, int num);
		�����֡�������Ҫ�ǽ�Ǯ���������ֱ��ʾλ�á���С����ɫ��Ҫ��������

	40.void dou_paintyes(struct _GAME * game);
		˫��ģʽѡ����ʱ��ͨ���ı���ͼ����ʾѡ��Ķ���

	41.void shopphoto(struct _GAME * game);
		�̵���Ա���ݹ�������Ա

	42.void shopjudge(struct _GAME * game, int membernum);
		�̵���Ա�����Ƿ���ѡ�����۸�����֣�membernum�����ж���Ա���

	43.void memberbuy(struct _GAME * game);
		�̵���Ա����

	44.void toolbuy(struct _GAME * game, int x, int y);
		�̵���߹���

	45.void backpackphoto(struct _GAME * game);
		�ֿ���Ա���ݹ�������Ա

	46.void paintstars(struct _GAME * game, int membernum, int x, int y, int size);
		���Ǳ�ʾ��Ա����

	47.void backpackjudge(struct _GAME * game, int membernum);
		�ֿ���Ա�����Ƿ�������ͼ��membernum�����ж���Ա���

	48.void memberup(struct _GAME * game);
		�ֿ���Ա����

	49.void tooluse(struct _GAME * game);
		�ֿ����ʹ��

	50.void toolhaved(struct _GAME * game, int judge);
		�̵�Ͳֿ��������ʾ���е�������

	51.void toolinuse1(struct _GAME * game);
	55.void toolinuse2(struct _GAME * game);
		��ʾʹ���еĵ��ߣ�����ʱ��bug����ֳ�����������

	53.void sin_paintyes1(struct _GAME * game);
		����ģʽѡ������ͼ������

	54.void yourgamble(struct _GAME * game);
		��������

	55.void photo_6men(struct _GAME * game);
		���˸��ݶ���ѡ����ͼ������Ĭ����λ�װ��Ա֮�⣬����6λ��Ҫ�ж��Ƿ����

	56.void choose_4men(struct _GAME * game);
		��Ա10ѡ4 ��Ȧ��ʾѡ��

	57.char *dealpath(struct _GAME * game, int x, char * finished);
		�ظ�·��ͳһ����

	58.void sin_paintcircle(int x, int y);
		������

	59.void sin_paintyes2(struct _GAME * game);
		������Ϸѡ���ֶ���ʱ��ͨ���ı���ͼ����ʾѡ��Ķ���

	60.void dealresult(struct _GAME * game);
		������������������ɾ͡���Ǯ��

	61.void dealachieve(struct _GAME * game);
		�ɾ�ϵͳ���½�������Ա


History��        �Ա��ļ����޸��뼰ʱ�����¸�ʽ��¼�����棨ÿ���޸ĵ����г�����
    Example��    Date��
                Author��
                Version��
                Modification��

1.	Date��
	Author��
	Version��
	Modification��

**********************************************************/

#ifndef GAME_H
#define GAME_H

#include<stdio.h>
#include<stdlib.h>
#include<bios.h>
#include"tool.h"
#include"SVGAmode.h"
#include"football.h"
#include"HZDIS.h"
#include"HANZI.h"


//��Ϸ״̬�����浵��
typedef struct _STATE
{
	void (*Enter) (struct _GAME * game);                  //����״̬ʱ����
	void (*Execute) (struct _GAME * game);                //����״̬ʱ����
	void (*Exit) (struct _GAME * game);                   //�˳�״̬ʱ����
}_state;

typedef struct _FILE
{
	int filenumber;                        //�浵���

	unsigned int money;                    //��Ǯ
	int property[6];                       //ӵ�еĵ���
	int numbers;                           //����ɳ���
	int winnum;                            //ʤ����
	int losenum;                           //�ܳ���
	int winmargin;                         //��ʤ����
	char stars[31];                        //�����ж�30λ��Ա�Ƿ����������stars[0]Ϊ�װ壬��������ݻ��������ж���Ա�ȼ���0��ʾδӵ�У�1��ʾ��ӵ�еȼ�Ϊ0��234��ʾ��������
	int surprise[5];                       //�����ж�������Ƿ����������Ա
	int inuse[2];                          //����ʹ���еĵ��ߺ���
}_file;


//��Ա���ݽṹ��
typedef struct _ABLITY
{
	float skill;                           //������
	float speed;                           //�ٶ�
	float explodespeed;                    //�����ٶ�
	float persistence;                     //����
	float cd;                              //��ȴʱ��
}_ablity;


//��Ϸ����
typedef struct _ELSETHING
{
	int gamemode;                          //��Ϸģʽ����˫��
	int botlevel;                          //�������Ѷ�

                                 //˫��
	int choose1;                         //���ڼ�¼һ�����ѡ��
	int choose2;                         //���ڼ�¼�������ѡ��
	int choose1before;                   //���һ�����ѡ�񻭡�����
	int choose2before;                   //����������ѡ�񻭡�����

                                    //����
	int shopstate;                       //�����ж��̵괦����һ�����棺��Ա��1���͵��ߣ�2��
	int backpackstate;                   //�����жϲֿ⴦����һ�����棺��Ա��1���͵��ߣ�2��
	int country;                         //�����ж��̵�Ͳֿ��ڹ��ң�����Ϊ12345
	int property;                        //�����ж��̵�Ͳֿ���ʹ�õĵ��ߵı�ţ�����Ϊ123456
	int propertybuynum[6];               //��¼��������ߵ�����
	int propertybuycost[6];              //��¼�õ��߹�����ܼ�
	int propertyonecost[6];              //��¼ÿ�����ߵĵ��ۣ�����һ����ʼ��

	int sin_teamchoose;                  //���ڼ�¼����ģʽ�����ѡ�Լ�����
	int sin_teamchoosebefore;            //���ڽ������ģʽѡ���Լ����黭������
	int sin_teamchoose2;                 //���ڼ�¼����ģʽ�����ѡ���ֶ���
	int sin_teamchoosebefore2;           //���ڽ������ģʽѡ����ֶ��黭������

	int sin_menchoose[4];                //10ѡ4���Ѿ�ѡ�����
	int sin_menchoosebefore[4];          //10ѡ4��¼��ѡ��

	int botteam;                         //ѡ����ֵĶ���
	int unsigned gamble;                 //����
}_elsething;



//��Ϸ�����в���������ڽṹgame��
typedef struct _GAME
{
	_state menu, doubleman, choose, single, achieve, shop, mything, myteamchoose, menchoose, levelchoose;            //״̬����
	struct _STATE * pcurrentstate;                                                                                   //ָ��ǰ״̬

	int MouseState;                             //��굱ǰ״̬
	int MouseStateOld;                          //�����һ�ε�״̬

	_file nowfile;                              //�浵����
	_elsething elsething;                       //�Ѷȼ�ģʽѡ��
	_fieldplayer playerchoose;                  //����ѡ����Աѡ��
	_result result;                             //����������
}_game;



/**********************************************************
Function��      Update

Description��   ״̬��ѭ���ĺ���������ִ��״̬��ѭ��

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void Update(struct _GAME * self);


/**********************************************************
Function��      changestate

Description��  �ı�״̬��״̬�ĺ��������ڸı�״̬��״̬

Input��     �ṹgame��ַ��Ҫ�ı��״̬��ָ��

Output��     None

Return��     None

Others��     None
**********************************************************/
void changestate(struct _GAME * self, _state * pnewstate);


/**********************************************************
Function��      Update

Description��   ״̬��ѭ�����ı�״ִ̬�еĺ���������ִ��״̬��ѭ���Լ��ı�״̬

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void initgame(struct _GAME * game);


/**********************************************************
Function��     menu_enter��menu_execute��menu_exit

Description��   �������˵��ĺ�����״̬���˵�ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void menu_enter(struct _GAME * game);
void menu_execute(struct _GAME * game);
void menu_exit(struct _GAME * game);


/**********************************************************
Function��      doubleman_enter��doubleman_execute��doubleman_exit

Description��   ����˫����Ϸ�ĺ�����״̬˫����Ϸѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void doubleman_enter(struct _GAME * game);
void doubleman_execute(struct _GAME * game);
void doubleman_exit(struct _GAME * game);


/**********************************************************
Function��      choose_enter��choose_execute��choose_exit

Description��   ����浵ѡ��ĺ�����״̬�浵ѡ��ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     ������Ϸ��һ������Ϊ�浵ѡ����������Ϊchoose
**********************************************************/
void choose_enter(struct _GAME * game);
void choose_execute(struct _GAME * game);
void choose_exit(struct _GAME * game);


/**********************************************************
Function��      single_enter��single_execute��single_exit

Description��   ��ʽ���뵥����Ϸ�ĺ�����״̬������Ϸѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void single_enter(struct _GAME * game);
void single_execute(struct _GAME * game);
void single_exit(struct _GAME * game);


/**********************************************************
Function��      achieve_enter��achieve_execute��achieve_exit

Description��   ���뵥�˳ɾ͵ĺ�����״̬���˳ɾ�ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void achieve_enter(struct _GAME * game);
void achieve_execute(struct _GAME * game);
void achieve_exit(struct _GAME * game);


/**********************************************************
Function��      shop_enter��shop_execute��shop_exit

Description��   �����̵�ĺ�����״̬�̵�ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void shop_enter(struct _GAME * game);
void shop_execute(struct _GAME * game);
void shop_exit(struct _GAME * game);


/**********************************************************
Function��      mything_enter��mything_execute��mything_exit

Description��   ����ֿ�ĺ�����״̬�ֿ�ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void mything_enter(struct _GAME * game);
void mything_execute(struct _GAME * game);
void mything_exit(struct _GAME * game);


/**********************************************************
Function��      myteamchoose_enter��myteamchoose_execute��myteamchoose_exit

Description��   �������ѡ��ĺ�����״̬����ѡ��ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void myteamchoose_enter(struct _GAME * game);
void myteamchoose_execute(struct _GAME * game);
void myteamchoose_exit(struct _GAME * game);


/**********************************************************
Function��      menchoose_enter��menchoose_execute��menchoose_exit

Description��   ����ѡ����Ա�ĺ�����״̬ѡ����Աѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void menchoose_enter(struct _GAME * game);
void menchoose_execute(struct _GAME * game);
void menchoose_exit(struct _GAME * game);

/**********************************************************
Function��      levelchoose_enter��levelchoose_execute��levelchoose_exit

Description��   ��������Ѷ�ѡ��ĺ�����״̬�Ѷ�ѡ��ѭ��ִ�еĺ������˳���״̬ʱִ�еĺ���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void levelchoose_enter(struct _GAME * game);
void levelchoose_execute(struct _GAME * game);
void levelchoose_exit(struct _GAME * game);


/**********************************************************
Function��      pause

Description��   ȫ��״̬pause������Ƿ������Ͻ��˳�������������Ӧ�İ������ܣ�ִ�в���

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void pause(struct _GAME * game);





/**********************************************************
Function��      normal

Description��   ˢ�½���ʱ�ػ�����С���

Input��      None

Output��     None

Return��     None

Others��     None
**********************************************************/
void normal();


/**********************************************************
Function��      readfile��writefile

Description��   �������浵����

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     None
**********************************************************/
void readfile(struct _GAME * game);
void writefile(struct _GAME * game);


/**********************************************************
Function��      cleanfile

Description��   ѯ������Ƿ���մ浵

Input��
		�ṹgame
		int x             ��Ҫ��մ浵�ı��

Output��     None

Return��     None

Others��     None
**********************************************************/
void cleanfile(struct _GAME * game, int x);


/**********************************************************
Function��      paintmoney

Description��    ������

Input��
			int x��int y               ����λ��
			int size                   �����ֺŴ�С
			unsigned char color        ��ɫ
			int num                    ���Ĵ�С

Output��     None

Return��     None

Others��     һ��ʼֻ���ڻ���Ǯ��������Ϊpaintmoney
**********************************************************/
void paintmoney(int x, int y, int size, unsigned char color, int num);


/**********************************************************
Function��      dou_paintyes

Description��   ˫����Ϸѡ�����ʱ�򣬸������ѡ��ı���ͼ

Input��     �ṹgame��ַ

Output��     None

Return��     None

Others��     ��¼�����������ڽṹgame��
**********************************************************/
void dou_paintyes(struct _GAME * game);


/**********************************************************
Function��      shopphoto��shopjudge

Description��   �̵�ı����ѡ��ʱ�ı���Աͷ����ͼ��ͬʱ�ı��·�����ͼ��

Input��     
		�ṹgame��ַ
		int membernum      ��Ӧλ����Ӧ��Ա���

Output��     None

Return��     None

Others��     �̵���Ա��ͷ���̵���Ա�Ƿ��Թ������۸����ֻ��ѹ���membernum�����ж���Ա���
**********************************************************/
void shopphoto(struct _GAME * game);
void shopjudge(struct _GAME * game, int membernum);


/**********************************************************
Function��      memberbuy��toolbuy

Description��   �̵�����Ա�͵��ߵĹ�����

Input��
		�ṹgame
		int x, int y           �����ж���Ҫ�������

Output��     None

Return��     None

Others��     None
**********************************************************/
void memberbuy(struct _GAME * game);
void toolbuy(struct _GAME * game, int x, int y);


/**********************************************************
Function��      backpackphoto��backpackjudge

Description��   �ֿ�ı����ѡ��ʱ�ı���Աͷ����ͼ��ͬʱ�ı��·�����ͼ��

Input��      
		�ṹgame��ַ
		int membernum      ��Ӧλ����Ӧ��Ա���

Output��     None

Return��     None

Others��     �ֿ���Ա��ͷ�񣬲ֿ���Ա�Ƿ�����������������Ǯ����������membernum�����ж���Ա���
**********************************************************/
void backpackphoto(struct _GAME * game);
void backpackjudge(struct _GAME * game, int membernum);


/**********************************************************
Function��      memberup��tooluse

Description��   �ֿ�����Ա�����͵���ʹ�õĺ���

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void memberup(struct _GAME * game);
void tooluse(struct _GAME * game);


/**********************************************************
Function��      toolhaved

Description��   ��ʾӵ�е��ߵ�����

Input��     �ṹgame

Output��     None

Return��     None

Others��     ����judge��־���ж��̵껹�ǲֿ�
**********************************************************/
void toolhaved(struct _GAME * game, int judge);


/**********************************************************
Function��      toolinuse1��toolinuse2

Description��   ���ʹ���еĵ���

Input��     �ṹgame

Output��     None

Return��     None

Others��     ��ʾʹ���еĵ��ߣ�����ʱ��bug����ֳ�����������
**********************************************************/
void toolinuse1(struct _GAME * game);
void toolinuse2(struct _GAME * game);


/**********************************************************
Function��      sin_paintyes1

Description��   ������Ϸ������ͼ��ʾ��ѡ�񼺷�����

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void sin_paintyes1(struct _GAME * game);


/**********************************************************
Function��      yourgamble

Description��   ������Ϸѡ�����ʱ�����ж������룬��Ҹ�����Ҫ��������ע�Ľ�Ǯ

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void yourgamble(struct _GAME * game);


/**********************************************************
Function��      photo_6men��choose_4men��

Description��   ��ѡ�õĶ����и�����Ա�Ƿ����������ѡ����Ա�������ʾ�����ѡ���ϳ�����Ա

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void photo_6men(struct _GAME * game);
void choose_4men(struct _GAME * game);


/**********************************************************
Function��      dealpath

Description��   ״̬��ѭ�����ı�״ִ̬�еĺ���������ִ��״̬��ѭ���Լ��ı�״

Input��
		�ṹgame
		int x                        ��ַ�ַ������й����ֵ��ַ�
		char * finished              ���õĵ�ַ�ַ�������ĵ�ַ

Output��     None

Return��     �ĺõĵ�ַ�ַ��������ַ

Others��     None
**********************************************************/
char *dealpath(struct _GAME * game, int x, char * finished);


/**********************************************************
Function��      sin_paintyes2

Description��   ������Ϸ������ͼ��ʾ��ѡ����ֵĶ���

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void sin_paintyes2(struct _GAME * game);


/**********************************************************
Function��      sin_paintcircle

Description��   ��������������һ���Ļ�Ȧ��ʾѡ����

Input��     int x, int y                     ԲȦλ��

Output��     None

Return��     None

Others��     ����photo_6men��choose_4men
**********************************************************/
void sin_paintcircle(int x, int y);


/**********************************************************
Function��      dealresult

Description��   �����������

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void dealresult(struct _GAME * game);


/**********************************************************
Function��      dealachieve

Description��   ���³ɾͣ�����Ƿ����������������Ա

Input��     �ṹgame

Output��     None

Return��     None

Others��     None
**********************************************************/
void dealachieve(struct _GAME * game);


/**********************************************************
Function��      paintstars

Description��   �ֿ��л��Ǻ��������ڱ�ʾ��Ա�Ǽ�

Input��
		�ṹgame
		int membernum                     ��Ա���
		int x, int y                      ��������λ��
		int size                          ���Ǵ�С

Output��     None

Return��     None

Others��     None
**********************************************************/
void paintstars(struct _GAME * game, int membernum, int x, int y, int size);



void checkmember(struct _GAME * game);
void message(struct _GAME * game, int number);

#endif