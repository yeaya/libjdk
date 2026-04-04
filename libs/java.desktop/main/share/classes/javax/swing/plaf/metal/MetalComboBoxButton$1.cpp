#include <javax/swing/plaf/metal/MetalComboBoxButton$1.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/plaf/metal/MetalComboBoxButton.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $MetalComboBoxButton = ::javax::swing::plaf::metal::MetalComboBoxButton;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalComboBoxButton$1::init$($MetalComboBoxButton* this$0) {
	$set(this, this$0, this$0);
	$DefaultButtonModel::init$();
}

void MetalComboBoxButton$1::setArmed(bool armed) {
	$DefaultButtonModel::setArmed(isPressed() ? true : armed);
}

MetalComboBoxButton$1::MetalComboBoxButton$1() {
}

$Class* MetalComboBoxButton$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxButton;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxButton$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxButton;)V", nullptr, 0, $method(MetalComboBoxButton$1, init$, void, $MetalComboBoxButton*)},
		{"setArmed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxButton$1, setArmed, void, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.metal.MetalComboBoxButton",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxButton$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxButton$1",
		"javax.swing.DefaultButtonModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxButton"
	};
	$loadClass(MetalComboBoxButton$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalComboBoxButton$1));
	});
	return class$;
}

$Class* MetalComboBoxButton$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax