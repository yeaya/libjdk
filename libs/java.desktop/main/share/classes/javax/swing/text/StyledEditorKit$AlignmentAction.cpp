#include <javax/swing/text/StyledEditorKit$AlignmentAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JEditorPane.h>
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
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$AlignmentAction::init$($String* nm, int32_t a) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	this->a = a;
}

void StyledEditorKit$AlignmentAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		int32_t a = this->a;
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			try {
				a = $Integer::parseInt(s, 10);
			} catch ($NumberFormatException& nfe) {
			}
		}
		$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
		$StyleConstants::setAlignment(attr, a);
		setParagraphAttributes(editor, attr, false);
	}
}

StyledEditorKit$AlignmentAction::StyledEditorKit$AlignmentAction() {
}

$Class* StyledEditorKit$AlignmentAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"a", "I", nullptr, $PRIVATE, $field(StyledEditorKit$AlignmentAction, a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(StyledEditorKit$AlignmentAction, init$, void, $String*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$AlignmentAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$AlignmentAction", "javax.swing.text.StyledEditorKit", "AlignmentAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit$AlignmentAction",
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
	$loadClass(StyledEditorKit$AlignmentAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$AlignmentAction));
	});
	return class$;
}

$Class* StyledEditorKit$AlignmentAction::class$ = nullptr;

		} // text
	} // swing
} // javax