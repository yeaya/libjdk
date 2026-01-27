#include <org/w3c/dom/ls/LSSerializerFilter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSSerializerFilter_MethodInfo_[] = {
	{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializerFilter, getWhatToShow, int32_t)},
	{}
};

$ClassInfo _LSSerializerFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSSerializerFilter",
	nullptr,
	"org.w3c.dom.traversal.NodeFilter",
	nullptr,
	_LSSerializerFilter_MethodInfo_
};

$Object* allocate$LSSerializerFilter($Class* clazz) {
	return $of($alloc(LSSerializerFilter));
}

$Class* LSSerializerFilter::load$($String* name, bool initialize) {
	$loadClass(LSSerializerFilter, name, initialize, &_LSSerializerFilter_ClassInfo_, allocate$LSSerializerFilter);
	return class$;
}

$Class* LSSerializerFilter::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org