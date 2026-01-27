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

$MethodInfo _XSObjectList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObjectList, getLength, int32_t)},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSObject;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSObjectList, item, $XSObject*, int32_t)},
	{}
};

$ClassInfo _XSObjectList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSObjectList",
	nullptr,
	"java.util.List",
	nullptr,
	_XSObjectList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSObject;>;"
};

$Object* allocate$XSObjectList($Class* clazz) {
	return $of($alloc(XSObjectList));
}

$Class* XSObjectList::load$($String* name, bool initialize) {
	$loadClass(XSObjectList, name, initialize, &_XSObjectList_ClassInfo_, allocate$XSObjectList);
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