#include <javax/swing/text/StyledEditorKit$FontSizeAction.h>
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

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
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

void StyledEditorKit$FontSizeAction::init$($String* nm, int32_t size) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	this->size = size;
}

void StyledEditorKit$FontSizeAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		int32_t size = this->size;
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				size = $Integer::parseInt(s, 10);
			} catch ($NumberFormatException& nfe) {
			}
		}
		if (size != 0) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setFontSize(attr, size);
			setCharacterAttributes(editor, attr, false);
		} else {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$FontSizeAction::StyledEditorKit$FontSizeAction() {
}

$Class* StyledEditorKit$FontSizeAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"size", "I", nullptr, $PRIVATE, $field(StyledEditorKit$FontSizeAction, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(StyledEditorKit$FontSizeAction, init$, void, $String*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$FontSizeAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$FontSizeAction", "javax.swing.text.StyledEditorKit", "FontSizeAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit$FontSizeAction",
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
	$loadClass(StyledEditorKit$FontSizeAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$FontSizeAction));
	});
	return class$;
}

$Class* StyledEditorKit$FontSizeAction::class$ = nullptr;

		} // text
	} // swing
} // javax