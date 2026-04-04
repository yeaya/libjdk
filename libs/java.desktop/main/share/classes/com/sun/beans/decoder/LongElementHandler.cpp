#include <com/sun/beans/decoder/LongElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <jcpp.h>

using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void LongElementHandler::init$() {
	$StringElementHandler::init$();
}

$Object* LongElementHandler::getValue($String* argument) {
	return $of($Long::decode(argument));
}

LongElementHandler::LongElementHandler() {
}

$Class* LongElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LongElementHandler, init$, void)},
		{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LongElementHandler, getValue, $Object*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.LongElementHandler",
		"com.sun.beans.decoder.StringElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LongElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LongElementHandler);
	});
	return class$;
}

$Class* LongElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com