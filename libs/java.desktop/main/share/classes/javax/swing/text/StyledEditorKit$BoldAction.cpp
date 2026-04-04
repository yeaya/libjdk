#include <javax/swing/text/StyledEditorKit$BoldAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit$StyledTextAction.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$BoldAction::init$() {
	$StyledEditorKit$StyledTextAction::init$("font-bold"_s);
}

void StyledEditorKit$BoldAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($StyledEditorKit, kit, getStyledEditorKit(editor));
		$var($MutableAttributeSet, attr, $nc(kit)->getInputAttributes());
		bool bold = ($StyleConstants::isBold(attr)) ? false : true;
		$var($SimpleAttributeSet, sas, $new($SimpleAttributeSet));
		$StyleConstants::setBold(sas, bold);
		setCharacterAttributes(editor, sas, false);
	}
}

StyledEditorKit$BoldAction::StyledEditorKit$BoldAction() {
}

$Class* StyledEditorKit$BoldAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StyledEditorKit$BoldAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$BoldAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$BoldAction", "javax.swing.text.StyledEditorKit", "BoldAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit$BoldAction",
		"javax.swing.text.StyledEditorKit$StyledTextAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.StyledEditorKit"
	};
	$loadClass(StyledEditorKit$BoldAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$BoldAction));
	});
	return class$;
}

$Class* StyledEditorKit$BoldAction::class$ = nullptr;

		} // text
	} // swing
} // javax