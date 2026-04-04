#include <com/apple/laf/AquaKeyBindings$AquaMultilineAction.h>
#include <com/apple/laf/AquaKeyBindings.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace com {
	namespace apple {
		namespace laf {

void AquaKeyBindings$AquaMultilineAction::init$($String* actionName, $String* targetActionName, $String* proxyActionName) {
	$TextAction::init$(actionName);
	$set(this, targetActionName, targetActionName);
	$set(this, proxyActionName, proxyActionName);
}

void AquaKeyBindings$AquaMultilineAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, c, getTextComponent(e));
	$var($ActionMap, actionMap, $nc(c)->getActionMap());
	$var($Action, targetAction, $nc(actionMap)->get(this->targetActionName));
	int32_t startPosition = c->getCaretPosition();
	$nc(targetAction)->actionPerformed(e);
	if (startPosition != c->getCaretPosition()) {
		return;
	}
	$var($Action, proxyAction, actionMap->get(this->proxyActionName));
	$nc(proxyAction)->actionPerformed(e);
}

AquaKeyBindings$AquaMultilineAction::AquaKeyBindings$AquaMultilineAction() {
}

$Class* AquaKeyBindings$AquaMultilineAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targetActionName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$AquaMultilineAction, targetActionName)},
		{"proxyActionName", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaKeyBindings$AquaMultilineAction, proxyActionName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AquaKeyBindings$AquaMultilineAction, init$, void, $String*, $String*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaKeyBindings$AquaMultilineAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaKeyBindings$AquaMultilineAction", "com.apple.laf.AquaKeyBindings", "AquaMultilineAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaKeyBindings$AquaMultilineAction",
		"javax.swing.text.TextAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaKeyBindings"
	};
	$loadClass(AquaKeyBindings$AquaMultilineAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaKeyBindings$AquaMultilineAction));
	});
	return class$;
}

$Class* AquaKeyBindings$AquaMultilineAction::class$ = nullptr;

		} // laf
	} // apple
} // com