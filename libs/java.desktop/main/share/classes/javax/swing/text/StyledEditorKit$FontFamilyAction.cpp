#include <javax/swing/text/StyledEditorKit$FontFamilyAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $JEditorPane = ::javax::swing::JEditorPane;
using $UIManager = ::javax::swing::UIManager;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit$StyledTextAction = ::javax::swing::text::StyledEditorKit$StyledTextAction;

namespace javax {
	namespace swing {
		namespace text {

void StyledEditorKit$FontFamilyAction::init$($String* nm, $String* family) {
	$StyledEditorKit$StyledTextAction::init$(nm);
	$set(this, family, family);
}

void StyledEditorKit$FontFamilyAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JEditorPane, editor, getEditor(e));
	if (editor != nullptr) {
		$var($String, family, this->family);
		if ((e != nullptr) && ($equals(e->getSource(), editor))) {
			$var($String, s, e->getActionCommand());
			if (s != nullptr) {
				$assign(family, s);
			}
		}
		if (family != nullptr) {
			$var($MutableAttributeSet, attr, $new($SimpleAttributeSet));
			$StyleConstants::setFontFamily(attr, family);
			setCharacterAttributes(editor, attr, false);
		} else {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(editor);
		}
	}
}

StyledEditorKit$FontFamilyAction::StyledEditorKit$FontFamilyAction() {
}

$Class* StyledEditorKit$FontFamilyAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"family", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StyledEditorKit$FontFamilyAction, family)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(StyledEditorKit$FontFamilyAction, init$, void, $String*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(StyledEditorKit$FontFamilyAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.StyledEditorKit$FontFamilyAction", "javax.swing.text.StyledEditorKit", "FontFamilyAction", $PUBLIC | $STATIC},
		{"javax.swing.text.StyledEditorKit$StyledTextAction", "javax.swing.text.StyledEditorKit", "StyledTextAction", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.StyledEditorKit$FontFamilyAction",
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
	$loadClass(StyledEditorKit$FontFamilyAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StyledEditorKit$FontFamilyAction));
	});
	return class$;
}

$Class* StyledEditorKit$FontFamilyAction::class$ = nullptr;

		} // text
	} // swing
} // javax