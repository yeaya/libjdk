#include <sun/rmi/registry/RegistryImpl.h>
#include <java.rmi.h>
#include <jcpp.h>

#ifdef JCPP_SUBSYSTEM_WINDOWS
#include <windows.h>
int WINAPI WinMain(HINSTANCE inst, HINSTANCE previnst, LPSTR cmdline, int cmdshow) {
	return $System::launchwin(true, ::java$rmi::init, []($StringArray* args)->void {
		::sun::rmi::registry::RegistryImpl::main(args);
	});
}
#else
int main(int argc, char** argv) {
	return $System::launch(argc, argv, true, ::java$rmi::init, []($StringArray* args)->void {
		::sun::rmi::registry::RegistryImpl::main(args);
	});
}
#endif