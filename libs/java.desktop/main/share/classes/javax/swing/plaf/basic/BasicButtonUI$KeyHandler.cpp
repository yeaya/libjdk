#include <javax/swing/plaf/basic/BasicButtonUI$KeyHandler.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <java/util/EventObject.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/basic/BasicButtonUI$ButtonGroupInfo.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL_KEYS
#undef FORWARD_TRAVERSAL_KEYS

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicButtonUI$ButtonGroupInfo = ::javax::swing::plaf::basic::BasicButtonUI$ButtonGroupInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicButtonUI$KeyHandler::init$($BasicButtonUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicButtonUI$KeyHandler::keyPressed($KeyEvent* e) {
	$useLocalObjectStack();
	$var($AWTKeyStroke, stroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(e));
	if (stroke != nullptr && $instanceOf($JToggleButton, $($nc(e)->getSource()))) {
		$var($JToggleButton, source, $cast($JToggleButton, e->getSource()));
		bool next = isFocusTraversalKey(source, $KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, stroke);
		if (next || isFocusTraversalKey(source, $KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, stroke)) {
			e->consume();
			$var($BasicButtonUI$ButtonGroupInfo, btnGroupInfo, $new($BasicButtonUI$ButtonGroupInfo, this->this$0, source));
			btnGroupInfo->jumpToNextComponent(next);
		}
	}
}

bool BasicButtonUI$KeyHandler::isFocusTraversalKey($JComponent* c, int32_t id, $AWTKeyStroke* stroke) {
	$var($Set, keys, $nc(c)->getFocusTraversalKeys(id));
	return keys != nullptr && keys->contains(stroke);
}

void BasicButtonUI$KeyHandler::keyReleased($KeyEvent* e) {
}

void BasicButtonUI$KeyHandler::keyTyped($KeyEvent* e) {
}

BasicButtonUI$KeyHandler::BasicButtonUI$KeyHandler() {
}

$Class* BasicButtonUI$KeyHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicButtonUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicButtonUI$KeyHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicButtonUI;)V", nullptr, $PRIVATE, $method(BasicButtonUI$KeyHandler, init$, void, $BasicButtonUI*)},
		{"isFocusTraversalKey", "(Ljavax/swing/JComponent;ILjava/awt/AWTKeyStroke;)Z", nullptr, $PRIVATE, $method(BasicButtonUI$KeyHandler, isFocusTraversalKey, bool, $JComponent*, int32_t, $AWTKeyStroke*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI$KeyHandler, keyPressed, void, $KeyEvent*)},
		{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI$KeyHandler, keyReleased, void, $KeyEvent*)},
		{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicButtonUI$KeyHandler, keyTyped, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicButtonUI$KeyHandler", "javax.swing.plaf.basic.BasicButtonUI", "KeyHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicButtonUI$KeyHandler",
		"java.lang.Object",
		"java.awt.event.KeyListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicButtonUI"
	};
	$loadClass(BasicButtonUI$KeyHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicButtonUI$KeyHandler);
	});
	return class$;
}

$Class* BasicButtonUI$KeyHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax