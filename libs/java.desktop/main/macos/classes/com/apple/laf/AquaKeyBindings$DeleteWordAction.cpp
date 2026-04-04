#include <com/apple/laf/AquaKeyBindings$DeleteWordAction.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace com {
	namespace apple {
		namespace laf {

void AquaKeyBindings$DeleteWordAction::init$($String* name) {
	$TextAction::init$(name);
}

void AquaKeyBindings$DeleteWordAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (e == nullptr) {
		return;
	}
	$var($JTextComponent, target, getTextComponent(e));
	if (target == nullptr) {
		return;
	}
	bool var$0 = !$nc(target)->isEditable();
	if (var$0 || !target->isEnabled()) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
		return;
	}
	try {
		int32_t start = target->getSelectionStart();
		$var($Element, line, $Utilities::getParagraphElement(target, start));
		int32_t end = getEnd(target, line, start);
		int32_t offs = $Math::min(start, end);
		int32_t len = $Math::abs(end - start);
		if (offs >= 0) {
			$$nc(target->getDocument())->remove(offs, len);
			return;
		}
	} catch ($BadLocationException& ignore) {
	}
	$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
}

AquaKeyBindings$DeleteWordAction::AquaKeyBindings$DeleteWordAction() {
}

$Class* AquaKeyBindings$DeleteWordAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AquaKeyBindings$DeleteWordAction, init$, void, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaKeyBindings$DeleteWordAction, actionPerformed, void, $ActionEvent*)},
		{"getEnd", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Element;I)I", nullptr, $ABSTRACT, $virtualMethod(AquaKeyBindings$DeleteWordAction, getEnd, int32_t, $JTextComponent*, $Element*, int32_t), "javax.swing.text.BadLocationException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaKeyBindings$DeleteWordAction", "com.apple.laf.AquaKeyBindings", "DeleteWordAction", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaKeyBindings$DeleteWordAction",
		"javax.swing.text.TextAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaKeyBindings"
	};
	$loadClass(AquaKeyBindings$DeleteWordAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaKeyBindings$DeleteWordAction));
	});
	return class$;
}

$Class* AquaKeyBindings$DeleteWordAction::class$ = nullptr;

		} // laf
	} // apple
} // com