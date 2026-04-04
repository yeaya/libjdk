#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Container$EventTargetFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Container$EventTargetFilter, accept, bool, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"java.awt.Container$EventTargetFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$EventTargetFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container$EventTargetFilter);
	});
	return class$;
}

$Class* Container$EventTargetFilter::class$ = nullptr;

	} // awt
} // java