#include <com/sun/beans/decoder/FalseElementHandler.h>
#include <com/sun/beans/decoder/NullElementHandler.h>
#include <jcpp.h>

#undef FALSE

using $NullElementHandler = ::com::sun::beans::decoder::NullElementHandler;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void FalseElementHandler::init$() {
	$NullElementHandler::init$();
}

$Object* FalseElementHandler::getValue() {
	return $of($Boolean::FALSE);
}

FalseElementHandler::FalseElementHandler() {
}

$Class* FalseElementHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FalseElementHandler, init$, void)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FalseElementHandler, getValue, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.decoder.FalseElementHandler",
		"com.sun.beans.decoder.NullElementHandler",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FalseElementHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FalseElementHandler));
	});
	return class$;
}

$Class* FalseElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com