#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char select = '1'; //ѡ�Ĭ��Ϊ1��
    printf("����������ffmpeg,���ص�ַhttps://www.ffmpeg.org/\n");
    printf("������limonene0x������https://github.com/limonene0x��\n\n");
    do
    {
        printf("���ܣ�\n1.������Ƶ\n0.�˳�����\n\n������ѡ�Ĭ��Ϊ1����");
        select = getchar(); //��ѡ��
        fflush(stdin);      //��ջ�����
        if (select != '0')
            select = '1'; //Ĭ����1
        if (select == '1')
        {
            /**
             * ���ع���
             */
            printf("����Ҫ���ص���Ƶm3u8���ӵ�ַ��\t");
            char link[255]; //��Ƶ��ַ
            scanf("%s",link);
            printf("Ҫ���ص���Ƶ��ַ�ǣ�\t%s\n", link);
            char download[] = "ffmpeg -i \"";
            char output[] = "\" -c copy output.mp4";
            strcat(download, link);   //�ϲ�����
            fflush(stdin); //��ջ�����
            strcat(download, output); //�ϲ�����
            system(download);         //ִ������
            printf("\n====��Ƶ�������====\n");
            fflush(stdin); //��ջ�����
        }
    }while (select != '0');
    
    return 0;
}