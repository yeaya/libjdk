#include <javax/swing/text/DefaultEditorKit$EndParagraphAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/Utilities.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $Utilities = ::javax::swing::text::Utilities;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$EndParagraphAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void DefaultEditorKit$EndParagraphAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		int32_t offs = target->getCaretPosition();
		$var($Element, elem, $Utilities::getParagraphElement(target, offs));
		int32_t var$0 = $$nc(target->getDocument())->getLength();
		offs = $Math::min(var$0, $nc(elem)->getEndOffset());
		if (this->select) {
			target->moveCaretPosition(offs);
		} else {
			target->setCaretPosition(offs);
		}
	}
}

DefaultEditorKit$EndParagraphAction::DefaultEditorKit$EndParagraphAction() {
}

$Class* DefaultEditorKit$EndParagraphAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(DefaultEditorKit$EndParagraphAction, select)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(DefaultEditorKit$EndParagraphAction, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$EndParagraphAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$EndParagraphAction", "javax.swing.text.DefaultEditorKit", "EndParagraphAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$EndParagraphAction",
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
	$loadClass(DefaultEditorKit$EndParagraphAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$EndParagraphAction));
	});
	return class$;
}

$Class* DefaultEditorKit$EndParagraphAction::class$ = nullptr;

		} // text
	} // swing
} // javax