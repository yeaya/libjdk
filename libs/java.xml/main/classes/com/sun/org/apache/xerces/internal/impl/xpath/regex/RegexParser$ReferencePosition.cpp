#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser$ReferencePosition.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegexParser.h>
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

$FieldInfo _RegexParser$ReferencePosition_FieldInfo_[] = {
	{"refNumber", "I", nullptr, 0, $field(RegexParser$ReferencePosition, refNumber)},
	{"position", "I", nullptr, 0, $field(RegexParser$ReferencePosition, position)},
	{}
};

$MethodInfo _RegexParser$ReferencePosition_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(RegexParser$ReferencePosition, init$, void, int32_t, int32_t)},
	{}
};

$InnerClassInfo _RegexParser$ReferencePosition_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser$ReferencePosition", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser", "ReferencePosition", $STATIC},
	{}
};

$ClassInfo _RegexParser$ReferencePosition_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser$ReferencePosition",
	"java.lang.Object",
	nullptr,
	_RegexParser$ReferencePosition_FieldInfo_,
	_RegexParser$ReferencePosition_MethodInfo_,
	nullptr,
	nullptr,
	_RegexParser$ReferencePosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegexParser"
};

$Object* allocate$RegexParser$ReferencePosition($Class* clazz) {
	return $of($alloc(RegexParser$ReferencePosition));
}

void RegexParser$ReferencePosition::init$(int32_t n, int32_t pos) {
	this->refNumber = n;
	this->position = pos;
}

RegexParser$ReferencePosition::RegexParser$ReferencePosition() {
}

$Class* RegexParser$ReferencePosition::load$($String* name, bool initialize) {
	$loadClass(RegexParser$ReferencePosition, name, initialize, &_RegexParser$ReferencePosition_ClassInfo_, allocate$RegexParser$ReferencePosition);
	return class$;
}

$Class* RegexParser$ReferencePosition::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com