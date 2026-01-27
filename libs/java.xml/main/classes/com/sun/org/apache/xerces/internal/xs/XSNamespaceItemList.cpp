#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItemList.h>

#include <com/sun/org/apache/xerces/internal/xs/XSNamespaceItem.h>
#include <jcpp.h>

using $XSNamespaceItem = ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSNamespaceItemList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSNamespaceItemList, getLength, int32_t)},
	{"item", "(I)Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSNamespaceItemList, item, $XSNamespaceItem*, int32_t)},
	{}
};

$ClassInfo _XSNamespaceItemList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSNamespaceItemList",
	nullptr,
	"java.util.List",
	nullptr,
	_XSNamespaceItemList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/xs/XSNamespaceItem;>;"
};

$Object* allocate$XSNamespaceItemList($Class* clazz) {
	return $of($alloc(XSNamespaceItemList));
}

$Class* XSNamespaceItemList::load$($String* name, bool initialize) {
	$loadClass(XSNamespaceItemList, name, initialize, &_XSNamespaceItemList_ClassInfo_, allocate$XSNamespaceItemList);
	return class$;
}

$Class* XSNamespaceItemList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com