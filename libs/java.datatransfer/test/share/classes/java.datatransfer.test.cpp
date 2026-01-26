#include <java.datatransfer.test.h>

#include <java.datatransfer.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$datatransfer$test$PreloadClass() {
}

void java$datatransfer$test$PreinitClass() {
}

void java$datatransfer$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$datatransfer$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$datatransfer$test$PreinitClass();
	}
}

$StringArray* java$datatransfer$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$datatransfer$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$datatransfer$test$GetResource($String* name) {
	return nullptr;
}

void java$datatransfer$test::init() {
	::java$datatransfer::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.datatransfer.test", "17.35", "",
		nullptr,
		java$datatransfer$test$LibEventAction,
		java$datatransfer$test$GetPackages,
		java$datatransfer$test$GetClassEntry,
		java$datatransfer$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$datatransfer$test::init();
}
#endif