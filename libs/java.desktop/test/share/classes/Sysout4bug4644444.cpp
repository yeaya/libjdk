#include <Sysout4bug4644444.h>
#include <TestDialog4bug4644444.h>
#include <java/awt/Frame.h>
#include <jcpp.h>

using $TestDialog4bug4644444 = ::TestDialog4bug4644444;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$TestDialog4bug4644444* Sysout4bug4644444::dialog = nullptr;

void Sysout4bug4644444::init$() {
}

void Sysout4bug4644444::createDialogWithInstructions($StringArray* instructions) {
	$init(Sysout4bug4644444);
	$assignStatic(Sysout4bug4644444::dialog, $new($TestDialog4bug4644444, $$new($Frame), "Instructions"_s));
	Sysout4bug4644444::dialog->printInstructions(instructions);
	$nc(Sysout4bug4644444::dialog)->show();
	println("Any messages for the tester will display here."_s);
}

void Sysout4bug4644444::createDialog() {
	$useLocalObjectStack();
	$init(Sysout4bug4644444);
	$assignStatic(Sysout4bug4644444::dialog, $new($TestDialog4bug4644444, $$new($Frame), "Instructions"_s));
	$var($StringArray, defInstr, $new($StringArray, {
		"Instructions will appear here. "_s,
		""_s
	}));
	Sysout4bug4644444::dialog->printInstructions(defInstr);
	$nc(Sysout4bug4644444::dialog)->show();
	println("Any messages for the tester will display here."_s);
}

void Sysout4bug4644444::printInstructions($StringArray* instructions) {
	$init(Sysout4bug4644444);
	$nc(Sysout4bug4644444::dialog)->printInstructions(instructions);
}

void Sysout4bug4644444::println($String* messageIn) {
	$init(Sysout4bug4644444);
	$nc(Sysout4bug4644444::dialog)->displayMessage(messageIn);
}

void Sysout4bug4644444::setInstructionsWithExceptions($StringArray2* instructionsSet, $StringArray* exceptionsSet) {
	createDialogWithInstructions($nc(instructionsSet)->get(0));
	$init(Sysout4bug4644444);
	$nc(Sysout4bug4644444::dialog)->setInstructions(instructionsSet);
	$nc(Sysout4bug4644444::dialog)->setExceptionMessages(exceptionsSet);
}

$String* Sysout4bug4644444::getFailureMessages() {
	$init(Sysout4bug4644444);
	return $nc(Sysout4bug4644444::dialog)->failureMessages;
}

bool Sysout4bug4644444::failStatus() {
	$init(Sysout4bug4644444);
	return $nc(Sysout4bug4644444::dialog)->failStatus;
}

Sysout4bug4644444::Sysout4bug4644444() {
}

$Class* Sysout4bug4644444::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dialog", "LTestDialog4bug4644444;", nullptr, $PRIVATE | $STATIC, $staticField(Sysout4bug4644444, dialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sysout4bug4644444, init$, void)},
		{"createDialog", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, createDialog, void)},
		{"createDialogWithInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, createDialogWithInstructions, void, $StringArray*)},
		{"failStatus", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, failStatus, bool)},
		{"getFailureMessages", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, getFailureMessages, $String*)},
		{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, printInstructions, void, $StringArray*)},
		{"println", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, println, void, $String*)},
		{"setInstructionsWithExceptions", "([[Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Sysout4bug4644444, setInstructionsWithExceptions, void, $StringArray2*, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Sysout4bug4644444",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Sysout4bug4644444, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sysout4bug4644444);
	});
	return class$;
}

$Class* Sysout4bug4644444::class$ = nullptr;