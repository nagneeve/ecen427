#ifndef SCORE_H_
#define SCORE_H_

#define SCORE_HEIGHT 16
#define SCORE_WIDTH 10
#define packWord10(b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
		((b9  << 9 ) | (b8  << 8 ) |						  \
				(b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ))

int s_block[SCORE_HEIGHT] =		// S block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
};

int c_block[SCORE_HEIGHT] =		// C block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
};
int o_block[SCORE_HEIGHT] =		// O block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
};

int r_block[SCORE_HEIGHT] =		// R block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
};
int e_block[SCORE_HEIGHT] =		// E block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
};

int l_block[SCORE_HEIGHT] =		// L block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
};

int i_block[SCORE_HEIGHT] =		// I block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
};

int v_block[SCORE_HEIGHT] =		// V block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,0,0,1,1,0,0),
		packWord10(0,0,1,1,0,0,1,1,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
};

int g_block[SCORE_HEIGHT] =		// G block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,1,1,1,1,1,1),
		packWord10(1,1,0,0,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
};

int a_block[SCORE_HEIGHT] =		// A block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,1,1,0,0,1,1,0,0),
		packWord10(0,0,1,1,0,0,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
};
int m_block[SCORE_HEIGHT] =		// M block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,0,0,0,0,1,1,1),
		packWord10(1,1,1,1,0,0,1,1,1,1),
		packWord10(1,1,0,1,1,1,1,0,1,1),
		packWord10(1,1,0,0,1,1,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
};

int one_block[SCORE_HEIGHT] =		// 1 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,0,0,0,0),
		packWord10(0,0,1,1,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
};

int two_block[SCORE_HEIGHT] =		// 2 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
};

int three_block[SCORE_HEIGHT] =		// 3 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
};

int four_block[SCORE_HEIGHT] =		// 4 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
};
int five_block[SCORE_HEIGHT] =		// 5 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
};
int six_block[SCORE_HEIGHT] =		// 6 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
};
int seven_block[SCORE_HEIGHT] =		// 7 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(1,1,1,1,1,1,1,1,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,1,1,0),
		packWord10(0,0,0,0,0,0,0,1,1,0),
		packWord10(0,0,0,0,0,0,1,1,0,0),
		packWord10(0,0,0,0,0,0,1,1,0,0),
		packWord10(0,0,0,0,0,1,1,0,0,0),
		packWord10(0,0,0,0,0,1,1,0,0,0),
};
int eight_block[SCORE_HEIGHT] =		// 8 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
};
int nine_block[SCORE_HEIGHT] =		// 9 block
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(1,1,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,1,1,1,1,1,1,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,0,0,0,0,0,0,1,1),
		packWord10(0,0,1,1,1,1,1,1,0,0),
		packWord10(0,0,1,1,1,1,1,1,0,0),
};

#endif /* SCORE_H_ */
