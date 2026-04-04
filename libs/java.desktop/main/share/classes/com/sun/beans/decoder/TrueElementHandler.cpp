#include <com/sun/beans/decoder/TrueElementHandler.h>
#include <com/sun/beans/decoder/NullElementHandler.h>
#include <jcpp.h>

#undef TRUE

using $NullElementHandler = ::com::sun::beans::decoder::NullElementHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void TrueElementHandler::init$() {
	$NullElementHandler::init$();
}

$Object* TrueElementHandler::getValue() {
	return $of($Boolean::TRUE);
}

TrueElementHandler::TrueElementHandler() {
}

$Class* TrueElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TrueElementHandler, init$, void)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TrueElementHandler, getValue, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.TrueElementHandler",
		"com.sun.beans.decoder.NullElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TrueElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TrueElementHandler));
	});
	return class$;
}

$Class* TrueElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com