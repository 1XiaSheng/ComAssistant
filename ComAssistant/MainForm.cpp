#include "MainForm.h"

using namespace ComAssistant;

int main(array<System::String^>^args)
{
	Application::EnableVisualStyles();//���ÿ��ӻ�����
	Application::Run(gcnew MainForm());//����һ�����岢������Ϣѭ��
	return 0;
}