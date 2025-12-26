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
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>


void java$se$PreloadClass(void* eventData) {
}

void java$se$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$se$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$se$GetPackages() {
	return nullptr;
}

::java::lang::ClassEntry* java$se$GetClassEntry($String* name) {
	return nullptr;
}

$bytes* java$se$GetResource($String* name) {
	return nullptr;
}

void java$se::init() {
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
	::java::lang::Library lib = {
		"java.se", "17.35", "",
		&_java$se_ModuleInfo_,
		java$se$LibEventAction,
		java$se$GetPackages,
		java$se$GetClassEntry,
		java$se$GetResource
	};
	$System::addLibrary(&lib);
}