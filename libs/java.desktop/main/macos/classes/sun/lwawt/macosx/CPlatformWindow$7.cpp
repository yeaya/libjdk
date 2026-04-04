#include <sun/lwawt/macosx/CPlatformWindow$7.h>
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

void CPlatformWindow$7::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$7::applyProperty($CPlatformWindow* c, Object$* value) {
	$useLocalObjectStack();
	bool zoomable = $Boolean::parseBoolean($($nc($of(value))->toString()));
	$init($LWWindowPeer$PeerType);
	if ($instanceOf($RootPaneContainer, $nc(c)->target) && $$nc(c->getPeer())->getPeerType() == $LWWindowPeer$PeerType::FRAME) {
		if (c->isInFullScreen && !zoomable) {
			c->toggleFullScreen();
		}
	}
	c->setStyleBits(2048, zoomable);
}

void CPlatformWindow$7::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

CPlatformWindow$7::CPlatformWindow$7() {
}

$Class* CPlatformWindow$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(CPlatformWindow$7, init$, void, $String*)},
		{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$7, applyProperty, void, $CPlatformWindow*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(CPlatformWindow$7, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$7", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$7",
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
	$loadClass(CPlatformWindow$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$7);
	});
	return class$;
}

$Class* CPlatformWindow$7::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun