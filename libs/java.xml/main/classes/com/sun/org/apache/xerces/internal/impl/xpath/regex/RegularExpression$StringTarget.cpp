#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$StringTarget.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <jcpp.h>

using $RegularExpression$ExpressionTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget;
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

$FieldInfo _RegularExpression$StringTarget_FieldInfo_[] = {
	{"target", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RegularExpression$StringTarget, target)},
	{}
};

$MethodInfo _RegularExpression$StringTarget_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(RegularExpression$StringTarget, init$, void, $String*)},
	{"charAt", "(I)C", nullptr, $FINAL, $virtualMethod(RegularExpression$StringTarget, charAt, char16_t, int32_t)},
	{"regionMatches", "(ZIILjava/lang/String;I)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$StringTarget, regionMatches, bool, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatches", "(ZIIII)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$StringTarget, regionMatches, bool, bool, int32_t, int32_t, int32_t, int32_t)},
	{"resetTarget", "(Ljava/lang/String;)V", nullptr, $FINAL, $method(RegularExpression$StringTarget, resetTarget, void, $String*)},
	{}
};

$InnerClassInfo _RegularExpression$StringTarget_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$StringTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "StringTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RegularExpression$StringTarget_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$StringTarget",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget",
	nullptr,
	_RegularExpression$StringTarget_FieldInfo_,
	_RegularExpression$StringTarget_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$StringTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$StringTarget($Class* clazz) {
	return $of($alloc(RegularExpression$StringTarget));
}

void RegularExpression$StringTarget::init$($String* target) {
	$RegularExpression$ExpressionTarget::init$();
	$set(this, target, target);
}

void RegularExpression$StringTarget::resetTarget($String* target) {
	$set(this, target, target);
}

char16_t RegularExpression$StringTarget::charAt(int32_t index) {
	return $nc(this->target)->charAt(index);
}

bool RegularExpression$StringTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	if (limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? $nc(this->target)->regionMatches(true, offset, part, 0, partlen) : $nc(this->target)->regionMatches(offset, part, 0, partlen);
}

bool RegularExpression$StringTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	if (limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? $nc(this->target)->regionMatches(true, offset, this->target, offset2, partlen) : $nc(this->target)->regionMatches(offset, this->target, offset2, partlen);
}

RegularExpression$StringTarget::RegularExpression$StringTarget() {
}

$Class* RegularExpression$StringTarget::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$StringTarget, name, initialize, &_RegularExpression$StringTarget_ClassInfo_, allocate$RegularExpression$StringTarget);
	return class$;
}

$Class* RegularExpression$StringTarget::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com