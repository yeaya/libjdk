#include <javax/swing/text/DefaultEditorKit$InsertContentAction.h>
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

void DefaultEditorKit$InsertContentAction::init$() {
	$TextAction::init$("insert-content"_s);
}

void DefaultEditorKit$InsertContentAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if ((target != nullptr) && (e != nullptr)) {
		bool var$0 = !target->isEditable();
		if (var$0 || (!target->isEnabled())) {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
			return;
		}
		$var($String, content, e->getActionCommand());
		if (content != nullptr) {
			target->replaceSelection(content);
		} else {
			$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
		}
	}
}

DefaultEditorKit$InsertContentAction::DefaultEditorKit$InsertContentAction() {
}

$Class* DefaultEditorKit$InsertContentAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultEditorKit$InsertContentAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$InsertContentAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$InsertContentAction", "javax.swing.text.DefaultEditorKit", "InsertContentAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$InsertContentAction",
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
	$loadClass(DefaultEditorKit$InsertContentAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$InsertContentAction));
	});
	return class$;
}

$Class* DefaultEditorKit$InsertContentAction::class$ = nullptr;

		} // text
	} // swing
} // javax