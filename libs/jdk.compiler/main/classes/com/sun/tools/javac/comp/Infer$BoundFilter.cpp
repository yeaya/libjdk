#include <com/sun/tools/javac/comp/Infer$BoundFilter.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/comp/Infer.h>
#include <com/sun/tools/javac/comp/InferenceContext.h>
#include <jcpp.h>

#undef BOT

using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $InferenceContext = ::com::sun::tools::javac::comp::InferenceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Infer$BoundFilter::init$($InferenceContext* inferenceContext) {
	$set(this, inferenceContext, inferenceContext);
}

bool Infer$BoundFilter::test($Type* t) {
	bool var$1 = !$nc(t)->isErroneous();
	bool var$0 = var$1 && !$nc(this->inferenceContext)->free(t);
	$init($TypeTag);
	return var$0 && !t->hasTag($TypeTag::BOT);
}

bool Infer$BoundFilter::test(Object$* t) {
	return this->test($cast($Type, t));
}

Infer$BoundFilter::Infer$BoundFilter() {
}

$Class* Infer$BoundFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inferenceContext", "Lcom/sun/tools/javac/comp/InferenceContext;", nullptr, 0, $field(Infer$BoundFilter, inferenceContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/InferenceContext;)V", nullptr, $PUBLIC, $method(Infer$BoundFilter, init$, void, $InferenceContext*)},
		{"test", "(Lcom/sun/tools/javac/code/Type;)Z", nullptr, $PUBLIC, $virtualMethod(Infer$BoundFilter, test, bool, $Type*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Infer$BoundFilter, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Infer$BoundFilter", "com.sun.tools.javac.comp.Infer", "BoundFilter", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.comp.Infer$BoundFilter",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Type;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Infer"
	};
	$loadClass(Infer$BoundFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Infer$BoundFilter);
	});
	return class$;
}

$Class* Infer$BoundFilter::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com