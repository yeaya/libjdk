#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <jcpp.h>

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;

namespace com {
	namespace apple {
		namespace laf {

$String* AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::toString() {
	 return this->$BasicArrowButton::toString();
}

int32_t AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::hashCode() {
	 return this->$BasicArrowButton::hashCode();
}

bool AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::equals(Object$* arg0) {
	 return this->$BasicArrowButton::equals(arg0);
}

$Object* AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::clone() {
	 return this->$BasicArrowButton::clone();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::finalize() {
	this->$BasicArrowButton::finalize();
}

void AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::init$($AquaTabbedPaneCopyFromBasicUI* this$0, int32_t direction) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($Color, var$0, $UIManager::getColor("TabbedPane.selected"_s));
	$var($Color, var$1, $UIManager::getColor("TabbedPane.shadow"_s));
	$var($Color, var$2, $UIManager::getColor("TabbedPane.darkShadow"_s));
	$BasicArrowButton::init$(direction, var$0, var$1, var$2, $($UIManager::getColor("TabbedPane.highlight"_s)));
}

AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;I)V", nullptr, $PUBLIC, $method(AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton, init$, void, $AquaTabbedPaneCopyFromBasicUI*, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "ScrollableTabButton", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton",
		"javax.swing.plaf.basic.BasicArrowButton",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
	};
	$loadClass(AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton));
	});
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$ScrollableTabButton::class$ = nullptr;

		} // laf
	} // apple
} // com