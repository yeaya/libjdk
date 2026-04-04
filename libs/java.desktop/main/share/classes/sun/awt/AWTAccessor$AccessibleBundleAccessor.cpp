#include <sun/awt/AWTAccessor$AccessibleBundleAccessor.h>
#include <javax/accessibility/AccessibleBundle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;

namespace sun {
	namespace awt {

$Class* AWTAccessor$AccessibleBundleAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getKey", "(Ljavax/accessibility/AccessibleBundle;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AccessibleBundleAccessor, getKey, $String*, $AccessibleBundle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$AccessibleBundleAccessor", "sun.awt.AWTAccessor", "AccessibleBundleAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$AccessibleBundleAccessor",
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
	$loadClass(AWTAccessor$AccessibleBundleAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$AccessibleBundleAccessor);
	});
	return class$;
}

$Class* AWTAccessor$AccessibleBundleAccessor::class$ = nullptr;

	} // awt
} // sun