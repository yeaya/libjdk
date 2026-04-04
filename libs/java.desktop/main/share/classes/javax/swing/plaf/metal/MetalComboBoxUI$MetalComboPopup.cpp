#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalComboPopup.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalComboBoxUI$MetalComboPopup::init$($MetalComboBoxUI* this$0, $JComboBox* cBox) {
	$set(this, this$0, this$0);
	$BasicComboPopup::init$(cBox);
}

void MetalComboBoxUI$MetalComboPopup::delegateFocus($MouseEvent* e) {
	$BasicComboPopup::delegateFocus(e);
}

MetalComboBoxUI$MetalComboPopup::MetalComboBoxUI$MetalComboPopup() {
}

$Class* MetalComboBoxUI$MetalComboPopup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxUI$MetalComboPopup, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(MetalComboBoxUI$MetalComboPopup, init$, void, $MetalComboBoxUI*, $JComboBox*)},
		{"delegateFocus", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxUI$MetalComboPopup, delegateFocus, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboPopup", $PUBLIC},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup",
		"javax.swing.plaf.basic.BasicComboPopup",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxUI"
	};
	$loadClass(MetalComboBoxUI$MetalComboPopup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalComboBoxUI$MetalComboPopup));
	});
	return class$;
}

$Class* MetalComboBoxUI$MetalComboPopup::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax