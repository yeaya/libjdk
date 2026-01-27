#include <java.xml.test.h>

#include <java.xml.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$xml$test$PreloadClass() {
}

void java$xml$test$PreinitClass() {
}

void java$xml$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$xml$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$xml$test$PreinitClass();
	}
}

$StringArray* java$xml$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$xml$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$xml$test$GetResource($String* name) {
	return nullptr;
}

void java$xml$test::init() {
	::java$xml::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.xml.test", "17.35", "",
		nullptr,
		java$xml$test$LibEventAction,
		java$xml$test$GetPackages,
		java$xml$test$GetClassEntry,
		java$xml$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$xml$test::init();
}
#endif