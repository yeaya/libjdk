#include <com/apple/laf/AquaTabbedPaneUI$2.h>
#include <com/apple/laf/AquaTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $AquaTabbedPaneUI = ::com::apple::laf::AquaTabbedPaneUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTabbedPaneUI$2::init$($AquaTabbedPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTabbedPaneUI$2::stateChanged($ChangeEvent* e) {
	if (!this->this$0->isTabVisible($nc(this->this$0->tabPane)->getSelectedIndex())) {
		this->this$0->popupSelectionChanged = true;
	}
	$nc(this->this$0->tabPane)->revalidate();
	$nc(this->this$0->tabPane)->repaint();
}

AquaTabbedPaneUI$2::AquaTabbedPaneUI$2() {
}

$Class* AquaTabbedPaneUI$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneUI$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneUI;)V", nullptr, 0, $method(AquaTabbedPaneUI$2, init$, void, $AquaTabbedPaneUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTabbedPaneUI$2, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaTabbedPaneUI",
		"createChangeListener",
		"()Ljavax/swing/event/ChangeListener;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneUI$2",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneUI"
	};
	$loadClass(AquaTabbedPaneUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTabbedPaneUI$2);
	});
	return class$;
}

$Class* AquaTabbedPaneUI$2::class$ = nullptr;

		} // laf
	} // apple
} // com