#include <java.naming.test.h>

#include <java.naming.h>
#include <java.base.h>
#include <java.security.sasl.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$naming$test$PreloadClass() {
}

void java$naming$test$PreinitClass() {
}

void java$naming$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$naming$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$naming$test$PreinitClass();
	}
}

$StringArray* java$naming$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$naming$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$naming$test$GetResource($String* name) {
	return nullptr;
}

void java$naming$test::init() {
	::java$naming::init();
	::java$base::init();
	::java$security$sasl::init();
	::java::lang::Library lib = {
		"java.naming.test", "17.35", "",
		nullptr,
		java$naming$test$LibEventAction,
		java$naming$test$GetPackages,
		java$naming$test$GetClassEntry,
		java$naming$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$naming$test::init();
}
#endif