#include <jdk.httpserver.test.h>

#include <jdk.httpserver.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void jdk$httpserver$test$PreloadClass(void* eventData) {
}

void jdk$httpserver$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$httpserver$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$httpserver$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$httpserver$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* jdk$httpserver$test$GetResource($String* name) {
	return nullptr;
}

void jdk$httpserver$test::init() {
	::jdk$httpserver::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.httpserver.test", "17.35", "",
		nullptr,
		jdk$httpserver$test$LibEventAction,
		jdk$httpserver$test$GetPackages,
		jdk$httpserver$test$GetClassEntry,
		jdk$httpserver$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}