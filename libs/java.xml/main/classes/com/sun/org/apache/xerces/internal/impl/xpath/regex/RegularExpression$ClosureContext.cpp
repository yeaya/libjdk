#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ClosureContext.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RegularExpression$ClosureContext_FieldInfo_[] = {
	{"offsets", "[I", nullptr, 0, $field(RegularExpression$ClosureContext, offsets)},
	{"currentIndex", "I", nullptr, 0, $field(RegularExpression$ClosureContext, currentIndex)},
	{}
};

$MethodInfo _RegularExpression$ClosureContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(RegularExpression$ClosureContext, init$, void)},
	{"addOffset", "(I)V", nullptr, 0, $method(RegularExpression$ClosureContext, addOffset, void, int32_t)},
	{"contains", "(I)Z", nullptr, 0, $method(RegularExpression$ClosureContext, contains, bool, int32_t)},
	{"expandOffsets", "()[I", nullptr, $PRIVATE, $method(RegularExpression$ClosureContext, expandOffsets, $ints*)},
	{"reset", "()V", nullptr, 0, $method(RegularExpression$ClosureContext, reset, void)},
	{}
};

$InnerClassInfo _RegularExpression$ClosureContext_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ClosureContext", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ClosureContext", $STATIC | $FINAL},
	{}
};

$ClassInfo _RegularExpression$ClosureContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ClosureContext",
	"java.lang.Object",
	nullptr,
	_RegularExpression$ClosureContext_FieldInfo_,
	_RegularExpression$ClosureContext_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$ClosureContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$ClosureContext($Class* clazz) {
	return $of($alloc(RegularExpression$ClosureContext));
}

void RegularExpression$ClosureContext::init$() {
	$set(this, offsets, $new($ints, 4));
	this->currentIndex = 0;
}

bool RegularExpression$ClosureContext::contains(int32_t offset) {
	for (int32_t i = 0; i < this->currentIndex; ++i) {
		if ($nc(this->offsets)->get(i) == offset) {
			return true;
		}
	}
	return false;
}

void RegularExpression$ClosureContext::reset() {
	this->currentIndex = 0;
}

void RegularExpression$ClosureContext::addOffset(int32_t offset) {
	if (this->currentIndex == $nc(this->offsets)->length) {
		$set(this, offsets, expandOffsets());
	}
	$nc(this->offsets)->set(this->currentIndex++, offset);
}

$ints* RegularExpression$ClosureContext::expandOffsets() {
	int32_t len = $nc(this->offsets)->length;
	int32_t newLen = len << 1;
	$var($ints, newOffsets, $new($ints, newLen));
	$System::arraycopy(this->offsets, 0, newOffsets, 0, this->currentIndex);
	return newOffsets;
}

RegularExpression$ClosureContext::RegularExpression$ClosureContext() {
}

$Class* RegularExpression$ClosureContext::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$ClosureContext, name, initialize, &_RegularExpression$ClosureContext_ClassInfo_, allocate$RegularExpression$ClosureContext);
	return class$;
}

$Class* RegularExpression$ClosureContext::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com