#include <bug4492274$3.h>
#include <bug4492274.h>
#include <java/net/URL.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

using $bug4492274 = ::bug4492274;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4492274$3::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug4492274$3::run() {
	$useLocalObjectStack();
	$init($bug4492274);
	$nc(this->val$result)->set(0, $($$nc($nc($bug4492274::jep)->getPage())->getRef()));
}

bug4492274$3::bug4492274$3() {
}

$Class* bug4492274$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug4492274$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(bug4492274$3, init$, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4492274$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4492274",
		"getPageAnchor",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4492274$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4492274$3",
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
		"bug4492274"
	};
	$loadClass(bug4492274$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4492274$3);
	});
	return class$;
}

$Class* bug4492274$3::class$ = nullptr;