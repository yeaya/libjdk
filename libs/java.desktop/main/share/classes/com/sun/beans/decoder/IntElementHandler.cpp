#include <com/sun/beans/decoder/IntElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void IntElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* IntElementHandler::getValue($String* argument) {
	return $of($Integer::decode(argument));
}

IntElementHandler::IntElementHandler() {
}

$Class* IntElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IntElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IntElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.IntElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(IntElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntElementHandler);
	});
	return class$;
}

$Class* IntElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com