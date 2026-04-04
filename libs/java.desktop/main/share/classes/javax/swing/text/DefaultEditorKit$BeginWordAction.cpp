#include <javax/swing/text/DefaultEditorKit$BeginWordAction.h>
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

void DefaultEditorKit$BeginWordAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$BeginWordAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		try {
			int32_t offs = target->getCaretPosition();
			int32_t begOffs = $Utilities::getWordStart(target, offs);
			if (this->select) {
				target->moveCaretPosition(begOffs);
			} else {
				target->setCaretPosition(begOffs);
			}
		} catch ($BadLocationException& bl) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$BeginWordAction::DefaultEditorKit$BeginWordAction() {
}

$Class* DefaultEditorKit$BeginWordAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$BeginWordAction, select)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(DefaultEditorKit$BeginWordAction, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$BeginWordAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$BeginWordAction", "javax.swing.text.DefaultEditorKit", "BeginWordAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$BeginWordAction",
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
	$loadClass(DefaultEditorKit$BeginWordAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$BeginWordAction));
	});
	return class$;
}

$Class* DefaultEditorKit$BeginWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax