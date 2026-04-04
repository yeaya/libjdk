#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$NoFocusButton.h>
#include <java/awt/Insets.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JButton = ::javax::swing::JButton;
using $UIManager = ::javax::swing::UIManager;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameTitlePane$NoFocusButton::init$($BasicInternalFrameTitlePane* this$0, $String* uiKey, $String* opacityKey) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JButton::init$();
	setFocusPainted(false);
	setMargin($$new($Insets, 0, 0, 0, 0));
	$set(this, uiKey, uiKey);
	$var($Object, opacity, $UIManager::get(opacityKey));
	if ($instanceOf($Boolean, opacity)) {
		setOpaque($cast($Boolean, opacity)->booleanValue());
	}
}

bool BasicInternalFrameTitlePane$NoFocusButton::isFocusTraversable() {
	return false;
}

void BasicInternalFrameTitlePane$NoFocusButton::requestFocus() {
}

$AccessibleContext* BasicInternalFrameTitlePane$NoFocusButton::getAccessibleContext() {
	$useLocalObjectStack();
	$var($AccessibleContext, ac, $JButton::getAccessibleContext());
	if (this->uiKey != nullptr) {
		$nc(ac)->setAccessibleName($($UIManager::getString(this->uiKey)));
		$set(this, uiKey, nullptr);
	}
	return ac;
}

BasicInternalFrameTitlePane$NoFocusButton::BasicInternalFrameTitlePane$NoFocusButton() {
}

$Class* BasicInternalFrameTitlePane$NoFocusButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$NoFocusButton, this$0)},
		{"uiKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicInternalFrameTitlePane$NoFocusButton, uiKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$NoFocusButton, init$, void, $BasicInternalFrameTitlePane*, $String*, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$NoFocusButton, getAccessibleContext, $AccessibleContext*)},
		{"isFocusTraversable", "()Z", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$NoFocusButton, isFocusTraversable, bool)},
		{"requestFocus", "()V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$NoFocusButton, requestFocus, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "NoFocusButton", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$NoFocusButton",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
	};
	$loadClass(BasicInternalFrameTitlePane$NoFocusButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicInternalFrameTitlePane$NoFocusButton));
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$NoFocusButton::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax