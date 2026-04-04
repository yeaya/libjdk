#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl$RefCount.h>
#include <com/sun/org/apache/xerces/internal/dom/DeferredDocumentImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void DeferredDocumentImpl$RefCount::init$() {
}

DeferredDocumentImpl$RefCount::DeferredDocumentImpl$RefCount() {
}

$Class* DeferredDocumentImpl$RefCount::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fCount", "I", nullptr, 0, $field(DeferredDocumentImpl$RefCount, fCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DeferredDocumentImpl$RefCount, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount", "com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl", "RefCount", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl"
	};
	$loadClass(DeferredDocumentImpl$RefCount, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredDocumentImpl$RefCount);
	});
	return class$;
}

$Class* DeferredDocumentImpl$RefCount::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com