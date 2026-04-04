#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel$ColorTriangle.h>
#include <com/sun/java/swing/plaf/gtk/GTKColorChooserPanel.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <jcpp.h>

using $GTKColorChooserPanel = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel;
using $GTKColorChooserPanel$ColorTriangle = ::com::sun::java::swing::plaf::gtk::GTKColorChooserPanel$ColorTriangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

void GTKColorChooserPanel$ColorAction::init$($String* name, int32_t type) {
	$AbstractAction::init$(name);
	this->type = type;
}

void GTKColorChooserPanel$ColorAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($GTKColorChooserPanel$ColorTriangle, triangle, $cast($GTKColorChooserPanel$ColorTriangle, $nc(e)->getSource()));
	if ($nc(triangle)->isWheelFocused()) {
		float hue = $$nc(triangle->getGTKColorChooserPanel())->getHue();
		switch (this->type) {
		case 0:
		case 2:
			triangle->incrementHue(true);
			break;
		case 1:
		case 3:
			triangle->incrementHue(false);
			break;
		case 4:
			triangle->focusTriangle();
			break;
		case 5:
			$GTKColorChooserPanel::compositeRequestFocus(triangle, false);
			break;
		}
	} else {
		int32_t xDelta = 0;
		int32_t yDelta = 0;
		switch (this->type) {
		case 0:
			--yDelta;
			break;
		case 1:
			++yDelta;
			break;
		case 2:
			--xDelta;
			break;
		case 3:
			++xDelta;
			break;
		case 4:
			$GTKColorChooserPanel::compositeRequestFocus(triangle, true);
			return;
		case 5:
			triangle->focusWheel();
			return;
		}
		int32_t var$0 = triangle->getColorX() + xDelta;
		triangle->adjustSB(var$0, triangle->getColorY() + yDelta, true);
	}
}

GTKColorChooserPanel$ColorAction::GTKColorChooserPanel$ColorAction() {
}

$Class* GTKColorChooserPanel$ColorAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"type", "I", nullptr, $PRIVATE, $field(GTKColorChooserPanel$ColorAction, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, 0, $method(GTKColorChooserPanel$ColorAction, init$, void, $String*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(GTKColorChooserPanel$ColorAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorAction", "com.sun.java.swing.plaf.gtk.GTKColorChooserPanel", "ColorAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel$ColorAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.gtk.GTKColorChooserPanel"
	};
	$loadClass(GTKColorChooserPanel$ColorAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(GTKColorChooserPanel$ColorAction));
	});
	return class$;
}

$Class* GTKColorChooserPanel$ColorAction::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com