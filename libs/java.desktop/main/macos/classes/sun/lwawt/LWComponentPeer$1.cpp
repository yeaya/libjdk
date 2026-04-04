#include <sun/lwawt/LWComponentPeer$1.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;

namespace sun {
	namespace lwawt {

void LWComponentPeer$1::init$($LWComponentPeer* this$0) {
	$set(this, this$0, this$0);
	$RepaintManager::init$();
}

void LWComponentPeer$1::addDirtyRegion($JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($Rectangle, var$0, $new($Rectangle, x, y, w, h));
	this->this$0->repaintPeer($($SwingUtilities::convertRectangle(c, var$0, $(this->this$0->getDelegate()))));
}

LWComponentPeer$1::LWComponentPeer$1() {
}

$Class* LWComponentPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWComponentPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWComponentPeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWComponentPeer;)V", nullptr, 0, $method(LWComponentPeer$1, init$, void, $LWComponentPeer*)},
		{"addDirtyRegion", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC, $virtualMethod(LWComponentPeer$1, addDirtyRegion, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWComponentPeer",
		"<init>",
		"(Ljava/awt/Component;Lsun/lwawt/PlatformComponent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWComponentPeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWComponentPeer$1",
		"javax.swing.RepaintManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWComponentPeer"
	};
	$loadClass(LWComponentPeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWComponentPeer$1);
	});
	return class$;
}

$Class* LWComponentPeer$1::class$ = nullptr;

	} // lwawt
} // sun