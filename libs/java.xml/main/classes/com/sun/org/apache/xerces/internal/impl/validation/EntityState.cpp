#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {

$Class* EntityState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isEntityDeclared", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityState, isEntityDeclared, bool, $String*)},
		{"isEntityUnparsed", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(EntityState, isEntityUnparsed, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.validation.EntityState",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(EntityState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EntityState);
	});
	return class$;
}

$Class* EntityState::class$ = nullptr;

							} // validation
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com