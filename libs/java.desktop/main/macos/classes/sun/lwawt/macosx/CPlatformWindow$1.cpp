#include <sun/lwawt/macosx/CPlatformWindow$1.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPlatformWindow$1::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$1::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc(c)->setStyleBits(0x00200000, value == nullptr ? false : $Boolean::parseBoolean($($of(value)->toString())));
}

void CPlatformWindow$1::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$1::CPlatformWindow$1() {
}

$Class* CPlatformWindow$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$1, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$1, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$1, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$1", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$1",
		"com.apple.laf.ClientPropertyApplicator$Property",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPlatformWindow"
	};
	$loadClass(CPlatformWindow$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$1);
	});
	return class$;
}

$Class* CPlatformWindow$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun