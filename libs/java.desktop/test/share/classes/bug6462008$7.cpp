#include <bug6462008$7.h>
#include <bug6462008.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6462008$7::init$(int32_t val$anchorLeadValue) {
	this->val$anchorLeadValue = val$anchorLeadValue;
}

void bug6462008$7::run() {
	$init($bug6462008);
	$bug6462008::anchorLead = this->val$anchorLeadValue;
	$bug6462008::setAnchorLeadNonThreadSafe();
}

bug6462008$7::bug6462008$7() {
}

$Class* bug6462008$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$anchorLeadValue", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$7, val$anchorLeadValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", "()V", 0, $method(bug6462008$7, init$, void, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$7, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"setAnchorLead",
		"(I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$7", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$7",
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
		"bug6462008"
	};
	$loadClass(bug6462008$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$7);
	});
	return class$;
}

$Class* bug6462008$7::class$ = nullptr;