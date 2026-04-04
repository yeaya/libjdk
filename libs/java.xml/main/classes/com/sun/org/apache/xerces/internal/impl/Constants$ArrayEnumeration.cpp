#include <com/sun/org/apache/xerces/internal/impl/Constants$ArrayEnumeration.h>
#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

void Constants$ArrayEnumeration::init$($ObjectArray* array) {
	$set(this, array, array);
}

bool Constants$ArrayEnumeration::hasMoreElements() {
	return this->index < $nc(this->array)->length;
}

$Object* Constants$ArrayEnumeration::nextElement() {
	if (this->index < $nc(this->array)->length) {
		return this->array->get(this->index++);
	}
	$throwNew($NoSuchElementException);
}

Constants$ArrayEnumeration::Constants$ArrayEnumeration() {
}

$Class* Constants$ArrayEnumeration::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(Constants$ArrayEnumeration, array)},
		{"index", "I", nullptr, $PRIVATE, $field(Constants$ArrayEnumeration, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(Constants$ArrayEnumeration, init$, void, $ObjectArray*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Constants$ArrayEnumeration, hasMoreElements, bool)},
		{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Constants$ArrayEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.Constants$ArrayEnumeration", "com.sun.org.apache.xerces.internal.impl.Constants", "ArrayEnumeration", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.Constants$ArrayEnumeration",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.Constants"
	};
	$loadClass(Constants$ArrayEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Constants$ArrayEnumeration);
	});
	return class$;
}

$Class* Constants$ArrayEnumeration::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com