#include <com/apple/laf/AquaMenuItemUI$1.h>
#include <com/apple/laf/AquaMenuItemUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $AquaMenuItemUI = ::com::apple::laf::AquaMenuItemUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaMenuItemUI$1::init$($AquaMenuItemUI* this$0, $Dimension* val$size) {
	$set(this, this$0, this$0);
	$set(this, val$size, val$size);
}

void AquaMenuItemUI$1::paintSelected(bool selected) {
	$useLocalObjectStack();
	$$nc($AquaMenuItemUI::access$000(this->this$0))->setArmed(selected);
	$$nc($AquaMenuItemUI::access$100(this->this$0))->paintImmediately(0, 0, $nc(this->val$size)->width, $nc(this->val$size)->height);
}

AquaMenuItemUI$1::AquaMenuItemUI$1() {
}

$Class* AquaMenuItemUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuItemUI$1, this$0)},
		{"val$size", "Ljava/awt/Dimension;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuItemUI$1, val$size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaMenuItemUI;Ljava/awt/Dimension;)V", "()V", 0, $method(AquaMenuItemUI$1, init$, void, $AquaMenuItemUI*, $Dimension*)},
		{"paintSelected", "(Z)V", nullptr, $PUBLIC, $virtualMethod(AquaMenuItemUI$1, paintSelected, void, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaMenuItemUI",
		"doClick",
		"(Ljavax/swing/MenuSelectionManager;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMenuItemUI$1", nullptr, nullptr, 0},
		{"com.apple.laf.AquaUtils$Selectable", "com.apple.laf.AquaUtils", "Selectable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaMenuItemUI$1",
		"java.lang.Object",
		"com.apple.laf.AquaUtils$Selectable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaMenuItemUI"
	};
	$loadClass(AquaMenuItemUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMenuItemUI$1);
	});
	return class$;
}

$Class* AquaMenuItemUI$1::class$ = nullptr;

		} // laf
	} // apple
} // com