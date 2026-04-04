#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>
#include <java/awt/AWTEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$SequencedEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$SequencedEventAccessor, create, $AWTEvent*, $AWTEvent*)},
		{"getNested", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$SequencedEventAccessor, getNested, $AWTEvent*, $AWTEvent*)},
		{"isSequencedEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$SequencedEventAccessor, isSequencedEvent, bool, $AWTEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$SequencedEventAccessor", "sun.awt.AWTAccessor", "SequencedEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$SequencedEventAccessor",
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
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$SequencedEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$SequencedEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$SequencedEventAccessor::class$ = nullptr;

	} // awt
} // sun