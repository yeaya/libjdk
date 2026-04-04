#include <bug5074573$4.h>
#include <bug5074573.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug5074573 = ::bug5074573;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug5074573$4::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug5074573$4::run() {
	$init($bug5074573);
	$nc(this->val$result)->set(0, $($nc($bug5074573::textComponent)->getText()));
}

bug5074573$4::bug5074573$4() {
}

$Class* bug5074573$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug5074573$4, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(bug5074573$4, init$, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5074573$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug5074573",
		"getText",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5074573$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5074573$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug5074573"
	};
	$loadClass(bug5074573$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5074573$4);
	});
	return class$;
}

$Class* bug5074573$4::class$ = nullptr;