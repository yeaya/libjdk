#include <HeadlessJPasswordField.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPasswordField = ::javax::swing::JPasswordField;

void HeadlessJPasswordField::init$() {
}

void HeadlessJPasswordField::main($StringArray* args) {
	$var($JPasswordField, f, $new($JPasswordField, "field"_s));
	f->selectAll();
	f->getSelectionStart();
	f->getSelectionEnd();
}

HeadlessJPasswordField::HeadlessJPasswordField() {
}

$Class* HeadlessJPasswordField::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessJPasswordField, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HeadlessJPasswordField, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"HeadlessJPasswordField",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(HeadlessJPasswordField, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessJPasswordField);
	});
	return class$;
}

$Class* HeadlessJPasswordField::class$ = nullptr;