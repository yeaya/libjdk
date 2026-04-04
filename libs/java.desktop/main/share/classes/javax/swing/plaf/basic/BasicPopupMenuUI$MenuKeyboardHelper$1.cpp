#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper$1.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MenuKeyboardHelper = ::javax::swing::plaf::basic::BasicPopupMenuUI$MenuKeyboardHelper;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicPopupMenuUI$MenuKeyboardHelper$1::init$($BasicPopupMenuUI$MenuKeyboardHelper* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void BasicPopupMenuUI$MenuKeyboardHelper$1::focusGained($FocusEvent* ev) {
	$useLocalObjectStack();
	$var($Component, opposite, $nc(ev)->getOppositeComponent());
	if (opposite != nullptr) {
		$set(this->this$0, lastFocused, opposite);
	}
	$$nc(ev->getComponent())->removeFocusListener(this);
}

BasicPopupMenuUI$MenuKeyboardHelper$1::BasicPopupMenuUI$MenuKeyboardHelper$1() {
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MenuKeyboardHelper$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MenuKeyboardHelper;)V", nullptr, 0, $method(BasicPopupMenuUI$MenuKeyboardHelper$1, init$, void, $BasicPopupMenuUI$MenuKeyboardHelper*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$MenuKeyboardHelper$1, focusGained, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper", "javax.swing.plaf.basic.BasicPopupMenuUI", "MenuKeyboardHelper", $STATIC},
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicPopupMenuUI$MenuKeyboardHelper$1",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicPopupMenuUI"
	};
	$loadClass(BasicPopupMenuUI$MenuKeyboardHelper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicPopupMenuUI$MenuKeyboardHelper$1);
	});
	return class$;
}

$Class* BasicPopupMenuUI$MenuKeyboardHelper$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax