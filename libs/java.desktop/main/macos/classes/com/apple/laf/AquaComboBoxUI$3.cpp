#include <com/apple/laf/AquaComboBoxUI$3.h>
#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <java/awt/Component.h>
#include <javax/swing/Action.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$ComboBoxAction = ::com::apple::laf::AquaComboBoxUI$ComboBoxAction;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$3::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$3::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalObjectStack();
	int32_t si = $$nc($AquaComboBoxUI::access$2400(this->this$0))->getSelectedIndex();
	if (si < $$nc($$nc($AquaComboBoxUI::access$2500(this->this$0))->getModel())->getSize() - 1) {
		$$nc($AquaComboBoxUI::access$2600(this->this$0))->setSelectedIndex(si + 1);
		$$nc($AquaComboBoxUI::access$2700(this->this$0))->ensureIndexIsVisible(si + 1);
	}
	$$nc($AquaComboBoxUI::access$2800(this->this$0))->repaint();
}

AquaComboBoxUI$3::AquaComboBoxUI$3() {
}

$Class* AquaComboBoxUI$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(AquaComboBoxUI$3, init$, void, $AquaComboBoxUI*)},
		{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$3, performComboBoxAction, void, $AquaComboBoxUI*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$3", nullptr, nullptr, 0},
		{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$3",
		"com.apple.laf.AquaComboBoxUI$ComboBoxAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxUI"
	};
	$loadClass(AquaComboBoxUI$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxUI$3));
	});
	return class$;
}

$Class* AquaComboBoxUI$3::class$ = nullptr;

		} // laf
	} // apple
} // com