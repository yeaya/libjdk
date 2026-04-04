#include <javax/swing/text/DefaultEditorKit$PreviousWordAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Element.h>
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
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$PreviousWordAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$PreviousWordAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t offs = target->getCaretPosition();
		bool failed = false;
		try {
			$var($Element, curPara, $Utilities::getParagraphElement(target, offs));
			offs = $Utilities::getPreviousWord(target, offs);
			if (offs < $nc(curPara)->getStartOffset()) {
				offs = $$nc($Utilities::getParagraphElement(target, offs))->getEndOffset() - 1;
			}
		} catch ($BadLocationException& bl) {
			if (offs != 0) {
				offs = 0;
			} else {
				failed = true;
			}
		}
		if (!failed) {
			if (this->select) {
				target->moveCaretPosition(offs);
			} else {
				target->setCaretPosition(offs);
			}
		} else {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$PreviousWordAction::DefaultEditorKit$PreviousWordAction() {
}

$Class* DefaultEditorKit$PreviousWordAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$PreviousWordAction, select)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(DefaultEditorKit$PreviousWordAction, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$PreviousWordAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$PreviousWordAction", "javax.swing.text.DefaultEditorKit", "PreviousWordAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$PreviousWordAction",
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
	$loadClass(DefaultEditorKit$PreviousWordAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$PreviousWordAction));
	});
	return class$;
}

$Class* DefaultEditorKit$PreviousWordAction::class$ = nullptr;

		} // text
	} // swing
} // javax