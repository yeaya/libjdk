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

$FieldInfo _ReadOnlyIterator_FieldInfo_[] = {
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<TT;>;", 0, $field(ReadOnlyIterator, iterator)},
	{}
};

$MethodInfo _ReadOnlyIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReadOnlyIterator, init$, void)},
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<TT;>;)V", $PUBLIC, $method(ReadOnlyIterator, init$, void, $Iterator*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(ReadOnlyIterator, hasNext, bool)},
	{"next", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(ReadOnlyIterator, next, $Object*)},
	{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(ReadOnlyIterator, remove, void)},
	{}
};

$ClassInfo _ReadOnlyIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.util.ReadOnlyIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ReadOnlyIterator_FieldInfo_,
	_ReadOnlyIterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TT;>;"
};

$Object* allocate$ReadOnlyIterator($Class* clazz) {
	return $of($alloc(ReadOnlyIterator));
}

void ReadOnlyIterator::init$() {
	$set(this, iterator, nullptr);
}

void ReadOnlyIterator::init$($Iterator* itr) {
	$set(this, iterator, nullptr);
	$set(this, iterator, itr);
}

bool ReadOnlyIterator::hasNext() {
	if (this->iterator != nullptr) {
		return $nc(this->iterator)->hasNext();
	}
	return false;
}

$Object* ReadOnlyIterator::next() {
	if (this->iterator != nullptr) {
		return $of($nc(this->iterator)->next());
	}
	return $of(nullptr);
}

void ReadOnlyIterator::remove() {
	$throwNew($UnsupportedOperationException, "Remove operation is not supported"_s);
}

ReadOnlyIterator::ReadOnlyIterator() {
}

$Class* ReadOnlyIterator::load$($String* name, bool initialize) {
	$loadClass(ReadOnlyIterator, name, initialize, &_ReadOnlyIterator_ClassInfo_, allocate$ReadOnlyIterator);
	return class$;
}

$Class* ReadOnlyIterator::class$ = nullptr;

					} // util
				} // stream
			} // internal
		} // xml
	} // sun
} // com