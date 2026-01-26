#include <java.net.http.test.h>

#include <java.net.http.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$net$http$test$PreloadClass() {
}

void java$net$http$test$PreinitClass() {
}

void java$net$http$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$net$http$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$net$http$test$PreinitClass();
	}
}

$StringArray* java$net$http$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$net$http$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$net$http$test$GetResource($String* name) {
	return nullptr;
}

void java$net$http$test::init() {
	::java$net$http::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.net.http.test", "17.35", "",
		nullptr,
		java$net$http$test$LibEventAction,
		java$net$http$test$GetPackages,
		java$net$http$test$GetClassEntry,
		java$net$http$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$net$http$test::init();
}
#endif