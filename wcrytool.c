#include<stdio.h>
#include<windows.h>
void hwcry_index(void);
void hwcry_immunization(void);
int main(void){
	hwcry_index();
	hwcry_immunization();
	printf("���߹�����ϣ�����ϵͳ��԰�ȫ��һЩ��dou���������ʾ��\n\n");
	printf("����������\n");
	getchar();
	return 0;
}
void hwcry_index(void){
	printf("********************************\n");
	printf("*      WannaCry ���߹���       *\n");
	printf("********************************\n");
	printf("\n\n!!!!��ʹ�ù���ԱȨ�����д˳���\n");
	printf("һ���򵥵�WannaCry���߹���\n");
	printf("By Misaka10031  QQ:1657297533 \n\n\n\n");
	printf("�����������...");
	getchar();
	system("cls");
	printf("Start Script for immunization...\n");
	return;
	
}
void hwcry_immunization(void){
	system("net stop SCardSvr");
	printf("���ڹر������ܿ�����!dou����װ��ʲô����֪��������˵��!\n");
	system("net stop SCPolicySvc ");
	system("sc config SCardSvr start=disabled");
	system("sc config SCPolicySvc start=disabled ");
	system("net start MpsSvc");
	system("sc config MpsSvc start=auto");
	printf("������mpssvc����...\n");
	system("netsh advfirewall set allprofiles state on");
	printf("����ǽ�����ɹ���...\n");
	system("netsh advfirewall firewall add rule name=\"deny tcp 137\" dir=in protocol=tcp localport=137 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 138\" dir=in protocol=tcp localport=138 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 139\" dir=in protocol=tcp localport=139 action=block");
	system("netsh advfirewall firewall add rule name=\"deny tcp 445\" dir=in protocol=tcp localport=445 action=block");
	printf("����ǽ����������ϣ�...\n");
	printf("�����������...\n");
	getchar();
	system("cls");
	printf("���ڿ�ʼҪ��������һ��ע���Ҳ�������õģ�һ�����Լ���һ��ע����wcryim.reg��\n");
	system("echo Windows Registry Editor Version 5.00 >>wcryim.reg");
	system("echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters] >>wcryim.reg");
	system("echo \"SMB1\" = dword:00000000 >>wcryim.reg");
	
	printf("�����������...\n");
	getchar();
	system("cls");
	return;
}