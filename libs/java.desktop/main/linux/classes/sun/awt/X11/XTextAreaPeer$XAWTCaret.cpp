#include <sun/awt/X11/XTextAreaPeer$XAWTCaret.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace sun {
	namespace awt {
		namespace X11 {

void XTextAreaPeer$XAWTCaret::init$() {
	$DefaultCaret::init$();
}

void XTextAreaPeer$XAWTCaret::focusGained($FocusEvent* e) {
	$useLocalObjectStack();
	$DefaultCaret::focusGained(e);
	if ($$nc(getComponent())->isEnabled()) {
		$DefaultCaret::setVisible(true);
	}
	$$nc(getComponent())->repaint();
}

void XTextAreaPeer$XAWTCaret::focusLost($FocusEvent* e) {
	$DefaultCaret::focusLost(e);
	$$nc(getComponent())->repaint();
}

XTextAreaPeer$XAWTCaret::XTextAreaPeer$XAWTCaret() {
}

$Class* XTextAreaPeer$XAWTCaret::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XTextAreaPeer$XAWTCaret, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(XTextAreaPeer$XAWTCaret, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(XTextAreaPeer$XAWTCaret, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTextAreaPeer$XAWTCaret", "sun.awt.X11.XTextAreaPeer", "XAWTCaret", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.X11.XTextAreaPeer$XAWTCaret",
		"javax.swing.text.DefaultCaret",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.X11.XTextAreaPeer"
	};
	$loadClass(XTextAreaPeer$XAWTCaret, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XTextAreaPeer$XAWTCaret));
	});
	return class$;
}

$Class* XTextAreaPeer$XAWTCaret::class$ = nullptr;

		} // X11
	} // awt
} // sun