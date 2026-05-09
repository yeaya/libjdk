#include <java/awt/Choice$AccessibleAWTChoice.h>
#include <java/awt/Choice.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleRole.h>
#include <jcpp.h>

#undef COMBO_BOX

using $Choice = ::java::awt::Choice;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;

namespace java {
	namespace awt {

int32_t Choice$AccessibleAWTChoice::hashCode() {
	return this->$Component$AccessibleAWTComponent::hashCode();
}

bool Choice$AccessibleAWTChoice::equals(Object$* arg0) {
	return this->$Component$AccessibleAWTComponent::equals(arg0);
}

$Object* Choice$AccessibleAWTChoice::clone() {
	return this->$Component$AccessibleAWTComponent::clone();
}

$String* Choice$AccessibleAWTChoice::toString() {
	return this->$Component$AccessibleAWTComponent::toString();
}

void Choice$AccessibleAWTChoice::finalize() {
	this->$Component$AccessibleAWTComponent::finalize();
}

void Choice$AccessibleAWTChoice::init$($Choice* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
}

$AccessibleAction* Choice$AccessibleAWTChoice::getAccessibleAction() {
	return this;
}

$AccessibleRole* Choice$AccessibleAWTChoice::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::COMBO_BOX;
}

int32_t Choice$AccessibleAWTChoice::getAccessibleActionCount() {
	return 0;
}

$String* Choice$AccessibleAWTChoice::getAccessibleActionDescription(int32_t i) {
	return nullptr;
}

bool Choice$AccessibleAWTChoice::doAccessibleAction(int32_t i) {
	return false;
}

Choice$AccessibleAWTChoice::Choice$AccessibleAWTChoice() {
}

$Class* Choice$AccessibleAWTChoice::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Choice;", nullptr, $FINAL | $SYNTHETIC, $field(Choice$AccessibleAWTChoice, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Choice$AccessibleAWTChoice, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Choice;)V", nullptr, $PUBLIC, $method(Choice$AccessibleAWTChoice, init$, void, $Choice*)},
		{"doAccessibleAction", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Choice$AccessibleAWTChoice, doAccessibleAction, bool, int32_t)},
		{"getAccessibleAction", "()Ljavax/accessibility/AccessibleAction;", nullptr, $PUBLIC, $virtualMethod(Choice$AccessibleAWTChoice, getAccessibleAction, $AccessibleAction*)},
		{"getAccessibleActionCount", "()I", nullptr, $PUBLIC, $virtualMethod(Choice$AccessibleAWTChoice, getAccessibleActionCount, int32_t)},
		{"getAccessibleActionDescription", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Choice$AccessibleAWTChoice, getAccessibleActionDescription, $String*, int32_t)},
		{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC, $virtualMethod(Choice$AccessibleAWTChoice, getAccessibleRole, $AccessibleRole*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Choice$AccessibleAWTChoice", "java.awt.Choice", "AccessibleAWTChoice", $PROTECTED},
		{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Choice$AccessibleAWTChoice",
		"java.awt.Component$AccessibleAWTComponent",
		"javax.accessibility.AccessibleAction",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Choice"
	};
	$loadClass(Choice$AccessibleAWTChoice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Choice$AccessibleAWTChoice));
	});
	return class$;
}

$Class* Choice$AccessibleAWTChoice::class$ = nullptr;

	} // awt
} // java