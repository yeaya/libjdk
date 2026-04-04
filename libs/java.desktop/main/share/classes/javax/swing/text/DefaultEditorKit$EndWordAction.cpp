#include <javax/swing/text/DefaultEditorKit$EndWordAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$EndWordAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$EndWordAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		try {
			int32_t offs = target->getCaretPosition();
			int32_t endOffs = $Utilities::getWordEnd(target, offs);
			if (this->select) {
				target->moveCaretPosition(endOffs);
			} else {
				target->setCaretPosition(endOffs);
			}
		} catch ($BadLocationException& bl) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$EndWordAction::DefaultEditorKit$EndWordAction() {
}

$Class* DefaultEditorKit$EndWordAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$EndWordAction, select)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(DefaultEditorKit$EndWordAction, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$EndWordAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$EndWordAction", "javax.swing.text.DefaultEditorKit", "EndWordAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$EndWordAction",
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
		"javax.swing.text.DefaultEditorKit"
	};
	$loadClass(DefaultEditorKit$EndWordAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$EndWordAction));
	});
	return class$;
}

$Class* DefaultEditorKit$EndWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax