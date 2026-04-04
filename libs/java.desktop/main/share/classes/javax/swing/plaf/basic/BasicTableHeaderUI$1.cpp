#include <javax/swing/plaf/basic/BasicTableHeaderUI$1.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTableHeaderUI$1::init$() {
}

void BasicTableHeaderUI$1::focusGained($FocusEvent* e) {
	repaintHeader($($nc(e)->getSource()));
}

void BasicTableHeaderUI$1::focusLost($FocusEvent* e) {
	repaintHeader($($nc(e)->getSource()));
}

void BasicTableHeaderUI$1::repaintHeader(Object$* source) {
	$useLocalObjectStack();
	if ($instanceOf($JTableHeader, source)) {
		$var($JTableHeader, th, $cast($JTableHeader, source));
		$load($BasicTableHeaderUI);
		$var($BasicTableHeaderUI, ui, $cast($BasicTableHeaderUI, $BasicLookAndFeel::getUIOfType($(th->getUI()), $BasicTableHeaderUI::class$)));
		if (ui == nullptr) {
			return;
		}
		th->repaint($(th->getHeaderRect($nc(ui)->getSelectedColumnIndex())));
	}
}

BasicTableHeaderUI$1::BasicTableHeaderUI$1() {
}

$Class* BasicTableHeaderUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BasicTableHeaderUI$1, init$, void)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableHeaderUI$1, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicTableHeaderUI$1, focusLost, void, $FocusEvent*)},
		{"repaintHeader", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(BasicTableHeaderUI$1, repaintHeader, void, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicTableHeaderUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTableHeaderUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTableHeaderUI$1",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTableHeaderUI"
	};
	$loadClass(BasicTableHeaderUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTableHeaderUI$1);
	});
	return class$;
}

$Class* BasicTableHeaderUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax