#include <javax/swing/plaf/metal/MetalScrollPaneUI$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/metal/MetalScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalScrollPaneUI.h>
#include <jcpp.h>

#undef FALSE
#undef FREE_STANDING_PROP

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $MetalScrollBarUI = ::javax::swing::plaf::metal::MetalScrollBarUI;
using $MetalScrollPaneUI = ::javax::swing::plaf::metal::MetalScrollPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalScrollPaneUI$1::init$($MetalScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalScrollPaneUI$1::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	bool var$0 = $nc(propertyName)->equals("verticalScrollBar"_s);
	if (var$0 || propertyName->equals("horizontalScrollBar"_s)) {
		$var($JScrollBar, oldSB, $cast($JScrollBar, e->getOldValue()));
		if (oldSB != nullptr) {
			$init($MetalScrollBarUI);
			oldSB->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, nullptr);
		}
		$var($JScrollBar, newSB, $cast($JScrollBar, e->getNewValue()));
		if (newSB != nullptr) {
			$init($MetalScrollBarUI);
			newSB->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, $Boolean::FALSE);
		}
	} else if ("border"_s->equals(propertyName)) {
		this->this$0->updateScrollbarsFreeStanding();
	}
}

MetalScrollPaneUI$1::MetalScrollPaneUI$1() {
}

$Class* MetalScrollPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalScrollPaneUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalScrollPaneUI;)V", nullptr, 0, $method(MetalScrollPaneUI$1, init$, void, $MetalScrollPaneUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalScrollPaneUI$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalScrollPaneUI",
		"createScrollBarSwapListener",
		"()Ljava/beans/PropertyChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalScrollPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalScrollPaneUI$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalScrollPaneUI"
	};
	$loadClass(MetalScrollPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalScrollPaneUI$1);
	});
	return class$;
}

$Class* MetalScrollPaneUI$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax