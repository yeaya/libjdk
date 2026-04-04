#include <javax/swing/text/html/HTMLEditorKit$BeginAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLEditorKit$BeginAction::init$($String* nm, bool select) {
	$TextAction::init$(nm);
	this->select = select;
}

void HTMLEditorKit$BeginAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	int32_t bodyStart = $HTMLEditorKit::getBodyElementStart(target);
	if (target != nullptr) {
		if (this->select) {
			target->moveCaretPosition(bodyStart);
		} else {
			target->setCaretPosition(bodyStart);
		}
	}
}

HTMLEditorKit$BeginAction::HTMLEditorKit$BeginAction() {
}

$Class* HTMLEditorKit$BeginAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"select", "Z", nullptr, $PRIVATE, $field(HTMLEditorKit$BeginAction, select)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(HTMLEditorKit$BeginAction, init$, void, $String*, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$BeginAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLEditorKit$BeginAction", "javax.swing.text.html.HTMLEditorKit", "BeginAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLEditorKit$BeginAction",
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
		"javax.swing.text.html.HTMLEditorKit"
	};
	$loadClass(HTMLEditorKit$BeginAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HTMLEditorKit$BeginAction));
	});
	return class$;
}

$Class* HTMLEditorKit$BeginAction::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax