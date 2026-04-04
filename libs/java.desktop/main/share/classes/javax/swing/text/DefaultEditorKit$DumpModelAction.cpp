#include <javax/swing/text/DefaultEditorKit$DumpModelAction.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$DumpModelAction::init$() {
	$TextAction::init$("dump-model"_s);
}

void DefaultEditorKit$DumpModelAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($Document, d, target->getDocument());
		if ($instanceOf($AbstractDocument, d)) {
			$cast($AbstractDocument, d)->dump($System::err);
		}
	}
}

DefaultEditorKit$DumpModelAction::DefaultEditorKit$DumpModelAction() {
}

$Class* DefaultEditorKit$DumpModelAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$DumpModelAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$DumpModelAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$DumpModelAction", "javax.swing.text.DefaultEditorKit", "DumpModelAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$DumpModelAction",
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
	$loadClass(DefaultEditorKit$DumpModelAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$DumpModelAction));
	});
	return class$;
}

$Class* DefaultEditorKit$DumpModelAction::class$ = nullptr;

		} // text
	} // swing
} // javax