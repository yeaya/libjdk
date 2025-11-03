#include <java.se.test.h>

#include <java.se.h>
#include <java.compiler.h>
#include <java.datatransfer.h>
#include <java.desktop.h>
#include <java.instrument.h>
#include <java.logging.h>
#include <java.management.h>
#include <java.management.rmi.h>
#include <java.naming.h>
#include <java.net.http.h>
#include <java.prefs.h>
#include <java.rmi.h>
#include <java.scripting.h>
#include <java.security.jgss.h>
#include <java.security.sasl.h>
#include <java.sql.h>
#include <java.sql.rowset.h>
#include <java.transaction.xa.h>
#include <java.xml.h>
#include <java.xml.crypto.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>

void java$se$test$PreloadClass(void* eventData) {
}

void java$se$test$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$se$test$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$se$test$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$se$test$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$se$test$GetResource($String* name) {
	return nullptr;
}

void java$se$test::init() {
	::java$se::init();
	::java$compiler::init();
	::java$datatransfer::init();
	::java$desktop::init();
	::java$instrument::init();
	::java$logging::init();
	::java$management::init();
	::java$management$rmi::init();
	::java$naming::init();
	::java$net$http::init();
	::java$prefs::init();
	::java$rmi::init();
	::java$scripting::init();
	::java$security$jgss::init();
	::java$security$sasl::init();
	::java$sql::init();
	::java$sql$rowset::init();
	::java$transaction$xa::init();
	::java$xml::init();
	::java$xml$crypto::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.se.test", "17.35", "",
		nullptr,
		java$se$test$LibEventAction,
		java$se$test$GetPackages,
		java$se$test$GetClassEntry,
		java$se$test$GetResource
	};
	$System::addLibrary(&lib);
	$System::init();
}