#include <sun/java2d/ReentrantContext.h>
#include <java/lang/ref/Reference.h>
#include <sun/java2d/ReentrantContextProvider.h>
#include <jcpp.h>

#undef USAGE_TL_INACTIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantContextProvider = ::sun::java2d::ReentrantContextProvider;

namespace sun {
	namespace java2d {

void ReentrantContext::init$() {
	this->usage = $ReentrantContextProvider::USAGE_TL_INACTIVE;
	$set(this, reference, nullptr);
}

ReentrantContext::ReentrantContext() {
}

$Class* ReentrantContext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"usage", "B", nullptr, 0, $field(ReentrantContext, usage)},
		{"reference", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Lsun/java2d/ReentrantContext;>;", 0, $field(ReentrantContext, reference)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReentrantContext, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.java2d.ReentrantContext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReentrantContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReentrantContext);
	});
	return class$;
}

$Class* ReentrantContext::class$ = nullptr;

	} // java2d
} // sun