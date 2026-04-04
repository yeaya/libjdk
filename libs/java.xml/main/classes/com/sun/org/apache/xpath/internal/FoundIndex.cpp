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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FoundIndex, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FoundIndex, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xpath.internal.FoundIndex",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FoundIndex, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FoundIndex);
	});
	return class$;
}

$Class* FoundIndex::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com