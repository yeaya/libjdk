#include <com/sun/tools/javac/util/Iterators.h>
#include <com/sun/tools/javac/util/Iterators$1.h>
#include <com/sun/tools/javac/util/Iterators$2.h>
#include <com/sun/tools/javac/util/Iterators$CompoundIterator.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

#undef EMPTY

using $Iterators$1 = ::com::sun::tools::javac::util::Iterators$1;
using $Iterators$2 = ::com::sun::tools::javac::util::Iterators$2;
using $Iterators$CompoundIterator = ::com::sun::tools::javac::util::Iterators$CompoundIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Iterator* Iterators::EMPTY = nullptr;

void Iterators::init$() {
}

$Iterator* Iterators::createCompoundIterator($Iterable* inputs, $Function* convertor) {
	$init(Iterators);
	return $new($Iterators$CompoundIterator, inputs, convertor);
}

$Iterator* Iterators::createFilterIterator($Iterator* input, $Predicate* test) {
	$init(Iterators);
	return $new($Iterators$2, input, test);
}

void Iterators::clinit$($Class* clazz) {
	$assignStatic(Iterators::EMPTY, $new($Iterators$1));
}

Iterators::Iterators() {
}

$Class* Iterators::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY", "Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Iterators, EMPTY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Iterators, init$, void)},
		{"createCompoundIterator", "(Ljava/lang/Iterable;Ljava/util/function/Function;)Ljava/util/Iterator;", "<I:Ljava/lang/Object;O:Ljava/lang/Object;>(Ljava/lang/Iterable<TI;>;Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;)Ljava/util/Iterator<TO;>;", $PUBLIC | $STATIC, $staticMethod(Iterators, createCompoundIterator, $Iterator*, $Iterable*, $Function*)},
		{"createFilterIterator", "(Ljava/util/Iterator;Ljava/util/function/Predicate;)Ljava/util/Iterator;", "<E:Ljava/lang/Object;>(Ljava/util/Iterator<TE;>;Ljava/util/function/Predicate<TE;>;)Ljava/util/Iterator<TE;>;", $PUBLIC | $STATIC, $staticMethod(Iterators, createFilterIterator, $Iterator*, $Iterator*, $Predicate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Iterators$CompoundIterator", "com.sun.tools.javac.util.Iterators", "CompoundIterator", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.util.Iterators$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.util.Iterators$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.util.Iterators",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Iterators$CompoundIterator,com.sun.tools.javac.util.Iterators$2,com.sun.tools.javac.util.Iterators$1"
	};
	$loadClass(Iterators, name, initialize, &classInfo$$, Iterators::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Iterators);
	});
	return class$;
}

$Class* Iterators::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com