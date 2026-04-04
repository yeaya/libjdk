#include <javax/swing/text/StyledEditorKit$ForegroundAction.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $JEditorPane = ::javax::swing::JEditorPane;
using $UIManager = ::javax::swing::UIManager;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$ForegroundAction::init$($String* nm, $Color* fg) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	$set(this, fg, fg);
}

void StyledEditorKit$ForegroundAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($Color, fg, this->fg);
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				$assign(fg, $Color::decode(s));
			} catch ($NumberFormatException& nfe) {
			}
		}
		if (fg != nullptr) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setForeground(attr, fg);
			setCharacterAttributes(editor, attr, false);
		} else {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$ForegroundAction::StyledEditorKit$ForegroundAction() {
}

$Class* StyledEditorKit$ForegroundAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fg", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(StyledEditorKit$ForegroundAction, fg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(StyledEditorKit$ForegroundAction, init$, void, $String*, $Color*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$ForegroundAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$ForegroundAction", "javax.swing.text.StyledEditorKit", "ForegroundAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit$ForegroundAction",
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
	$loadClass(StyledEditorKit$ForegroundAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$ForegroundAction));
	});
	return class$;
}

$Class* StyledEditorKit$ForegroundAction::class$ = nullptr;

		} // text
	} // swing
} // javax