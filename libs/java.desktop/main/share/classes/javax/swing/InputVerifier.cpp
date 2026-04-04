#include <javax/swing/InputVerifier.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

void InputVerifier::init$() {
}

bool InputVerifier::shouldYieldFocus($JComponent* input) {
	return verify(input);
}

bool InputVerifier::verifyTarget($JComponent* target) {
	return true;
}

bool InputVerifier::shouldYieldFocus($JComponent* source, $JComponent* target) {
	bool var$0 = shouldYieldFocus(source);
	return var$0 && verifyTarget(target);
}

InputVerifier::InputVerifier() {
}

$Class* InputVerifier::load$($String* name, bool initialize) {
	$NamedAttribute shouldYieldFocusmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute shouldYieldFocusmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", shouldYieldFocusmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(InputVerifier, init$, void)},
		{"shouldYieldFocus", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(InputVerifier, shouldYieldFocus, bool, $JComponent*), nullptr, nullptr, shouldYieldFocusmethodAnnotations$$},
		{"shouldYieldFocus", "(Ljavax/swing/JComponent;Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC, $virtualMethod(InputVerifier, shouldYieldFocus, bool, $JComponent*, $JComponent*)},
		{"verify", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InputVerifier, verify, bool, $JComponent*)},
		{"verifyTarget", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC, $virtualMethod(InputVerifier, verifyTarget, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.InputVerifier",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InputVerifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InputVerifier);
	});
	return class$;
}

$Class* InputVerifier::class$ = nullptr;

	} // swing
} // javax