#include <javax/swing/plaf/basic/BasicToolTipUI$PropertyChangeHandler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ToolTipUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToolTipUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolTip = ::javax::swing::JToolTip;
using $ToolTipUI = ::javax::swing::plaf::ToolTipUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToolTipUI = ::javax::swing::plaf::basic::BasicToolTipUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolTipUI$PropertyChangeHandler::init$() {
}

void BasicToolTipUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, name, $nc(e)->getPropertyName());
	bool var$2 = $nc(name)->equals("tiptext"_s);
	bool var$1 = var$2 || "foreground"_s->equals(name);
	bool var$0 = var$1 || "font"_s->equals(name);
	if (var$0 || $SwingUtilities2::isScaleChanged(e)) {
		$var($JToolTip, tip, $cast($JToolTip, e->getSource()));
		$var($String, text, $nc(tip)->getTipText());
		$BasicHTML::updateRenderer(tip, text);
	} else if ("component"_s->equals(name)) {
		$var($JToolTip, tip, $cast($JToolTip, e->getSource()));
		if ($instanceOf($BasicToolTipUI, $$cast($ToolTipUI, $nc(tip)->getUI()))) {
			$$sure($BasicToolTipUI, $cast($ToolTipUI, tip->getUI()))->componentChanged(tip);
		}
	}
}

BasicToolTipUI$PropertyChangeHandler::BasicToolTipUI$PropertyChangeHandler() {
}

$Class* BasicToolTipUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BasicToolTipUI$PropertyChangeHandler, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicToolTipUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicToolTipUI", "PropertyChangeHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolTipUI$PropertyChangeHandler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicToolTipUI"
	};
	$loadClass(BasicToolTipUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicToolTipUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* BasicToolTipUI$PropertyChangeHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax