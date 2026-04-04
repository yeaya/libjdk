#include <javax/swing/text/DefaultEditorKit$DeletePrevCharAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$DeletePrevCharAction::init$() {
	$TextAction::init$("delete-previous"_s);
}

void DefaultEditorKit$DeletePrevCharAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	bool beep = true;
	if ((target != nullptr) && (target->isEditable())) {
		try {
			$var($Document, doc, target->getDocument());
			$var($Caret, caret, target->getCaret());
			int32_t dot = $nc(caret)->getDot();
			int32_t mark = caret->getMark();
			if (dot != mark) {
				int32_t var$0 = $Math::min(dot, mark);
				$nc(doc)->remove(var$0, $Math::abs(dot - mark));
				beep = false;
			} else if (dot > 0) {
				int32_t delChars = 1;
				if (dot > 1) {
					$var($String, dotChars, $nc(doc)->getText(dot - 2, 2));
					char16_t c0 = $nc(dotChars)->charAt(0);
					char16_t c1 = dotChars->charAt(1);
					if (c0 >= (char16_t)0xd800 && c0 <= (char16_t)0xdbff && c1 >= (char16_t)0xdc00 && c1 <= (char16_t)0xdfff) {
						delChars = 2;
					}
				}
				$nc(doc)->remove(dot - delChars, delChars);
				beep = false;
			}
		} catch ($BadLocationException& bl) {
		}
	}
	if (beep) {
		$$nc($UIManager::getLookAndFeel())->provideErrorFeedback(target);
	}
}

DefaultEditorKit$DeletePrevCharAction::DefaultEditorKit$DeletePrevCharAction() {
}

$Class* DefaultEditorKit$DeletePrevCharAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$DeletePrevCharAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$DeletePrevCharAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$DeletePrevCharAction", "javax.swing.text.DefaultEditorKit", "DeletePrevCharAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$DeletePrevCharAction",
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
	$loadClass(DefaultEditorKit$DeletePrevCharAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$DeletePrevCharAction));
	});
	return class$;
}

$Class* DefaultEditorKit$DeletePrevCharAction::class$ = nullptr;

		} // text
	} // swing
} // javax