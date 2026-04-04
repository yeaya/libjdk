#include <javax/swing/text/DefaultEditorKit$PasteAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$PasteAction::init$() {
	$TextAction::init$("paste-from-clipboard"_s);
}

void DefaultEditorKit$PasteAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		target->paste();
	}
}

DefaultEditorKit$PasteAction::DefaultEditorKit$PasteAction() {
}

$Class* DefaultEditorKit$PasteAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultEditorKit$PasteAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$PasteAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$PasteAction", "javax.swing.text.DefaultEditorKit", "PasteAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$PasteAction",
		"javax.swing.text.TextAction",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.DefaultEditorKit"
	};
	$loadClass(DefaultEditorKit$PasteAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$PasteAction));
	});
	return class$;
}

$Class* DefaultEditorKit$PasteAction::class$ = nullptr;

		} // text
	} // swing
} // javax