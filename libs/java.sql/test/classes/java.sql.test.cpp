#include <java.sql.test.h>

#include <java.sql.h>
#include <java.base.h>
#include <java.logging.h>
#include <java.transaction.xa.h>
#include <java.xml.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$sql$test$PreloadClass() {
}

void java$sql$test$PreinitClass() {
}

void java$sql$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$sql$test$PreloadClass();
	} else if (eventType == JCPP_LIB_EVENT_TYPE_PREINIT_CLASS) {
		java$sql$test$PreinitClass();
	}
}

$StringArray* java$sql$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$sql$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$sql$test$GetResource($String* name) {
	return nullptr;
}

void java$sql$test::init() {
	::java$sql::init();
	::java$base::init();
	::java$logging::init();
	::java$transaction$xa::init();
	::java$xml::init();
	::java::lang::Library lib = {
		"java.sql.test", "17.35", "",
		nullptr,
		java$sql$test$LibEventAction,
		java$sql$test$GetPackages,
		java$sql$test$GetClassEntry,
		java$sql$test$GetResource
	};
	$System::addLibrary(&lib);
}

#ifdef JCPP_SHARED_BUILD
extern "C" $export void JCPP_OnLoad() {
	java$sql$test::init();
}
#endif