#include <java/beans/ExceptionListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* ExceptionListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"exceptionThrown", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExceptionListener, exceptionThrown, void, $Exception*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.ExceptionListener",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ExceptionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExceptionListener);
	});
	return class$;
}

$Class* ExceptionListener::class$ = nullptr;

	} // beans
} // java