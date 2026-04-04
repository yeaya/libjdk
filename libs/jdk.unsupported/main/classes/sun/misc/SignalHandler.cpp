#include <sun/misc/SignalHandler.h>
#include <jdk/internal/misc/Signal$Handler.h>
#include <jdk/internal/misc/Signal.h>
#include <sun/misc/Signal$SunMiscHandler.h>
#include <sun/misc/Signal.h>
#include <jcpp.h>

#undef SIG_DFL
#undef SIG_IGN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Signal = ::jdk::internal::misc::Signal;
using $Signal$Handler = ::jdk::internal::misc::Signal$Handler;
using $1Signal = ::sun::misc::Signal;
using $Signal$SunMiscHandler = ::sun::misc::Signal$SunMiscHandler;

namespace sun {
	namespace misc {

SignalHandler* SignalHandler::SIG_DFL = nullptr;
SignalHandler* SignalHandler::SIG_IGN = nullptr;

void SignalHandler::clinit$($Class* clazz) {
	$init($Signal$Handler);
	$assignStatic(SignalHandler::SIG_DFL, $new($Signal$SunMiscHandler, nullptr, $Signal$Handler::SIG_DFL));
	$assignStatic(SignalHandler::SIG_IGN, $new($Signal$SunMiscHandler, nullptr, $Signal$Handler::SIG_IGN));
}

$Class* SignalHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SIG_DFL", "Lsun/misc/SignalHandler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignalHandler, SIG_DFL)},
		{"SIG_IGN", "Lsun/misc/SignalHandler;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignalHandler, SIG_IGN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"handle", "(Lsun/misc/Signal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SignalHandler, handle, void, $1Signal*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.misc.SignalHandler",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SignalHandler, name, initialize, &classInfo$$, SignalHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SignalHandler);
	});
	return class$;
}

$Class* SignalHandler::class$ = nullptr;

	} // misc
} // sun