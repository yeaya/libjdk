#include <java/awt/AWTEvent$1.h>
#include <java/awt/AWTEvent.h>
#include <java/security/AccessControlContext.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;

namespace java {
	namespace awt {

void AWTEvent$1::init$() {
}

void AWTEvent$1::setPosted($AWTEvent* ev) {
	$nc(ev)->isPosted = true;
}

void AWTEvent$1::setSystemGenerated($AWTEvent* ev) {
	$nc(ev)->isSystemGenerated = true;
}

bool AWTEvent$1::isSystemGenerated($AWTEvent* ev) {
	return $nc(ev)->isSystemGenerated;
}

$AccessControlContext* AWTEvent$1::getAccessControlContext($AWTEvent* ev) {
	return $nc(ev)->getAccessControlContext();
}

$bytes* AWTEvent$1::getBData($AWTEvent* ev) {
	return $nc(ev)->bdata;
}

void AWTEvent$1::setBData($AWTEvent* ev, $bytes* bdata) {
	$set($nc(ev), bdata, bdata);
}

AWTEvent$1::AWTEvent$1() {
}

$Class* AWTEvent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AWTEvent$1, init$, void)},
		{"getAccessControlContext", "(Ljava/awt/AWTEvent;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, getAccessControlContext, $AccessControlContext*, $AWTEvent*)},
		{"getBData", "(Ljava/awt/AWTEvent;)[B", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, getBData, $bytes*, $AWTEvent*)},
		{"isSystemGenerated", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, isSystemGenerated, bool, $AWTEvent*)},
		{"setBData", "(Ljava/awt/AWTEvent;[B)V", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, setBData, void, $AWTEvent*, $bytes*)},
		{"setPosted", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, setPosted, void, $AWTEvent*)},
		{"setSystemGenerated", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(AWTEvent$1, setSystemGenerated, void, $AWTEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.AWTEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.AWTEvent$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$AWTEventAccessor", "sun.awt.AWTAccessor", "AWTEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.AWTEvent$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$AWTEventAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.AWTEvent"
	};
	$loadClass(AWTEvent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTEvent$1);
	});
	return class$;
}

$Class* AWTEvent$1::class$ = nullptr;

	} // awt
} // java