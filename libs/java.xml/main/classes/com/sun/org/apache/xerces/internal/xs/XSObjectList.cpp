#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <jcpp.h>

using $XSObject = ::com::sun::org::apache::xerces::internal::xs::XSObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$Class* XSObjectList::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObjectList, getLength, int32_t)},
		{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObjectList, item, $XSObject*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xs.XSObjectList",
		nullptr,
		"java.util.List",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;"
	};
	$loadClass(XSObjectList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSObjectList);
	});
	return class$;
}

$Class* XSObjectList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com