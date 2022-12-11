#### OUTPUT
```
The content of input table : 

**    START  2000
**    LDA    FIVE
**    STA    ALPHA
**    LDCH   CHARZ
**    STCH   C1
ALPHA RESW   2
FIVE  WORD   5
CHARZ BYTE   C'Z'
C1    RESB   1
**    END    **


The content of Output table : 

	**	START	2000
2000	**	LDA	FIVE
2003	**	STA	ALPHA
2006	**	LDCH	CHARZ
2009	**	STCH	C1
2012	ALPHA	RESW	2
2018	FIVE	WORD	5
2021	CHARZ	BYTE	C'Z'
2022	C1	RESB	1
2023	**	END	**


The content of Symbol table : 

ALPHA	2012
FIVE	2018
CHARZ	2021
C1	2022

The length of the code : 23
```
