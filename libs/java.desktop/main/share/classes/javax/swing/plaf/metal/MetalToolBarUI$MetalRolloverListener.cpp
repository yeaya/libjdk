#include <javax/swing/plaf/metal/MetalToolBarUI$MetalRolloverListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$PropertyListener.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI$PropertyListener = ::javax::swing::plaf::basic::BasicToolBarUI$PropertyListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalToolBarUI$MetalRolloverListener::init$($MetalToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$PropertyListener::init$(this$0);
}

MetalToolBarUI$MetalRolloverListener::MetalToolBarUI$MetalRolloverListener() {
}

$Class* MetalToolBarUI$MetalRolloverListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalRolloverListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;)V", nullptr, $PROTECTED, $method(MetalToolBarUI$MetalRolloverListener, init$, void, $MetalToolBarUI*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalRolloverListener", $PROTECTED},
		{"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener", "javax.swing.plaf.basic.BasicToolBarUI", "PropertyListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener",
		"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener",
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
	$loadClass(MetalToolBarUI$MetalRolloverListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalToolBarUI$MetalRolloverListener);
	});
	return class$;
}

$Class* MetalToolBarUI$MetalRolloverListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax