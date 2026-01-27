#include <org/w3c/dom/ranges/DocumentRange.h>

#include <org/w3c/dom/ranges/Range.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Range = ::org::w3c::dom::ranges::Range;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

$MethodInfo _DocumentRange_MethodInfo_[] = {
	{"createRange", "()Lorg/w3c/dom/ranges/Range;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentRange, createRange, $Range*)},
	{}
};

$ClassInfo _DocumentRange_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ranges.DocumentRange",
	nullptr,
	nullptr,
	nullptr,
	_DocumentRange_MethodInfo_
};

$Object* allocate$DocumentRange($Class* clazz) {
	return $of($alloc(DocumentRange));
}

$Class* DocumentRange::load$($String* name, bool initialize) {
	$loadClass(DocumentRange, name, initialize, &_DocumentRange_ClassInfo_, allocate$DocumentRange);
	return class$;
}

$Class* DocumentRange::class$ = nullptr;

			} // ranges
		} // dom
	} // w3c
} // org