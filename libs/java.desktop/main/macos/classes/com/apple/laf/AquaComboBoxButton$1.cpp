#include <com/apple/laf/AquaComboBoxButton$1.h>
#include <com/apple/laf/AquaComboBoxButton.h>
#include <javax/swing/DefaultButtonModel.h>
#include <jcpp.h>

using $AquaComboBoxButton = ::com::apple::laf::AquaComboBoxButton;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxButton$1::init$($AquaComboBoxButton* this$0) {
	$set(this, this$0, this$0);
	$DefaultButtonModel::init$();
}

void AquaComboBoxButton$1::setArmed(bool armed) {
	$DefaultButtonModel::setArmed(isPressed() ? true : armed);
}

AquaComboBoxButton$1::AquaComboBoxButton$1() {
}

$Class* AquaComboBoxButton$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxButton;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxButton$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxButton;)V", nullptr, 0, $method(AquaComboBoxButton$1, init$, void, $AquaComboBoxButton*)},
		{"setArmed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxButton$1, setArmed, void, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxButton",
		"<init>",
		"(Lcom/apple/laf/AquaComboBoxUI;Ljavax/swing/JComboBox;Ljavax/swing/CellRendererPane;Ljavax/swing/JList;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxButton$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxButton$1",
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
		"com.apple.laf.AquaComboBoxButton"
	};
	$loadClass(AquaComboBoxButton$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxButton$1));
	});
	return class$;
}

$Class* AquaComboBoxButton$1::class$ = nullptr;

		} // laf
	} // apple
} // com