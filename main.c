#include <stdio.h>
struct Point{
    int x;
    int y;
};

int main(){
    int index = 0;
    struct Point arr[100];
    printf("欢迎进入专场位置管理系统!\n");

    while(1){
        printf("1---添加车俩位置\n");
        printf("2---删除车俩位置\n");
        printf("3---显示全部车俩位置\n");
        printf("4---返回离我的位置最近的车俩\n");
        printf("5---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d",&code);

        if (code == 1){
            printf("请输入车辆位置的x坐标和y坐标:\n");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x = x;
            arr[index].y = y;

            index++;

            printf("添加完成，点击回车继续\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
        if (code == 2){
            if(index > 0){
                index--;
                printf("删除完成，点击回车继续\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
            else{
                printf("无车辆位置信息，删除失败，点击回车继续\n");
                char xx;
                scanf("%c",&xx);
                scanf("%c",&xx);
            }
        }
        if (code == 3){
            
        }
        if (code == 4){
            
        }
        if (code == 5){
            printf("应用已经退出\n");
            break;
        }
    }

    return 0;

}