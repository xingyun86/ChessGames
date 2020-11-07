
#if !defined CCT_CHESSTHINKER_DEF
#define CCT_CHESSTHINKER_DEF
//				   k,  s,  x,  m,  j,  p,  b
const int BA[2][12][11]=
{
	{
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  2,  2,  3,  4,  4,  4,  3,  2,  2,  0},
		{  0,  2,  2,  3,  4,  4,  4,  3,  2,  2,  0},
		{  0,  1,  2,  3,  3,  3,  3,  3,  2,  1,  0},
		{  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}
	},
	{
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0},
		{  0,  1,  2,  3,  3,  3,  3,  3,  2,  1,  0},
		{  0,  2,  2,  3,  4,  4,  4,  3,  2,  2,  0},
		{  0,  2,  2,  3,  4,  4,  4,  3,  2,  2,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
		{  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0}
	}
};

//movelists:
 char tman[6][125],ttox[6][125],ttoy[6][125];
 int  tcount[6];

//face
 char tmanx[32], tmany[32];
 int  tside;

//map
 int tmap[11][12];

//
 int tlevel,tdeep;

//ֻ��enumlist�е���
 char *lman,*ltox,*ltoy;



#define NORED(i,j) (SideOfMan[tmap[i][j]]!=0)
#define NOBLACK(i,j) (SideOfMan[tmap[i][j]]!=1)
#define NOMAN(i,j) (tmap[i][j]==32)

 int k;
 int v1[32];
 int v2[32][32];
 int v3[32];
 int v4[32];
#endif