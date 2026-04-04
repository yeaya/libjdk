#include <java/awt/KeyEventPostProcessor.h>
#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* KeyEventPostProcessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyEventPostProcessor, postProcessKeyEvent, bool, $KeyEvent*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.KeyEventPostProcessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(KeyEventPostProcessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyEventPostProcessor);
	});
	return class$;
}

$Class* KeyEventPostProcessor::class$ = nullptr;

	} // awt
} // java