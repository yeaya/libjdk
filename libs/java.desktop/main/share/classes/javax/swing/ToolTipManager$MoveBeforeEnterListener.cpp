#include <javax/swing/ToolTipManager$MoveBeforeEnterListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseMotionAdapter.h>
#include <javax/swing/ToolTipManager.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseMotionAdapter = ::java::awt::event::MouseMotionAdapter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolTipManager = ::javax::swing::ToolTipManager;

namespace javax {
	namespace swing {

void ToolTipManager$MoveBeforeEnterListener::init$($ToolTipManager* this$0) {
	$set(this, this$0, this$0);
	$MouseMotionAdapter::init$();
}

void ToolTipManager$MoveBeforeEnterListener::mouseMoved($MouseEvent* e) {
	this->this$0->initiateToolTip(e);
}

ToolTipManager$MoveBeforeEnterListener::ToolTipManager$MoveBeforeEnterListener() {
}

$Class* ToolTipManager$MoveBeforeEnterListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ToolTipManager;", nullptr, $FINAL | $SYNTHETIC, $field(ToolTipManager$MoveBeforeEnterListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ToolTipManager;)V", nullptr, $PRIVATE, $method(ToolTipManager$MoveBeforeEnterListener, init$, void, $ToolTipManager*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ToolTipManager$MoveBeforeEnterListener, mouseMoved, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ToolTipManager$MoveBeforeEnterListener", "javax.swing.ToolTipManager", "MoveBeforeEnterListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ToolTipManager$MoveBeforeEnterListener",
		"java.awt.event.MouseMotionAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ToolTipManager"
	};
	$loadClass(ToolTipManager$MoveBeforeEnterListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolTipManager$MoveBeforeEnterListener);
	});
	return class$;
}

$Class* ToolTipManager$MoveBeforeEnterListener::class$ = nullptr;

	} // swing
} // javax