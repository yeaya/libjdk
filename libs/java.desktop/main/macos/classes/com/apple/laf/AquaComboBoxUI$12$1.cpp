#include <com/apple/laf/AquaComboBoxUI$12$1.h>
#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Component.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

#undef FALSE

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$12$1::init$($AquaComboBoxUI$12* this$0, $String* name) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator$Property::init$(name);
}

void AquaComboBoxUI$12$1::applyProperty($AquaComboBoxUI* target, Object$* value) {
	$useLocalObjectStack();
	if ($nc($Boolean::FALSE)->equals(value)) {
		if ($AquaComboBoxUI::access$6700(target) != nullptr) {
			$$nc($AquaComboBoxUI::access$6800(target))->hidePopup();
		}
	}
	if ($AquaComboBoxUI::access$6900(target) != nullptr) {
		$$nc($AquaComboBoxUI::access$7000(target))->repaint();
	}
}

void AquaComboBoxUI$12$1::applyProperty(Object$* target, Object$* value) {
	this->applyProperty($cast($AquaComboBoxUI, target), value);
}

AquaComboBoxUI$12$1::AquaComboBoxUI$12$1() {
}

$Class* AquaComboBoxUI$12$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;Ljava/lang/String;)V", nullptr, 0, $method(AquaComboBoxUI$12$1, init$, void, $AquaComboBoxUI$12*, $String*)},
		{"applyProperty", "(Lcom/apple/laf/AquaComboBoxUI;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$12$1, applyProperty, void, $AquaComboBoxUI*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AquaComboBoxUI$12$1, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI$12",
		"getInstance",
		"()Lcom/apple/laf/ClientPropertyApplicator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
		{"com.apple.laf.AquaComboBoxUI$12$1", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$12$1",
		"com.apple.laf.ClientPropertyApplicator$Property",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/ClientPropertyApplicator$Property<Lcom/apple/laf/AquaComboBoxUI;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxUI"
	};
	$loadClass(AquaComboBoxUI$12$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaComboBoxUI$12$1);
	});
	return class$;
}

$Class* AquaComboBoxUI$12$1::class$ = nullptr;

		} // laf
	} // apple
} // com