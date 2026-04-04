#include <com/sun/beans/decoder/VoidElementHandler.h>
#include <com/sun/beans/decoder/ObjectElementHandler.h>
#include <jcpp.h>

using $ObjectElementHandler = ::com::sun::beans::decoder::ObjectElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void VoidElementHandler::init$() {
	$ObjectElementHandler::init$();
}

bool VoidElementHandler::isArgument() {
	return false;
}

VoidElementHandler::VoidElementHandler() {
}

$Class* VoidElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(VoidElementHandler, init$, void)},
		{"isArgument", "()Z", nullptr, $PROTECTED, $virtualMethod(VoidElementHandler, isArgument, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.VoidElementHandler",
		"com.sun.beans.decoder.ObjectElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(VoidElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VoidElementHandler);
	});
	return class$;
}

$Class* VoidElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com