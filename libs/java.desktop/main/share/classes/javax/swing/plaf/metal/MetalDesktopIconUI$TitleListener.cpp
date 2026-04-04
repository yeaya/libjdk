#include <javax/swing/plaf/metal/MetalDesktopIconUI$TitleListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MetalDesktopIconUI = ::javax::swing::plaf::metal::MetalDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalDesktopIconUI$TitleListener::init$($MetalDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalDesktopIconUI$TitleListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	if ($$nc($nc(e)->getPropertyName())->equals("title"_s)) {
		$nc(this->this$0->button)->setText($$cast($String, e->getNewValue()));
	}
	if ($$nc(e->getPropertyName())->equals("frameIcon"_s)) {
		$nc(this->this$0->button)->setIcon($$cast($Icon, e->getNewValue()));
	}
}

MetalDesktopIconUI$TitleListener::MetalDesktopIconUI$TitleListener() {
}

$Class* MetalDesktopIconUI$TitleListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalDesktopIconUI$TitleListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalDesktopIconUI;)V", nullptr, 0, $method(MetalDesktopIconUI$TitleListener, init$, void, $MetalDesktopIconUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalDesktopIconUI$TitleListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener", "javax.swing.plaf.metal.MetalDesktopIconUI", "TitleListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener",
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
		"javax.swing.plaf.metal.MetalDesktopIconUI"
	};
	$loadClass(MetalDesktopIconUI$TitleListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalDesktopIconUI$TitleListener);
	});
	return class$;
}

$Class* MetalDesktopIconUI$TitleListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax