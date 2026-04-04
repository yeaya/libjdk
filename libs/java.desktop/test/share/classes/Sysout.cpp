#include <Sysout.h>
#include <TestDialog4bug8037575.h>
#include <java/awt/Dialog.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $TestDialog4bug8037575 = ::TestDialog4bug8037575;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$TestDialog4bug8037575* Sysout::dialog = nullptr;
$JFrame* Sysout::frame = nullptr;

void Sysout::init$() {
}

void Sysout::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout);
	$assignStatic(Sysout::frame, $new($JFrame));
	$assignStatic(Sysout::dialog, $new($TestDialog4bug8037575, Sysout::frame, "Instructions"_s));
	Sysout::dialog->printInstructions(instructions);
	$nc(Sysout::dialog)->setVisible(true);
	println("Any messages for the tester will display here."_s);
}

void Sysout::printInstructions($StringArray* instructions) {
	$init(Sysout);
	$nc(Sysout::dialog)->printInstructions(instructions);
}

void Sysout::println($String* messageIn) {
	$init(Sysout);
	$nc(Sysout::dialog)->displayMessage(messageIn);
}

void Sysout::dispose() {
	Sysout::println("Shutting down the Java process.."_s);
	$nc(Sysout::frame)->dispose();
	$nc(Sysout::dialog)->dispose();
}

Sysout::Sysout() {
}

$Class* Sysout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "LTestDialog4bug8037575;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout, dialog)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sysout, init$, void)},
		{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout, createDialogWithInstructions, void, $StringArray*)},
		{"dispose", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout, dispose, void)},
		{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout, printInstructions, void, $StringArray*)},
		{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout, println, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sysout",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Sysout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sysout);
	});
	return class$;
}

$Class* Sysout::class$ = nullptr;