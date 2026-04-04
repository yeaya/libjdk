#include <com/sun/tools/javac/util/Iterators$2.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <java/util/Iterator.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Iterators$2::init$($Iterator* val$input, $Predicate* val$test) {
	$set(this, val$input, val$input);
	$set(this, val$test, val$test);
	$set(this, current, update());
}

$Object* Iterators$2::update() {
	$useLocalObjectStack();
	while ($nc(this->val$input)->hasNext()) {
		$var($Object, sym, this->val$input->next());
		if ($nc(this->val$test)->test(sym)) {
			return sym;
		}
	}
	return nullptr;
}

bool Iterators$2::hasNext() {
	return this->current != nullptr;
}

$Object* Iterators$2::next() {
	$var($Object, res, this->current);
	$set(this, current, update());
	return res;
}

Iterators$2::Iterators$2() {
}

$Class* Iterators$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "Ljava/util/function/Predicate;", nullptr, $FINAL | $SYNTHETIC, $field(Iterators$2, val$test)},
		{"val$input", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Iterators$2, val$input)},
		{"current", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(Iterators$2, current)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;Ljava/util/function/Predicate;)V", "()V", 0, $method(Iterators$2, init$, void, $Iterator*, $Predicate*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Iterators$2, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC, $virtualMethod(Iterators$2, next, $Object*)},
		{"update", "()Ljava/lang/Object;", "()TE;", $PRIVATE, $method(Iterators$2, update, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.Iterators",
		"createFilterIterator",
		"(Ljava/util/Iterator;Ljava/util/function/Predicate;)Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Iterators$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Iterators$2",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Iterators"
	};
	$loadClass(Iterators$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iterators$2);
	});
	return class$;
}

$Class* Iterators$2::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com