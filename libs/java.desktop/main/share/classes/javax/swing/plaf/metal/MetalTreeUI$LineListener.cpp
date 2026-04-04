#include <javax/swing/plaf/metal/MetalTreeUI$LineListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/metal/MetalTreeUI.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalTreeUI = ::javax::swing::plaf::metal::MetalTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTreeUI$LineListener::init$($MetalTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalTreeUI$LineListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("JTree.lineStyle"_s)) {
		this->this$0->decodeLineStyle($(e->getNewValue()));
	}
}

MetalTreeUI$LineListener::MetalTreeUI$LineListener() {
}

$Class* MetalTreeUI$LineListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTreeUI$LineListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTreeUI;)V", nullptr, 0, $method(MetalTreeUI$LineListener, init$, void, $MetalTreeUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTreeUI$LineListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTreeUI$LineListener", "javax.swing.plaf.metal.MetalTreeUI", "LineListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTreeUI$LineListener",
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
		"javax.swing.plaf.metal.MetalTreeUI"
	};
	$loadClass(MetalTreeUI$LineListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalTreeUI$LineListener);
	});
	return class$;
}

$Class* MetalTreeUI$LineListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax