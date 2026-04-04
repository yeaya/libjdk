#include <com/sun/java/swing/plaf/motif/MotifTextUI.h>
#include <com/sun/java/swing/plaf/motif/MotifTextUI$MotifCaret.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <jcpp.h>

#undef CTRL_MASK
#undef SHIFT_MASK
#undef VK_DELETE
#undef VK_INSERT
#undef VK_LEFT
#undef VK_RIGHT

using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $MotifTextUI$MotifCaret = ::com::sun::java::swing::plaf::motif::MotifTextUI$MotifCaret;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;
using $Caret = ::javax::swing::text::Caret;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $JTextComponent$KeyBinding = ::javax::swing::text::JTextComponent$KeyBinding;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$JTextComponent$KeyBindingArray* MotifTextUI::defaultBindings = nullptr;

void MotifTextUI::init$() {
}

$Caret* MotifTextUI::createCaret() {
	$init(MotifTextUI);
	return $new($MotifTextUI$MotifCaret);
}

void MotifTextUI::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$init($DefaultEditorKit);
	$assignStatic(MotifTextUI::defaultBindings, $new($JTextComponent$KeyBindingArray, {
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_INSERT, $InputEvent::CTRL_MASK)), $DefaultEditorKit::copyAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_INSERT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::pasteAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_DELETE, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::cutAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_LEFT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::selectionBackwardAction),
		$$new($JTextComponent$KeyBinding, $($KeyStroke::getKeyStroke($KeyEvent::VK_RIGHT, $InputEvent::SHIFT_MASK)), $DefaultEditorKit::selectionForwardAction)
	}));
}

MotifTextUI::MotifTextUI() {
}

$Class* MotifTextUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"defaultBindings", "[Ljavax/swing/text/JTextComponent$KeyBinding;", nullptr, $STATIC | $FINAL, $staticField(MotifTextUI, defaultBindings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifTextUI, init$, void)},
		{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifTextUI, createCaret, $Caret*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret", "com.sun.java.swing.plaf.motif.MotifTextUI", "MotifCaret", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifTextUI",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifTextUI$MotifCaret"
	};
	$loadClass(MotifTextUI, name, initialize, &classInfo$$, MotifTextUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MotifTextUI);
	});
	return class$;
}

$Class* MotifTextUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com