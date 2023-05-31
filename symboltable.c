/* symtable.c - 각 identifier의 Hash Table 구성
* programmer - 김지윤, 김도연, 김원우, 하윤지
* date - 2023/05/31
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tn.h"
#include "glob.h"

extern void PrintError(enum errorTypes error, char* string);
extern void ReportError(char* string);

typedef enum errorTypes ERROR;
ERROR error;

char separators[] = " \t\r\n";
int hashcode;
int found;

/*ComputeHS 함수 : nid와 nfree를 사용하여 해시 코드 계산*/
void ComputeHS(int nid, int nfree)
{
    int code, i;
    code = 0;
    for (i = nid; i < nfree; i++) {
        code += (int)ST[i];
    }

    hashcode = code % HTsize;

}

/*LookupHS 함수 : 해시 테이블에서 항목 찾는 함수*/
void LookupHS(int nid, int hscode)
{
    HTpointer here;
    int i, j;

    found = 0;
    if (HT[hscode] != NULL) {
        here = HT[hscode];
        while (here != NULL && found == 0) {
            found = 1;
            i = here->index;
            j = nid;

            while (ST[i] != '\0' && ST[j] != '\0' && found == 1) {
                if (ST[i] != ST[j])
                    found = 0;
                else {
                    i++;
                    j++;
                }
            }
            here = here->next;
        }
    }
}

/*ADDT함수 : 해시 테이블에 새 항목 추가*/
void ADDHT(int hscode)
{
    HTpointer ptr;

    ptr = (HTpointer)malloc(sizeof(HTentry));
    ptr->index = nextid;
    ptr->next = HT[hscode];
    HT[hscode] = ptr;
    HT[hscode]->line = cLine;
}

/*ReadID 함수 : string 읽어서 ST에 넣기(overst 에러 체크)*/
void ReadID(char* string)
{
    nextid = nextSTfree;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (nextSTfree >= STsize) //STSize overflow
        {
            PrintError(overst, string);
            break;
        }
        else {
            ST[nextSTfree++] = string[i];
        }
    }
}

/* SymTable 함수 : Hash Table 전체 시스템 구성 */
void SymTable(char* string) {
    ReadID(string);
    ComputeHS(nextid, nextSTfree);
    LookupHS(nextid, hashcode);
    strcpy(identifier, string);
    if (!found) {
        ADDHT(hashcode);
    }
    else {
        nextSTfree = nextid;
    }

    ST[nextSTfree++] = '\0';
}