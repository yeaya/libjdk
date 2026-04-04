#include <sun/lwawt/LWScrollPanePeer$1.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWScrollPanePeer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWScrollPanePeer = ::sun::lwawt::LWScrollPanePeer;

namespace sun {
	namespace lwawt {

void LWScrollPanePeer$1::init$($LWScrollPanePeer* this$0) {
	$set(this, this$0, this$0);
}

void LWScrollPanePeer$1::run() {
	$useLocalObjectStack();
	$var($LWComponentPeer, viewPeer, this->this$0->getViewPeer());
	if (viewPeer != nullptr) {
		$var($Rectangle, r, nullptr);
		$synchronized(this->this$0->getDelegateLock()) {
			$assign(r, $$nc($$nc($$sure($JScrollPane, this->this$0->getDelegate())->getViewport())->getView())->getBounds());
		}
		viewPeer->setBounds($nc(r)->x, $nc(r)->y, $nc(r)->width, $nc(r)->height, 3, true, true);
	}
}

LWScrollPanePeer$1::LWScrollPanePeer$1() {
}

$Class* LWScrollPanePeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/LWScrollPanePeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWScrollPanePeer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWScrollPanePeer;)V", nullptr, 0, $method(LWScrollPanePeer$1, init$, void, $LWScrollPanePeer*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWScrollPanePeer$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.LWScrollPanePeer",
		"stateChanged",
		"(Ljavax/swing/event/ChangeEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWScrollPanePeer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.LWScrollPanePeer$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWScrollPanePeer"
	};
	$loadClass(LWScrollPanePeer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWScrollPanePeer$1);
	});
	return class$;
}

$Class* LWScrollPanePeer$1::class$ = nullptr;

	} // lwawt
} // sun