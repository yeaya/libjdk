#include <com/sun/org/apache/xerces/internal/impl/xs/identity/ValueStore.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
#include <com/sun/org/apache/xerces/internal/xs/ShortList.h>
#include <jcpp.h>

using $Field = ::com::sun::org::apache::xerces::internal::impl::xs::identity::Field;
using $ShortList = ::com::sun::org::apache::xerces::internal::xs::ShortList;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$Class* ValueStore::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addValue", "(Lcom/sun/org/apache/xerces/internal/impl/xs/identity/Field;ZLjava/lang/Object;SLcom/sun/org/apache/xerces/internal/xs/ShortList;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueStore, addValue, void, $Field*, bool, Object$*, int16_t, $ShortList*)},
		{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueStore, reportError, void, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.xs.identity.ValueStore",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ValueStore, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueStore);
	});
	return class$;
}

$Class* ValueStore::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com