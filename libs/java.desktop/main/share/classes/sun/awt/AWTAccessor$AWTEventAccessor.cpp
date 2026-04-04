#include <sun/awt/AWTAccessor$AWTEventAccessor.h>
#include <java/awt/AWTEvent.h>
#include <java/security/AccessControlContext.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace sun {
	namespace awt {

$Class* AWTAccessor$AWTEventAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAccessControlContext", "(Ljava/awt/AWTEvent;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, getAccessControlContext, $AccessControlContext*, $AWTEvent*)},
		{"getBData", "(Ljava/awt/AWTEvent;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, getBData, $bytes*, $AWTEvent*)},
		{"isSystemGenerated", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, isSystemGenerated, bool, $AWTEvent*)},
		{"setBData", "(Ljava/awt/AWTEvent;[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, setBData, void, $AWTEvent*, $bytes*)},
		{"setPosted", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, setPosted, void, $AWTEvent*)},
		{"setSystemGenerated", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$AWTEventAccessor, setSystemGenerated, void, $AWTEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$AWTEventAccessor", "sun.awt.AWTAccessor", "AWTEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$AWTEventAccessor",
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
	$loadClass(AWTAccessor$AWTEventAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$AWTEventAccessor);
	});
	return class$;
}

$Class* AWTAccessor$AWTEventAccessor::class$ = nullptr;

	} // awt
} // sun