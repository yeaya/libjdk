#include <sun/java2d/loops/GraphicsPrimitiveMgr.h>
#include <java.desktop.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchw(::java$desktop::init, []($StringArray* args)->void {
		::sun::java2d::loops::GraphicsPrimitiveMgr::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, ::java$desktop::init, []($StringArray* args)->void {
		::sun::java2d::loops::GraphicsPrimitiveMgr::main(args);
	});
}
#endif