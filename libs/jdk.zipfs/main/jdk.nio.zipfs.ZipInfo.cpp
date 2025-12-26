#include <jdk/nio/zipfs/ZipInfo.h>
#include <jdk.zipfs.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::jdk$zipfs::init, []($StringArray* args)->void {
		::jdk::nio::zipfs::ZipInfo::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::jdk$zipfs::init, []($StringArray* args)->void {
		::jdk::nio::zipfs::ZipInfo::main(args);
	});
}
#endif