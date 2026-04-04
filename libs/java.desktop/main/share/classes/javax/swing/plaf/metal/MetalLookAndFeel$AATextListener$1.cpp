#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener$1.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalLookAndFeel$AATextListener = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalLookAndFeel$AATextListener$1::init$($MetalLookAndFeel$AATextListener* this$0) {
	$set(this, this$0, this$0);
}

void MetalLookAndFeel$AATextListener$1::run() {
	$MetalLookAndFeel$AATextListener::updateAllUIs();
	$MetalLookAndFeel$AATextListener::setUpdatePending(false);
}

MetalLookAndFeel$AATextListener$1::MetalLookAndFeel$AATextListener$1() {
}

$Class* MetalLookAndFeel$AATextListener$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalLookAndFeel$AATextListener;", nullptr, $FINAL | $SYNTHETIC, $field(MetalLookAndFeel$AATextListener$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalLookAndFeel$AATextListener;)V", nullptr, 0, $method(MetalLookAndFeel$AATextListener$1, init$, void, $MetalLookAndFeel$AATextListener*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MetalLookAndFeel$AATextListener$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener",
		"updateUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
		{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalLookAndFeel"
	};
	$loadClass(MetalLookAndFeel$AATextListener$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalLookAndFeel$AATextListener$1);
	});
	return class$;
}

$Class* MetalLookAndFeel$AATextListener$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax