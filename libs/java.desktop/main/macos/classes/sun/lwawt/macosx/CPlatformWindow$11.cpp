#include <sun/lwawt/macosx/CPlatformWindow$11.h>
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

void CPlatformWindow$11::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$11::applyProperty($CPlatformWindow* c, Object$* value) {
	bool isFullWindowContent = $Boolean::parseBoolean($($nc($of(value))->toString()));
	$nc(c)->setStyleBits(16384, isFullWindowContent);
}

void CPlatformWindow$11::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$11::CPlatformWindow$11() {
}

$Class* CPlatformWindow$11::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$11, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$11, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$11, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$11", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$11",
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
	$loadClass(CPlatformWindow$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$11);
	});
	return class$;
}

$Class* CPlatformWindow$11::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun