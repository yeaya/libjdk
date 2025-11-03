#include <java.datatransfer.test.h>

#include <java.datatransfer.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$datatransfer$test$PreloadClass(void* eventData) {
}

void java$datatransfer$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$datatransfer$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
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
	$System::init();
}