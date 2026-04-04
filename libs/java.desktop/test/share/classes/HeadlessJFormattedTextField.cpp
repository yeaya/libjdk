#include <HeadlessJFormattedTextField.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;

void HeadlessJFormattedTextField::init$() {
}

void HeadlessJFormattedTextField::main($StringArray* args) {
	$var($JTextField, f, $new($JTextField, "field"_s));
	f->selectAll();
	f->getSelectionStart();
	f->getSelectionEnd();
	f->selectAll();
}

HeadlessJFormattedTextField::HeadlessJFormattedTextField() {
}

$Class* HeadlessJFormattedTextField::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessJFormattedTextField, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessJFormattedTextField, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessJFormattedTextField",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessJFormattedTextField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJFormattedTextField);
	});
	return class$;
}

$Class* HeadlessJFormattedTextField::class$ = nullptr;