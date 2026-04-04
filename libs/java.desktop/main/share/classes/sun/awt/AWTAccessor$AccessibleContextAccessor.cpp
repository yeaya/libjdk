#include <sun/awt/AWTAccessor$AccessibleContextAccessor.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AppContext = ::sun::awt::AppContext;

namespace sun {
	namespace awt {

$Class* AWTAccessor$AccessibleContextAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAppContext", "(Ljavax/accessibility/AccessibleContext;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AccessibleContextAccessor, getAppContext, $AppContext*, $AccessibleContext*)},
		{"getNativeAXResource", "(Ljavax/accessibility/AccessibleContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AccessibleContextAccessor, getNativeAXResource, $Object*, $AccessibleContext*)},
		{"setAppContext", "(Ljavax/accessibility/AccessibleContext;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AccessibleContextAccessor, setAppContext, void, $AccessibleContext*, $AppContext*)},
		{"setNativeAXResource", "(Ljavax/accessibility/AccessibleContext;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AccessibleContextAccessor, setNativeAXResource, void, $AccessibleContext*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$AccessibleContextAccessor", "sun.awt.AWTAccessor", "AccessibleContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$AccessibleContextAccessor",
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
	$loadClass(AWTAccessor$AccessibleContextAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$AccessibleContextAccessor);
	});
	return class$;
}

$Class* AWTAccessor$AccessibleContextAccessor::class$ = nullptr;

	} // awt
} // sun