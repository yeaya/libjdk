#include <javax/swing/plaf/metal/MetalToolBarUI$MetalContainerListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$ToolBarContListener.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI$ToolBarContListener = ::javax::swing::plaf::basic::BasicToolBarUI$ToolBarContListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalToolBarUI$MetalContainerListener::init$($MetalToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$ToolBarContListener::init$(this$0);
}

MetalToolBarUI$MetalContainerListener::MetalToolBarUI$MetalContainerListener() {
}

$Class* MetalToolBarUI$MetalContainerListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalContainerListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;)V", nullptr, $PROTECTED, $method(MetalToolBarUI$MetalContainerListener, init$, void, $MetalToolBarUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalContainerListener", $PROTECTED},
		{"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener", "javax.swing.plaf.basic.BasicToolBarUI", "ToolBarContListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalToolBarUI$MetalContainerListener",
		"javax.swing.plaf.basic.BasicToolBarUI$ToolBarContListener",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalToolBarUI"
	};
	$loadClass(MetalToolBarUI$MetalContainerListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalToolBarUI$MetalContainerListener);
	});
	return class$;
}

$Class* MetalToolBarUI$MetalContainerListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax