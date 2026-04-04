#include <bug6639507.h>
#include <bug6639507$1.h>
#include <java/awt/Dialog.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6639507$1 = ::bug6639507$1;
using $Dialog = ::java::awt::Dialog;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6639507::init$() {
}

void bug6639507::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($bug6639507$1));
}

void bug6639507::assertEmptyTitle($Dialog* dialog, $String* ctr) {
	$useLocalObjectStack();
	$var($String, title, $nc(dialog)->getTitle());
	if (title == nullptr || title->length() > 0) {
		$throwNew($RuntimeException, $$str({"Title is not empty for constructor "_s, ctr}));
	}
}

bug6639507::bug6639507() {
}

$Class* bug6639507::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6639507, init$, void)},
		{"assertEmptyTitle", "(Ljava/awt/Dialog;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6639507, assertEmptyTitle, void, $Dialog*, $String*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6639507, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6639507$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6639507",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6639507$1"
	};
	$loadClass(bug6639507, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6639507);
	});
	return class$;
}

$Class* bug6639507::class$ = nullptr;