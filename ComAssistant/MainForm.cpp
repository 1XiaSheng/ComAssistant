#include "MainForm.h"

using namespace ComAssistant;

int main(array<System::String^>^args)
{
	Application::EnableVisualStyles();//启用可视化界面
	Application::Run(gcnew MainForm());//创建一个窗体并进入消息循环
	return 0;
}