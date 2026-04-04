#include <java/awt/TextField$AccessibleAWTTextField.h>
#include <java/awt/TextComponent$AccessibleAWTTextComponent.h>
#include <java/awt/TextField.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <jcpp.h>

#undef SINGLE_LINE

using $TextComponent$AccessibleAWTTextComponent = ::java::awt::TextComponent$AccessibleAWTTextComponent;
using $TextField = ::java::awt::TextField;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;

namespace java {
	namespace awt {

void TextField$AccessibleAWTTextField::init$($TextField* this$0) {
	$set(this, this$0, this$0);
	$TextComponent$AccessibleAWTTextComponent::init$(this$0);
}

$AccessibleStateSet* TextField$AccessibleAWTTextField::getAccessibleStateSet() {
	$var($AccessibleStateSet, states, $TextComponent$AccessibleAWTTextComponent::getAccessibleStateSet());
	$init($AccessibleState);
	$nc(states)->add($AccessibleState::SINGLE_LINE);
	return states;
}

TextField$AccessibleAWTTextField::TextField$AccessibleAWTTextField() {
}

$Class* TextField$AccessibleAWTTextField::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/TextField;", nullptr, $FINAL | $SYNTHETIC, $field(TextField$AccessibleAWTTextField, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextField$AccessibleAWTTextField, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/TextField;)V", nullptr, $PROTECTED, $method(TextField$AccessibleAWTTextField, init$, void, $TextField*)},
		{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC, $virtualMethod(TextField$AccessibleAWTTextField, getAccessibleStateSet, $AccessibleStateSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.TextField$AccessibleAWTTextField", "java.awt.TextField", "AccessibleAWTTextField", $PROTECTED},
		{"java.awt.TextComponent$AccessibleAWTTextComponent", "java.awt.TextComponent", "AccessibleAWTTextComponent", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.TextField$AccessibleAWTTextField",
		"java.awt.TextComponent$AccessibleAWTTextComponent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.TextField"
	};
	$loadClass(TextField$AccessibleAWTTextField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextField$AccessibleAWTTextField));
	});
	return class$;
}

$Class* TextField$AccessibleAWTTextField::class$ = nullptr;

	} // awt
} // java