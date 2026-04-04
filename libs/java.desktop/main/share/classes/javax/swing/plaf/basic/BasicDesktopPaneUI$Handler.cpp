#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Handler.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDesktopPaneUI$Handler::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicDesktopPaneUI$Handler::propertyChange($PropertyChangeEvent* evt) {
	$var($String, propertyName, $nc(evt)->getPropertyName());
	if ("desktopManager"_s == propertyName) {
		this->this$0->installDesktopManager();
	}
}

BasicDesktopPaneUI$Handler::BasicDesktopPaneUI$Handler() {
}

$Class* BasicDesktopPaneUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PRIVATE, $method(BasicDesktopPaneUI$Handler, init$, void, $BasicDesktopPaneUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicDesktopPaneUI$Handler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler", "javax.swing.plaf.basic.BasicDesktopPaneUI", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$Handler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicDesktopPaneUI"
	};
	$loadClass(BasicDesktopPaneUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDesktopPaneUI$Handler);
	});
	return class$;
}

$Class* BasicDesktopPaneUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax