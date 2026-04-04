#include <bug6278700.h>
#include <bug6278700$1.h>
#include <bug6278700$2.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6278700$1 = ::bug6278700$1;
using $bug6278700$2 = ::bug6278700$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6278700::main($StringArray* args) {
	$new(bug6278700);
}

void bug6278700::init$() {
	$set(this, listener, $new($bug6278700$1, this));
	$SwingUtilities::invokeLater($$new($bug6278700$2, this));
}

bug6278700::bug6278700() {
}

$Class* bug6278700::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"changeCount", "I", nullptr, $PRIVATE, $field(bug6278700, changeCount)},
		{"listener", "Ljavax/swing/event/ChangeListener;", nullptr, $PRIVATE | $FINAL, $field(bug6278700, listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6278700, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6278700, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6278700$2", nullptr, nullptr, 0},
		{"bug6278700$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6278700",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6278700$2,bug6278700$1"
	};
	$loadClass(bug6278700, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6278700);
	});
	return class$;
}

$Class* bug6278700::class$ = nullptr;