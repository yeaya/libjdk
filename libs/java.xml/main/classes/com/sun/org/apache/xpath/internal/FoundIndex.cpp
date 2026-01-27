#include <com/sun/org/apache/xpath/internal/FoundIndex.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _FoundIndex_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FoundIndex, serialVersionUID)},
	{}
};

$MethodInfo _FoundIndex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FoundIndex, init$, void)},
	{}
};

$ClassInfo _FoundIndex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.FoundIndex",
	"java.lang.RuntimeException",
	nullptr,
	_FoundIndex_FieldInfo_,
	_FoundIndex_MethodInfo_
};

$Object* allocate$FoundIndex($Class* clazz) {
	return $of($alloc(FoundIndex));
}

void FoundIndex::init$() {
	$RuntimeException::init$();
}

FoundIndex::FoundIndex() {
}

FoundIndex::FoundIndex(const FoundIndex& e) : $RuntimeException(e) {
}

void FoundIndex::throw$() {
	throw *this;
}

$Class* FoundIndex::load$($String* name, bool initialize) {
	$loadClass(FoundIndex, name, initialize, &_FoundIndex_ClassInfo_, allocate$FoundIndex);
	return class$;
}

$Class* FoundIndex::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com