#include <com/sun/org/apache/xerces/internal/xs/LSInputList.h>

#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _LSInputList_MethodInfo_[] = {
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInputList, getLength, int32_t)},
	{"item", "(I)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInputList, item, $LSInput*, int32_t)},
	{}
};

$ClassInfo _LSInputList_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.LSInputList",
	nullptr,
	"java.util.List",
	nullptr,
	_LSInputList_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/List<Lorg/w3c/dom/ls/LSInput;>;"
};

$Object* allocate$LSInputList($Class* clazz) {
	return $of($alloc(LSInputList));
}

$Class* LSInputList::load$($String* name, bool initialize) {
	$loadClass(LSInputList, name, initialize, &_LSInputList_ClassInfo_, allocate$LSInputList);
	return class$;
}

$Class* LSInputList::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com