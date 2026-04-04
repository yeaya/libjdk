#include <javax/swing/text/DefaultEditorKit$ToggleComponentOrientationAction.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$ToggleComponentOrientationAction::init$() {
	$TextAction::init$("toggle-componentOrientation"_s);
}

void DefaultEditorKit$ToggleComponentOrientationAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if (target != nullptr) {
		$var($ComponentOrientation, last, target->getComponentOrientation());
		$var($ComponentOrientation, next, nullptr);
		$init($ComponentOrientation);
		if (last == $ComponentOrientation::RIGHT_TO_LEFT) {
			$assign(next, $ComponentOrientation::LEFT_TO_RIGHT);
		} else {
			$assign(next, $ComponentOrientation::RIGHT_TO_LEFT);
		}
		target->setComponentOrientation(next);
		target->repaint();
	}
}

DefaultEditorKit$ToggleComponentOrientationAction::DefaultEditorKit$ToggleComponentOrientationAction() {
}

$Class* DefaultEditorKit$ToggleComponentOrientationAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultEditorKit$ToggleComponentOrientationAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$ToggleComponentOrientationAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction", "javax.swing.text.DefaultEditorKit", "ToggleComponentOrientationAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$ToggleComponentOrientationAction",
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
	$loadClass(DefaultEditorKit$ToggleComponentOrientationAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$ToggleComponentOrientationAction));
	});
	return class$;
}

$Class* DefaultEditorKit$ToggleComponentOrientationAction::class$ = nullptr;

		} // text
	} // swing
} // javax