#include <java.compiler.test.h>

#include <java.compiler.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$compiler$test$PreloadClass() {
}

void java$compiler$test$PreinitClass() {
}

void java$compiler$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$compiler$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$compiler$test$PreinitClass();
	}
}

$StringArray* java$compiler$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$compiler$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$compiler$test$GetResource($String* name) {
	return nullptr;
}

void java$compiler$test::init() {
	::java$compiler::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.compiler.test", "17.35", "",
		nullptr,
		java$compiler$test$LibEventAction,
		java$compiler$test$GetPackages,
		java$compiler$test$GetClassEntry,
		java$compiler$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$compiler$test::init();
}
#endif