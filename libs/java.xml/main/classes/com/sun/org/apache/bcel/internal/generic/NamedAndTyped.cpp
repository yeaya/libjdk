#include <com/sun/org/apache/bcel/internal/generic/NamedAndTyped.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$Class* NamedAndTyped::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedAndTyped, getName, $String*)},
		{"getType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedAndTyped, getType, $Type*)},
		{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedAndTyped, setName, void, $String*)},
		{"setType", "(Lcom/sun/org/apache/bcel/internal/generic/Type;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedAndTyped, setType, void, $Type*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.bcel.internal.generic.NamedAndTyped",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NamedAndTyped, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedAndTyped);
	});
	return class$;
}

$Class* NamedAndTyped::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com