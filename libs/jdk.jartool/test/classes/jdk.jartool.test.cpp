#include <jdk.jartool.test.h>

#include <jdk.jartool.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void jdk$jartool$test$PreloadClass() {
}

void jdk$jartool$test$PreinitClass() {
}

void jdk$jartool$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		jdk$jartool$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		jdk$jartool$test$PreinitClass();
	}
}

$StringArray* jdk$jartool$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* jdk$jartool$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* jdk$jartool$test$GetResource($String* name) {
	return nullptr;
}

void jdk$jartool$test::init() {
	::jdk$jartool::init();
	::java$base::init();
	::java::lang::Library lib = {
		"jdk.jartool.test", "17.35", "",
		nullptr,
		jdk$jartool$test$LibEventAction,
		jdk$jartool$test$GetPackages,
		jdk$jartool$test$GetClassEntry,
		jdk$jartool$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	jdk$jartool$test::init();
}
#endif