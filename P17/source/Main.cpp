/* �ϥ�fread()���Ū���ɮפ��e */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
    FILE *fptr;
    char str[MAX];
    int bytes;            // �s�xfread()���\Ū�����r����
    fptr = fopen("output.txt", "r");
    while (!feof(fptr))   // �p�G�٨S��Ū���ɧ�
    {
        bytes = fread(str, sizeof(char), MAX - 1, fptr);
        str[bytes] = '\0';
        printf("%s\n", str); // �L�X�ɮפ��e
    }
    fclose(fptr);         // �����ɮ�
    system("pause");
    return 0;
}

