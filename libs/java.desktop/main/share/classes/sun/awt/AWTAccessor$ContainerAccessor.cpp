#include <sun/awt/AWTAccessor$ContainerAccessor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$ContainerAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"findComponentAt", "(Ljava/awt/Container;IIZ)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ContainerAccessor, findComponentAt, $Component*, $Container*, int32_t, int32_t, bool)},
		{"startLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ContainerAccessor, startLWModal, void, $Container*)},
		{"stopLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ContainerAccessor, stopLWModal, void, $Container*)},
		{"validateUnconditionally", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ContainerAccessor, validateUnconditionally, void, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$ContainerAccessor", "sun.awt.AWTAccessor", "ContainerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$ContainerAccessor",
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
	$loadClass(AWTAccessor$ContainerAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$ContainerAccessor);
	});
	return class$;
}

$Class* AWTAccessor$ContainerAccessor::class$ = nullptr;

	} // awt
} // sun