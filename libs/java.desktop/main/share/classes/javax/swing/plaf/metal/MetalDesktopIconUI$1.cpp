#include <javax/swing/plaf/metal/MetalDesktopIconUI$1.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalDesktopIconUI = ::javax::swing::plaf::metal::MetalDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalDesktopIconUI$1::init$($MetalDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void MetalDesktopIconUI$1::actionPerformed($ActionEvent* e) {
	this->this$0->deiconize();
}

MetalDesktopIconUI$1::MetalDesktopIconUI$1() {
}

$Class* MetalDesktopIconUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalDesktopIconUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalDesktopIconUI;)V", nullptr, 0, $method(MetalDesktopIconUI$1, init$, void, $MetalDesktopIconUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalDesktopIconUI$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalDesktopIconUI",
		"installComponents",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalDesktopIconUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalDesktopIconUI$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalDesktopIconUI"
	};
	$loadClass(MetalDesktopIconUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalDesktopIconUI$1);
	});
	return class$;
}

$Class* MetalDesktopIconUI$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax