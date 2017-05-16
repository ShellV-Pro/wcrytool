#include<stdio.h>
#include<windows.h>
void hwcry_index(void);
void hwcry_immunization(void);
int main(void){
	hwcry_index();
	hwcry_immunization();
	printf("免疫工作完毕，您的系统相对安全了一些，dou御坂如此提示道\n\n");
	printf("按任意键瑞出\n");
	getchar();
	return 0;
}
void hwcry_index(void){
	printf("********************************\n");
	printf("*      WannaCry 免疫工具       *\n");
	printf("********************************\n");
	printf("\n\n!!!!请使用管理员权限运行此程序\n");
	printf("一个简单的WannaCry免疫工具\n");
	printf("By Misaka10031  QQ:1657297533 \n\n\n\n");
	printf("按任意键继续...");
	getchar();
	system("cls");
	printf("Start Script for immunization...\n");
	return;
	
}
void hwcry_immunization(void){
	system("net stop SCardSvr");
	printf("现在关闭了智能卡服务!dou御坂装作什么都不知道的样子说道!\n");
	system("net stop SCPolicySvc ");
	system("sc config SCardSvr start=disabled");
	system("sc config SCPolicySvc start=disabled ");
	system("net start MpsSvc");
	system("sc config MpsSvc start=auto");
	printf("开启了mpssvc服务...\n");
	system("netsh advfirewall set allprofiles state on");
	printf("防火墙开启成功！...\n");
	system("netsh advfirewall firewall add rule name=\"deny tcp 137\" dir=in protocol=tcp localport=137 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 138\" dir=in protocol=tcp localport=138 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 139\" dir=in protocol=tcp localport=139 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 445\" dir=in protocol=tcp localport=445 action=block");
	printf("防火墙规则设置完毕！...\n");
	printf("按任意键继续...\n");
	getchar();
	system("cls");
	printf("现在开始要给你生成一个注册表也是免疫用的，一会你自己点一下注册他wcryim.reg！\n");
	system("echo Windows Registry Editor Version 5.00 >>wcryim.reg");
	system("echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters] >>wcryim.reg");
	system("echo \"SMB1\" = dword:00000000 >>wcryim.reg");
	
	printf("按任意键继续...\n");
	getchar();
	system("cls");
	return;
}