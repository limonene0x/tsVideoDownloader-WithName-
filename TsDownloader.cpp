#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char select = '1'; //选项（默认为1）
    printf("本程序依赖ffmpeg,下载地址https://www.ffmpeg.org/\n");
    printf("程序由limonene0x制作（https://github.com/limonene0x）\n\n");
    do
    {
        printf("功能：\n1.下载视频\n0.退出程序\n\n请输入选项（默认为1）：");
        select = getchar(); //读选项
        fflush(stdin);      //清空缓冲区
        if (select != '0')
            select = '1'; //默认置1
        if (select == '1')
        {
            /**
             * 下载功能
             */
            printf("输入要下载的视频m3u8链接地址：\t");
            char link[255]; //视频地址
            scanf("%s",link);
            printf("要下载的视频地址是：\t%s\n", link);
            char download[] = "ffmpeg -i \"";
            char output[] = "\" -c copy output.mp4";
            strcat(download, link);   //合并命令
            fflush(stdin); //清空缓冲区
            strcat(download, output); //合并命令
            system(download);         //执行命令
            printf("\n====视频下载完成====\n");
            fflush(stdin); //清空缓冲区
        }
    }while (select != '0');
    
    return 0;
}