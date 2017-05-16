#include<stdio.h>
#include<windows.h>
void hwcry_index(void);
void hwcry_immunization(void);
/*
Create By HaradaShino  -  www.linux.dog
*/
int main(void){
	hwcry_index();
	
	system("color fc");
	printf("再次确认！请使用管理员权限运行本程序！\n");
	printf("=w= 否则免疫将不会有效！\n");
	printf("\n\n\n\n\n任意键继续...");
	getchar();
	system("cls");
	
	hwcry_immunization();
	return 0;
}
void hwcry_index(void){
	printf("WannaCry病毒免疫工具\n\n");
	printf("By Misaka10031  www.linux.dog \n\n\n");
	printf("QwQ重要！请确认已使用管理员权限运行本程序！ \n\n\n");
	printf("任意键继续...");
	getchar();
	system("cls");
	return;
	
}
void hwcry_immunization(void){
	
	system("color 0b");
	
	printf("正在进行相关服务配置！\n");
	system("net stop SCardSvr");
	system("net stop SCPolicySvc ");
	system("sc config SCardSvr start= disabled");
	system("sc config SCPolicySvc start= disabled ");
	system("net start MpsSvc");
	system("sc config MpsSvc start= auto");
	system("cls");
	
	printf(">_< 正在开启防火墙\n");
	//启用防火墙
	system("netsh advfirewall set allprofiles state on");
	
	printf("正在封禁TCP入站137端口，若输出“确定”则为成功\n");
	system("netsh advfirewall firewall add rule name=\"Wcry免疫 tcp 137\" dir=in protocol=tcp localport=137 action=block");
	printf("正在封禁TCP入站138端口，若输出“确定”则为成功\n");
	system("netsh advfirewall firewall add rule name=\"Wcry免疫 tcp 138\" dir=in protocol=tcp localport=138 action=block");
	printf("正在封禁TCP入站139端口，若输出“确定”则为成功\n");
	system("netsh advfirewall firewall add rule name=\"Wcry免疫 tcp 139\" dir=in protocol=tcp localport=139 action=block");
	printf("正在封禁TCP入站445端口，若输出“确定”则为成功\n");
	system("netsh advfirewall firewall add rule name=\"Wcry免疫 tcp 445\" dir=in protocol=tcp localport=445 action=block");
	Sleep(300);
	printf("\n\n\n最后的处理工作,会在同目录生成wcryim.reg的注册表文件o>,<o注意安装一下！");
	system("echo Windows Registry Editor Version 5.00 >>wcryim.reg");
	system("echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters] >>wcryim.reg");
	system("echo \"SMB1\" = dword:00000000 >>wcryim.reg");
	printf("\n\n\n完成！所有的工作都已经做完了！\n\n\n\n");
	printf("任意键退出！");
	getchar();
	return;
}