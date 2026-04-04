#include <sun/lwawt/macosx/CPlatformWindow$4.h>
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

void CPlatformWindow$4::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$4::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc(c)->setStyleBits(1024, value == nullptr ? true : $Boolean::parseBoolean($($of(value)->toString())));
}

void CPlatformWindow$4::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$4::CPlatformWindow$4() {
}

$Class* CPlatformWindow$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$4, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$4, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$4, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$4", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$4",
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
	$loadClass(CPlatformWindow$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$4);
	});
	return class$;
}

$Class* CPlatformWindow$4::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun