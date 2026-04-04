#include <com/sun/tools/javac/util/Iterators$CompoundIterator.h>
#include <com/sun/tools/javac/util/Iterators.h>
#include <java/lang/Iterable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef EMPTY

using $Iterators = ::com::sun::tools::javac::util::Iterators;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Iterators$CompoundIterator::init$($Iterable* inputs, $Function* convertor) {
	$init($Iterators);
	$set(this, currentIterator, $Iterators::EMPTY);
	$set(this, inputs, $nc(inputs)->iterator());
	$set(this, convertor, convertor);
}

bool Iterators$CompoundIterator::hasNext() {
	if (this->currentIterator != nullptr && !this->currentIterator->hasNext()) {
		update();
	}
	return this->currentIterator != nullptr;
}

$Object* Iterators$CompoundIterator::next() {
	$init($Iterators);
	if (this->currentIterator == $Iterators::EMPTY && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	return $nc(this->currentIterator)->next();
}

void Iterators$CompoundIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

void Iterators$CompoundIterator::update() {
	$useLocalObjectStack();
	while ($nc(this->inputs)->hasNext()) {
		$set(this, currentIterator, $cast($Iterator, $nc(this->convertor)->apply($(this->inputs->next()))));
		if ($nc(this->currentIterator)->hasNext()) {
			return;
		}
	}
	$set(this, currentIterator, nullptr);
}

Iterators$CompoundIterator::Iterators$CompoundIterator() {
}

$Class* Iterators$CompoundIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inputs", "Ljava/util/Iterator;", "Ljava/util/Iterator<TI;>;", $PRIVATE | $FINAL, $field(Iterators$CompoundIterator, inputs)},
		{"convertor", "Ljava/util/function/Function;", "Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;", $PRIVATE | $FINAL, $field(Iterators$CompoundIterator, convertor)},
		{"currentIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<TO;>;", $PRIVATE, $field(Iterators$CompoundIterator, currentIterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Iterable;Ljava/util/function/Function;)V", "(Ljava/lang/Iterable<TI;>;Ljava/util/function/Function<TI;Ljava/util/Iterator<TO;>;>;)V", $PUBLIC, $method(Iterators$CompoundIterator, init$, void, $Iterable*, $Function*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Iterators$CompoundIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TO;", $PUBLIC, $virtualMethod(Iterators$CompoundIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Iterators$CompoundIterator, remove, void)},
		{"update", "()V", nullptr, $PRIVATE, $method(Iterators$CompoundIterator, update, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Iterators$CompoundIterator", "com.sun.tools.javac.util.Iterators", "CompoundIterator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Iterators$CompoundIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<I:Ljava/lang/Object;O:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TO;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Iterators"
	};
	$loadClass(Iterators$CompoundIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iterators$CompoundIterator);
	});
	return class$;
}

$Class* Iterators$CompoundIterator::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com