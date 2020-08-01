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
            char outname[255]; //输出文件名
            scanf("%s",link);
            printf("要下载的视频地址是：\t%s\n", link);
            char download[] = "ffmpeg -i \"";
            printf("输入要保存为的输出文件名是：\t");
            fflush(stdin); //清空缓冲区
            gets(outname);
            //scanf("%s",&outname);
            printf("要保存为的输出文件名是：\t%s\n",outname);
            char output[] = "\" -c copy \"";
            char outmp4[] = ".mp4\"";
            strcat(download, link);   //合并前缀和下载地址
            strcat(download, output); //合并前缀、下载地址和后缀
            strcat(download, outname); //合并前缀、下载地址、后缀和输出文件名
            strcat(download, outmp4); //合并前缀、下载地址、后缀、输出文件名和扩展名
            system(download);         //执行命令
            printf("\n====视频下载完成====\n");
            fflush(stdin); //清空缓冲区
        }
    }while (select != '0');
    
    return 0;
}