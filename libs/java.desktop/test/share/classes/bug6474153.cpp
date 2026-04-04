#include <bug6474153.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/JTextComponent$KeyBinding.h>
#include <jcpp.h>

using $JTextComponent$KeyBindingArray = $Array<::javax::swing::text::JTextComponent$KeyBinding>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;

void bug6474153::init$() {
}

void bug6474153::main($StringArray* args) {
	$useLocalObjectStack();
	$init($DefaultEditorKit);
	checkArray($($LookAndFeel::makeKeyBindings($$new($ObjectArray, {
		"UP"_s,
		$DefaultEditorKit::upAction
	}))));
	checkArray($($LookAndFeel::makeKeyBindings($$new($ObjectArray, {
		"UP"_s,
		$DefaultEditorKit::upAction,
		"PAGE_UP"_s
	}))));
}

void bug6474153::checkArray($JTextComponent$KeyBindingArray* keyActionArray) {
	if ($nc(keyActionArray)->length != 1) {
		$throwNew($RuntimeException, "Wrong array lenght!"_s);
	}
	$init($DefaultEditorKit);
	if (!$nc($DefaultEditorKit::upAction)->equals($nc(keyActionArray->get(0))->actionName)) {
		$throwNew($RuntimeException, "Wrong action name!"_s);
	}
	if (!$$nc($KeyStroke::getKeyStroke("UP"_s))->equals($nc(keyActionArray->get(0))->key)) {
		$throwNew($RuntimeException, "Wrong keystroke!"_s);
	}
}

bug6474153::bug6474153() {
}

$Class* bug6474153::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6474153, init$, void)},
		{"checkArray", "([Ljavax/swing/text/JTextComponent$KeyBinding;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6474153, checkArray, void, $JTextComponent$KeyBindingArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug6474153, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6474153",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6474153, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6474153);
	});
	return class$;
}

$Class* bug6474153::class$ = nullptr;