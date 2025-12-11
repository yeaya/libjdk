#include <jdk.zipfs.test.h>

#include <jdk.zipfs.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void jdk$zipfs$test$PreloadClass(void* eventData) {
}

void jdk$zipfs$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$zipfs$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* jdk$zipfs$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$zipfs$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* jdk$zipfs$test$GetResource($String* name) {
	return nullptr;
}

void jdk$zipfs$test::init() {
	::jdk$zipfs::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.zipfs.test", "17.35", "",
		nullptr,
		jdk$zipfs$test$LibEventAction,
		jdk$zipfs$test$GetPackages,
		jdk$zipfs$test$GetClassEntry,
		jdk$zipfs$test$GetResource
	};
	$System::addLibrary(&lib);
}