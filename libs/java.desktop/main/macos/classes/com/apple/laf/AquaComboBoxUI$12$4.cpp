#include <com/apple/laf/AquaComboBoxUI$12$4.h>
#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Color.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$12$4::init$($AquaComboBoxUI$12* this$0, $String* name) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator$Property::init$(name);
}

void AquaComboBoxUI$12$4::applyProperty($AquaComboBoxUI* target, Object$* value) {
	$useLocalObjectStack();
	$var($Color, color, $cast($Color, value));
	if ($AquaComboBoxUI::access$7700(target) != nullptr) {
		$$nc($AquaComboBoxUI::access$7800(target))->setForeground(color);
	}
	if ($AquaComboBoxUI::access$7900(target) != nullptr) {
		$$nc($AquaComboBoxUI::access$8000(target))->setForeground(color);
	}
}

void AquaComboBoxUI$12$4::applyProperty(Object$* target, Object$* value) {
	this->applyProperty($cast($AquaComboBoxUI, target), value);
}

AquaComboBoxUI$12$4::AquaComboBoxUI$12$4() {
}

$Class* AquaComboBoxUI$12$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;Ljava/lang/String;)V", nullptr, 0, $method(AquaComboBoxUI$12$4, init$, void, $AquaComboBoxUI$12*, $String*)},
		{"applyProperty", "(Lcom/apple/laf/AquaComboBoxUI;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(AquaComboBoxUI$12$4, applyProperty, void, $AquaComboBoxUI*, Object$*)},
		{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AquaComboBoxUI$12$4, applyProperty, void, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI$12",
		"getInstance",
		"()Lcom/apple/laf/ClientPropertyApplicator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
		{"com.apple.laf.AquaComboBoxUI$12$4", nullptr, nullptr, 0},
		{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$12$4",
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
	$loadClass(AquaComboBoxUI$12$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaComboBoxUI$12$4);
	});
	return class$;
}

$Class* AquaComboBoxUI$12$4::class$ = nullptr;

		} // laf
	} // apple
} // com