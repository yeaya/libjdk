#include <sun/java2d/ReentrantContextProviderTL$1.h>
#include <sun/java2d/ReentrantContext.h>
#include <sun/java2d/ReentrantContextProviderCLQ.h>
#include <sun/java2d/ReentrantContextProviderTL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContext = ::sun::java2d::ReentrantContext;
using $ReentrantContextProviderCLQ = ::sun::java2d::ReentrantContextProviderCLQ;
using $ReentrantContextProviderTL = ::sun::java2d::ReentrantContextProviderTL;

namespace sun {
	namespace java2d {

void ReentrantContextProviderTL$1::init$($ReentrantContextProviderTL* this$0, int32_t refType, $ReentrantContextProviderTL* val$parent) {
	$set(this, this$0, this$0);
	$set(this, val$parent, val$parent);
	$ReentrantContextProviderCLQ::init$(refType);
}

$ReentrantContext* ReentrantContextProviderTL$1::newContext() {
	return $nc(this->val$parent)->newContext();
}

ReentrantContextProviderTL$1::ReentrantContextProviderTL$1() {
}

$Class* ReentrantContextProviderTL$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/java2d/ReentrantContextProviderTL;", nullptr, $FINAL | $SYNTHETIC, $field(ReentrantContextProviderTL$1, this$0)},
		{"val$parent", "Lsun/java2d/ReentrantContextProviderTL;", nullptr, $FINAL | $SYNTHETIC, $field(ReentrantContextProviderTL$1, val$parent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/ReentrantContextProviderTL;ILsun/java2d/ReentrantContextProviderTL;)V", nullptr, 0, $method(ReentrantContextProviderTL$1, init$, void, $ReentrantContextProviderTL*, int32_t, $ReentrantContextProviderTL*)},
		{"newContext", "()Lsun/java2d/ReentrantContext;", "()TK;", $PROTECTED, $virtualMethod(ReentrantContextProviderTL$1, newContext, $ReentrantContext*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.ReentrantContextProviderTL",
		"<init>",
		"(II)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.ReentrantContextProviderTL$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.java2d.ReentrantContextProviderTL$1",
		"sun.java2d.ReentrantContextProviderCLQ",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/java2d/ReentrantContextProviderCLQ<TK;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.java2d.ReentrantContextProviderTL"
	};
	$loadClass(ReentrantContextProviderTL$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantContextProviderTL$1);
	});
	return class$;
}

$Class* ReentrantContextProviderTL$1::class$ = nullptr;

	} // java2d
} // sun