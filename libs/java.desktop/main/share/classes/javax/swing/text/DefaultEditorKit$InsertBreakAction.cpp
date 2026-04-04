#include <javax/swing/text/DefaultEditorKit$InsertBreakAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$InsertBreakAction::init$() {
	$TextAction::init$("insert-break"_s);
}

void DefaultEditorKit$InsertBreakAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		bool var$0 = !target->isEditable();
		if (var$0 || (!target->isEnabled())) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
			return;
		}
		target->replaceSelection("\n"_s);
	}
}

DefaultEditorKit$InsertBreakAction::DefaultEditorKit$InsertBreakAction() {
}

$Class* DefaultEditorKit$InsertBreakAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultEditorKit$InsertBreakAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$InsertBreakAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$InsertBreakAction", "javax.swing.text.DefaultEditorKit", "InsertBreakAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$InsertBreakAction",
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
	$loadClass(DefaultEditorKit$InsertBreakAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$InsertBreakAction));
	});
	return class$;
}

$Class* DefaultEditorKit$InsertBreakAction::class$ = nullptr;

		} // text
	} // swing
} // javax