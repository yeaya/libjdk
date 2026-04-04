#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace util {

void ReadOnlyIterator::init$() {
	$set(this, iterator, nullptr);
}

void ReadOnlyIterator::init$($Iterator* itr) {
	$set(this, iterator, nullptr);
	$set(this, iterator, itr);
}

bool ReadOnlyIterator::hasNext() {
	if (this->iterator != nullptr) {
		return this->iterator->hasNext();
	}
	return false;
}

$Object* ReadOnlyIterator::next() {
	if (this->iterator != nullptr) {
		return this->iterator->next();
	}
	return nullptr;
}

void ReadOnlyIterator::remove() {
	$throwNew($UnsupportedOperationException, "Remove operation is not supported"_s);
}

ReadOnlyIterator::ReadOnlyIterator() {
}

$Class* ReadOnlyIterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<TT;>;", 0, $field(ReadOnlyIterator, iterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadOnlyIterator, init$, void)},
		{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<TT;>;)V", $PUBLIC, $method(ReadOnlyIterator, init$, void, $Iterator*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ReadOnlyIterator, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(ReadOnlyIterator, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyIterator, remove, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.xml.internal.stream.util.ReadOnlyIterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;"
	};
	$loadClass(ReadOnlyIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadOnlyIterator);
	});
	return class$;
}

$Class* ReadOnlyIterator::class$ = nullptr;

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com