#include <bug6462008$8.h>
#include <bug6462008.h>
#include <jcpp.h>

using $bug6462008 = ::bug6462008;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6462008$8::init$(int32_t val$anchor, int32_t val$lead, $ints* val$sels) {
	this->val$anchor = val$anchor;
	this->val$lead = val$lead;
	$set(this, val$sels, val$sels);
}

void bug6462008$8::run() {
	$bug6462008::checkSelectionNonThreadSafe(this->val$anchor, this->val$lead, this->val$sels);
}

bug6462008$8::bug6462008$8() {
}

$Class* bug6462008$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$sels", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$sels)},
		{"val$lead", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$lead)},
		{"val$anchor", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug6462008$8, val$anchor)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II[I)V", "()V", 0, $method(bug6462008$8, init$, void, int32_t, int32_t, $ints*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6462008$8, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6462008",
		"checkSelectionAL",
		"(II[I)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6462008$8", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6462008$8",
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
	$loadClass(bug6462008$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6462008$8);
	});
	return class$;
}

$Class* bug6462008$8::class$ = nullptr;