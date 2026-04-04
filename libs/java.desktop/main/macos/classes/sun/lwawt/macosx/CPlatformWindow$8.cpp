#include <sun/lwawt/macosx/CPlatformWindow$8.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Window.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef FRAME

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPlatformWindow$8::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$8::applyProperty($CPlatformWindow* c, Object$* value) {
	$useLocalObjectStack();
	bool fullscrenable = $Boolean::parseBoolean($($nc($of(value))->toString()));
	$init($LWWindowPeer$PeerType);
	if ($instanceOf($RootPaneContainer, $nc(c)->target) && $$nc(c->getPeer())->getPeerType() == $LWWindowPeer$PeerType::FRAME) {
		if (c->isInFullScreen && !fullscrenable) {
			c->toggleFullScreen();
		}
	}
	c->setStyleBits(0x00800000, fullscrenable);
}

void CPlatformWindow$8::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$8::CPlatformWindow$8() {
}

$Class* CPlatformWindow$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$8, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$8, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$8, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$8", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$8",
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
	$loadClass(CPlatformWindow$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$8);
	});
	return class$;
}

$Class* CPlatformWindow$8::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun