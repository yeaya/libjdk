#include <com/apple/laf/AquaComboBoxUI$6.h>
#include <com/apple/laf/AquaComboBoxUI$ComboBoxAction.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <javax/swing/Action.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
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

void AquaComboBoxUI$6::init$($AquaComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$AquaComboBoxUI$ComboBoxAction::init$(this$0);
}

void AquaComboBoxUI$6::performComboBoxAction($AquaComboBoxUI* ui) {
	$useLocalObjectStack();
	int32_t size = $$nc($$nc($AquaComboBoxUI::access$3500(this->this$0))->getModel())->getSize();
	$$nc($AquaComboBoxUI::access$3600(this->this$0))->setSelectedIndex(size - 1);
	$$nc($AquaComboBoxUI::access$3700(this->this$0))->ensureIndexIsVisible(size - 1);
}

AquaComboBoxUI$6::AquaComboBoxUI$6() {
}

$Class* AquaComboBoxUI$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$6, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $method(AquaComboBoxUI$6, init$, void, $AquaComboBoxUI*)},
		{"performComboBoxAction", "(Lcom/apple/laf/AquaComboBoxUI;)V", nullptr, 0, $virtualMethod(AquaComboBoxUI$6, performComboBoxAction, void, $AquaComboBoxUI*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$6", nullptr, nullptr, 0},
		{"com.apple.laf.AquaComboBoxUI$ComboBoxAction", "com.apple.laf.AquaComboBoxUI", "ComboBoxAction", $PRIVATE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$6",
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
	$loadClass(AquaComboBoxUI$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaComboBoxUI$6));
	});
	return class$;
}

$Class* AquaComboBoxUI$6::class$ = nullptr;

		} // laf
	} // apple
} // com