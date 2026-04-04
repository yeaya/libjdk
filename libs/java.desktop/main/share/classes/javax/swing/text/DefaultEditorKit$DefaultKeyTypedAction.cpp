#include <javax/swing/text/DefaultEditorKit$DefaultKeyTypedAction.h>
#include <java/awt/Component.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace javax {
	namespace swing {
		namespace text {

void DefaultEditorKit$DefaultKeyTypedAction::init$() {
	$TextAction::init$("default-typed"_s);
}

void DefaultEditorKit$DefaultKeyTypedAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$var($JTextComponent, target, getTextComponent(e));
	if ((target != nullptr) && (e != nullptr)) {
		bool var$0 = !target->isEditable();
		if (var$0 || (!target->isEnabled())) {
			return;
		}
		$var($String, content, e->getActionCommand());
		int32_t mod = e->getModifiers();
		if ((content != nullptr) && (content->length() > 0)) {
			bool isPrintableMask = true;
			$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
			if ($instanceOf($SunToolkit, tk)) {
				isPrintableMask = $cast($SunToolkit, tk)->isPrintableCharacterModifiersMask(mod);
			}
			char16_t c = content->charAt(0);
			if ((isPrintableMask && (c >= 32) && (c != 127)) || (!isPrintableMask && (c >= 8204) && (c <= 8205))) {
				target->replaceSelection(content);
			}
		}
	}
}

DefaultEditorKit$DefaultKeyTypedAction::DefaultEditorKit$DefaultKeyTypedAction() {
}

$Class* DefaultEditorKit$DefaultKeyTypedAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultEditorKit$DefaultKeyTypedAction, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultEditorKit$DefaultKeyTypedAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction", "javax.swing.text.DefaultEditorKit", "DefaultKeyTypedAction", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.DefaultEditorKit$DefaultKeyTypedAction",
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
	$loadClass(DefaultEditorKit$DefaultKeyTypedAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultEditorKit$DefaultKeyTypedAction));
	});
	return class$;
}

$Class* DefaultEditorKit$DefaultKeyTypedAction::class$ = nullptr;

		} // text
	} // swing
} // javax