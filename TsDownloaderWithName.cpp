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
            char outname[255]; //����ļ���
            scanf("%s",link);
            printf("Ҫ���ص���Ƶ��ַ�ǣ�\t%s\n", link);
            char download[] = "ffmpeg -i \"";
            printf("����Ҫ����Ϊ������ļ����ǣ�\t");
            fflush(stdin); //��ջ�����
            gets(outname);
            //scanf("%s",&outname);
            printf("Ҫ����Ϊ������ļ����ǣ�\t%s\n",outname);
            char output[] = "\" -c copy \"";
            char outmp4[] = ".mp4\"";
            strcat(download, link);   //�ϲ�ǰ׺�����ص�ַ
            strcat(download, output); //�ϲ�ǰ׺�����ص�ַ�ͺ�׺
            strcat(download, outname); //�ϲ�ǰ׺�����ص�ַ����׺������ļ���
            strcat(download, outmp4); //�ϲ�ǰ׺�����ص�ַ����׺������ļ�������չ��
            system(download);         //ִ������
            printf("\n====��Ƶ�������====\n");
            fflush(stdin); //��ջ�����
        }
    }while (select != '0');
    
    return 0;
}