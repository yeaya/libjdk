#include <java.scripting.test.h>

#include <java.scripting.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$scripting$test$PreloadClass() {
}

void java$scripting$test$PreinitClass() {
}

void java$scripting$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$scripting$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$scripting$test$PreinitClass();
	}
}

$StringArray* java$scripting$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$scripting$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$scripting$test$GetResource($String* name) {
	return nullptr;
}

void java$scripting$test::init() {
	::java$scripting::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.scripting.test", "17.35", "",
		nullptr,
		java$scripting$test$LibEventAction,
		java$scripting$test$GetPackages,
		java$scripting$test$GetClassEntry,
		java$scripting$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$scripting$test::init();
}
#endif