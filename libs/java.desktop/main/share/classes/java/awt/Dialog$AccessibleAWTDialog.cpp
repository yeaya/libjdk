#include <java/awt/Dialog$AccessibleAWTDialog.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef ACTIVE
#undef DIALOG
#undef MODAL
#undef RESIZABLE

using $Dialog = ::java::awt::Dialog;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

void Dialog$AccessibleAWTDialog::init$($Dialog* this$0) {
	$set(this, this$0, this$0);
	$Window$AccessibleAWTWindow::init$(this$0);
}

$AccessibleRole* Dialog$AccessibleAWTDialog::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::DIALOG;
}

$AccessibleStateSet* Dialog$AccessibleAWTDialog::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $Window$AccessibleAWTWindow::getAccessibleStateSet());
	if (this->this$0->getFocusOwner() != nullptr) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::ACTIVE);
	}
	if (this->this$0->isModal()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::MODAL);
	}
	if (this->this$0->isResizable()) {
		$init($AccessibleState);
		$nc(states)->add($AccessibleState::RESIZABLE);
	}
	return states;
}

Dialog$AccessibleAWTDialog::Dialog$AccessibleAWTDialog() {
}

$Class* Dialog$AccessibleAWTDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Dialog;", nullptr, $FINAL | $SYNTHETIC, $field(Dialog$AccessibleAWTDialog, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Dialog$AccessibleAWTDialog, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Dialog;)V", nullptr, $PROTECTED, $method(Dialog$AccessibleAWTDialog, init$, void, $Dialog*)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Dialog$AccessibleAWTDialog, getAccessibleRole, $AccessibleRole*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(Dialog$AccessibleAWTDialog, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Dialog$AccessibleAWTDialog", "java.awt.Dialog", "AccessibleAWTDialog", $PROTECTED},
		{"java.awt.Window$AccessibleAWTWindow", "java.awt.Window", "AccessibleAWTWindow", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Dialog$AccessibleAWTDialog",
		"java.awt.Window$AccessibleAWTWindow",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Dialog"
	};
	$loadClass(Dialog$AccessibleAWTDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Dialog$AccessibleAWTDialog));
	});
	return class$;
}

$Class* Dialog$AccessibleAWTDialog::class$ = nullptr;

	} // awt
} // java