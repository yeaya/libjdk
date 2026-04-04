#include <javax/swing/text/StyledEditorKit$StyledInsertBreakAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$StyledInsertBreakAction::init$() {
	$StyledEditorKit$StyledTextAction::init$("insert-break"_s);
}

void StyledEditorKit$StyledInsertBreakAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, target, getEditor(e));
	if (target != nullptr) {
		bool var$0 = !target->isEditable();
		if (var$0 || (!target->isEnabled())) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
			return;
		}
		$var($StyledEditorKit, sek, getStyledEditorKit(target));
		if (this->tempSet != nullptr) {
			this->tempSet->removeAttributes(this->tempSet);
		} else {
			$set(this, tempSet, $new($SimpleAttributeSet));
		}
		$nc(this->tempSet)->addAttributes($($nc(sek)->getInputAttributes()));
		target->replaceSelection("\n"_s);
		$var($MutableAttributeSet, ia, sek->getInputAttributes());
		$nc(ia)->removeAttributes(ia);
		ia->addAttributes(this->tempSet);
		$nc(this->tempSet)->removeAttributes(this->tempSet);
	} else {
		$var($JTextComponent, text, getTextComponent(e));
		if (text != nullptr) {
			bool var$1 = !text->isEditable();
			if (var$1 || (!text->isEnabled())) {
				$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
				return;
			}
			text->replaceSelection("\n"_s);
		}
	}
}

StyledEditorKit$StyledInsertBreakAction::StyledEditorKit$StyledInsertBreakAction() {
}

$Class* StyledEditorKit$StyledInsertBreakAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tempSet", "Ljavax/swing/text/SimpleAttributeSet;", nullptr, $PRIVATE, $field(StyledEditorKit$StyledInsertBreakAction, tempSet)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StyledEditorKit$StyledInsertBreakAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$StyledInsertBreakAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$StyledInsertBreakAction", "javax.swing.text.StyledEditorKit", "StyledInsertBreakAction", $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.StyledEditorKit$StyledInsertBreakAction",
		"javax.swing.text.StyledEditorKit$StyledTextAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.StyledEditorKit"
	};
	$loadClass(StyledEditorKit$StyledInsertBreakAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$StyledInsertBreakAction));
	});
	return class$;
}

$Class* StyledEditorKit$StyledInsertBreakAction::class$ = nullptr;

		} // text
	} // swing
} // javax