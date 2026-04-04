#include <com/apple/laf/AquaComboBoxUI$12$7.h>
#include <com/apple/laf/AquaComboBoxUI$12.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaComboBoxUI$12 = ::com::apple::laf::AquaComboBoxUI$12;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaComboBoxUI$12$7::init$($AquaComboBoxUI$12* this$0, $ClientPropertyApplicator$PropertyArray* propertyList) {
	$set(this, this$0, this$0);
	$ClientPropertyApplicator::init$(propertyList);
}

$AquaComboBoxUI* AquaComboBoxUI$12$7::convertJComponentToTarget($JComboBox* combo) {
	$var($ComboBoxUI, comboUI, $cast($ComboBoxUI, $nc(combo)->getUI()));
	if ($instanceOf($AquaComboBoxUI, comboUI)) {
		return $cast($AquaComboBoxUI, comboUI);
	}
	return nullptr;
}

$Object* AquaComboBoxUI$12$7::convertJComponentToTarget($JComponent* combo) {
	return $of(this->convertJComponentToTarget($cast($JComboBox, combo)));
}

AquaComboBoxUI$12$7::AquaComboBoxUI$12$7() {
}

$Class* AquaComboBoxUI$12$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaComboBoxUI$12;", nullptr, $FINAL | $SYNTHETIC, $field(AquaComboBoxUI$12$7, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaComboBoxUI$12;[Lcom/apple/laf/ClientPropertyApplicator$Property;)V", nullptr, $TRANSIENT, $method(AquaComboBoxUI$12$7, init$, void, $AquaComboBoxUI$12*, $ClientPropertyApplicator$PropertyArray*)},
		{"convertJComponentToTarget", "(Ljavax/swing/JComboBox;)Lcom/apple/laf/AquaComboBoxUI;", "(Ljavax/swing/JComboBox<*>;)Lcom/apple/laf/AquaComboBoxUI;", $PUBLIC, $virtualMethod(AquaComboBoxUI$12$7, convertJComponentToTarget, $AquaComboBoxUI*, $JComboBox*)},
		{"convertJComponentToTarget", "(Ljavax/swing/JComponent;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(AquaComboBoxUI$12$7, convertJComponentToTarget, $Object*, $JComponent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaComboBoxUI$12",
		"getInstance",
		"()Lcom/apple/laf/ClientPropertyApplicator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaComboBoxUI$12", nullptr, nullptr, 0},
		{"com.apple.laf.AquaComboBoxUI$12$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaComboBoxUI$12$7",
		"com.apple.laf.ClientPropertyApplicator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/JComboBox<*>;Lcom/apple/laf/AquaComboBoxUI;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaComboBoxUI"
	};
	$loadClass(AquaComboBoxUI$12$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaComboBoxUI$12$7);
	});
	return class$;
}

$Class* AquaComboBoxUI$12$7::class$ = nullptr;

		} // laf
	} // apple
} // com