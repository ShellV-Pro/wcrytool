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
	printf("�ٴ�ȷ�ϣ���ʹ�ù���ԱȨ�����б�����\n");
	printf("=w= �������߽�������Ч��\n");
	printf("\n\n\n\n\n���������...");
	getchar();
	system("cls");
	
	hwcry_immunization();
	return 0;
}
void hwcry_index(void){
	printf("WannaCry�������߹���\n\n");
	printf("By Misaka10031  www.linux.dog \n\n\n");
	printf("QwQ��Ҫ����ȷ����ʹ�ù���ԱȨ�����б����� \n\n\n");
	printf("���������...");
	getchar();
	system("cls");
	return;
	
}
void hwcry_immunization(void){
	
	system("color 0b");
	
	printf("���ڽ�����ط������ã�\n");
	system("net stop SCardSvr");
	system("net stop SCPolicySvc ");
	system("sc config SCardSvr start= disabled");
	system("sc config SCPolicySvc start= disabled ");
	system("net start MpsSvc");
	system("sc config MpsSvc start= auto");
	system("cls");
	
	printf(">_< ���ڿ�������ǽ\n");
	//���÷���ǽ
	system("netsh advfirewall set allprofiles state on");
	
	printf("���ڷ��TCP��վ137�˿ڣ��������ȷ������Ϊ�ɹ�\n");
	system("netsh advfirewall firewall add rule name=\"Wcry���� tcp 137\" dir=in protocol=tcp localport=137 action=block");
	printf("���ڷ��TCP��վ138�˿ڣ��������ȷ������Ϊ�ɹ�\n");
	system("netsh advfirewall firewall add rule name=\"Wcry���� tcp 138\" dir=in protocol=tcp localport=138 action=block");
	printf("���ڷ��TCP��վ139�˿ڣ��������ȷ������Ϊ�ɹ�\n");
	system("netsh advfirewall firewall add rule name=\"Wcry���� tcp 139\" dir=in protocol=tcp localport=139 action=block");
	printf("���ڷ��TCP��վ445�˿ڣ��������ȷ������Ϊ�ɹ�\n");
	system("netsh advfirewall firewall add rule name=\"Wcry���� tcp 445\" dir=in protocol=tcp localport=445 action=block");
	Sleep(300);
	printf("\n\n\n���Ĵ�����,����ͬĿ¼����wcryim.reg��ע����ļ�o>,<oע�ⰲװһ�£�");
	system("echo Windows Registry Editor Version 5.00 >>wcryim.reg");
	system("echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Services\\LanmanServer\\Parameters] >>wcryim.reg");
	system("echo \"SMB1\" = dword:00000000 >>wcryim.reg");
	printf("\n\n\n��ɣ����еĹ������Ѿ������ˣ�\n\n\n\n");
	printf("������˳���");
	getchar();
	return;
}