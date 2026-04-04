#include <sun/lwawt/LWButtonPeer$JButtonDelegate.h>
#include <java/awt/Button.h>
#include <java/awt/Component.h>
#include <javax/swing/JButton.h>
#include <sun/lwawt/LWButtonPeer.h>
#include <jcpp.h>

using $Button = ::java::awt::Button;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $LWButtonPeer = ::sun::lwawt::LWButtonPeer;

namespace sun {
	namespace lwawt {

void LWButtonPeer$JButtonDelegate::init$($LWButtonPeer* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
}

bool LWButtonPeer$JButtonDelegate::hasFocus() {
	return $$sure($Button, this->this$0->getTarget())->hasFocus();
}

LWButtonPeer$JButtonDelegate::LWButtonPeer$JButtonDelegate() {
}

$Class* LWButtonPeer$JButtonDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWButtonPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWButtonPeer$JButtonDelegate, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWButtonPeer;)V", nullptr, $PRIVATE, $method(LWButtonPeer$JButtonDelegate, init$, void, $LWButtonPeer*)},
		{"hasFocus", "()Z", nullptr, $PUBLIC, $virtualMethod(LWButtonPeer$JButtonDelegate, hasFocus, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWButtonPeer$JButtonDelegate", "sun.lwawt.LWButtonPeer", "JButtonDelegate", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWButtonPeer$JButtonDelegate",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWButtonPeer"
	};
	$loadClass(LWButtonPeer$JButtonDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWButtonPeer$JButtonDelegate));
	});
	return class$;
}

$Class* LWButtonPeer$JButtonDelegate::class$ = nullptr;

	} // lwawt
} // sun