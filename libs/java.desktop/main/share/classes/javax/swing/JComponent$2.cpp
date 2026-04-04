#include <javax/swing/JComponent$2.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <javax/swing/InputVerifier.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef INPUT_VERIFIER_SOURCE_KEY

using $Component = ::java::awt::Component;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputVerifier = ::javax::swing::InputVerifier;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

void JComponent$2::init$() {
}

bool JComponent$2::acceptRequestFocus($Component* from, $Component* to, bool temporary, bool focusedWindowChangeAllowed, $FocusEvent$Cause* cause) {
	$useLocalObjectStack();
	if ((to == nullptr) || !($instanceOf($JComponent, to))) {
		return true;
	}
	if ((from == nullptr) || !($instanceOf($JComponent, from))) {
		return true;
	}
	$var($JComponent, target, $cast($JComponent, to));
	if (!$nc(target)->getVerifyInputWhenFocusTarget()) {
		return true;
	}
	$var($JComponent, jFocusOwner, $cast($JComponent, from));
	$var($InputVerifier, iv, $nc(jFocusOwner)->getInputVerifier());
	if (iv == nullptr) {
		return true;
	} else {
		$var($Object, currentSource, $SwingUtilities::appContextGet($JComponent::INPUT_VERIFIER_SOURCE_KEY));
		if ($equals(currentSource, jFocusOwner)) {
			return true;
		}
		$SwingUtilities::appContextPut($JComponent::INPUT_VERIFIER_SOURCE_KEY, jFocusOwner);
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = iv->shouldYieldFocus(jFocusOwner, target);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (currentSource != nullptr) {
				$SwingUtilities::appContextPut($JComponent::INPUT_VERIFIER_SOURCE_KEY, currentSource);
			} else {
				$SwingUtilities::appContextRemove($JComponent::INPUT_VERIFIER_SOURCE_KEY);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

JComponent$2::JComponent$2() {
}

$Class* JComponent$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JComponent$2, init$, void)},
		{"acceptRequestFocus", "(Ljava/awt/Component;Ljava/awt/Component;ZZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC, $virtualMethod(JComponent$2, acceptRequestFocus, bool, $Component*, $Component*, bool, bool, $FocusEvent$Cause*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JComponent$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JComponent$2",
		"java.lang.Object",
		"sun.awt.RequestFocusController",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JComponent"
	};
	$loadClass(JComponent$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComponent$2);
	});
	return class$;
}

$Class* JComponent$2::class$ = nullptr;

	} // swing
} // javax