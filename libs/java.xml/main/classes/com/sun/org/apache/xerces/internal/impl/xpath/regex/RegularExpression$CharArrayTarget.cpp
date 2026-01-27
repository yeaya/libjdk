#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharArrayTarget.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <jcpp.h>

using $RegularExpression$ExpressionTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget;
using $Character = ::java::lang::Character;
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

$FieldInfo _RegularExpression$CharArrayTarget_FieldInfo_[] = {
	{"target", "[C", nullptr, 0, $field(RegularExpression$CharArrayTarget, target)},
	{}
};

$MethodInfo _RegularExpression$CharArrayTarget_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, 0, $method(RegularExpression$CharArrayTarget, init$, void, $chars*)},
	{"charAt", "(I)C", nullptr, 0, $virtualMethod(RegularExpression$CharArrayTarget, charAt, char16_t, int32_t)},
	{"regionMatches", "(ZIILjava/lang/String;I)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$CharArrayTarget, regionMatches, bool, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatches", "(IILjava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharArrayTarget, regionMatches, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatches", "(ZIIII)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$CharArrayTarget, regionMatches, bool, bool, int32_t, int32_t, int32_t, int32_t)},
	{"regionMatches", "(IIII)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharArrayTarget, regionMatches, bool, int32_t, int32_t, int32_t, int32_t)},
	{"regionMatchesIgnoreCase", "(IILjava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharArrayTarget, regionMatchesIgnoreCase, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatchesIgnoreCase", "(IIII)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharArrayTarget, regionMatchesIgnoreCase, bool, int32_t, int32_t, int32_t, int32_t)},
	{"resetTarget", "([C)V", nullptr, $FINAL, $method(RegularExpression$CharArrayTarget, resetTarget, void, $chars*)},
	{}
};

$InnerClassInfo _RegularExpression$CharArrayTarget_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharArrayTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "CharArrayTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RegularExpression$CharArrayTarget_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharArrayTarget",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget",
	nullptr,
	_RegularExpression$CharArrayTarget_FieldInfo_,
	_RegularExpression$CharArrayTarget_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$CharArrayTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$CharArrayTarget($Class* clazz) {
	return $of($alloc(RegularExpression$CharArrayTarget));
}

void RegularExpression$CharArrayTarget::init$($chars* target) {
	$RegularExpression$ExpressionTarget::init$();
	$set(this, target, target);
}

void RegularExpression$CharArrayTarget::resetTarget($chars* target) {
	$set(this, target, target);
}

char16_t RegularExpression$CharArrayTarget::charAt(int32_t index) {
	return $nc(this->target)->get(index);
}

bool RegularExpression$CharArrayTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	if (offset < 0 || limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? regionMatchesIgnoreCase(offset, limit, part, partlen) : regionMatches(offset, limit, part, partlen);
}

bool RegularExpression$CharArrayTarget::regionMatches(int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	int32_t i = 0;
	while (partlen-- > 0) {
		if ($nc(this->target)->get(offset++) != $nc(part)->charAt(i++)) {
			return false;
		}
	}
	return true;
}

bool RegularExpression$CharArrayTarget::regionMatchesIgnoreCase(int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	int32_t i = 0;
	while (partlen-- > 0) {
		char16_t ch1 = $nc(this->target)->get(offset++);
		char16_t ch2 = $nc(part)->charAt(i++);
		if (ch1 == ch2) {
			continue;
		}
		char16_t uch1 = $Character::toUpperCase(ch1);
		char16_t uch2 = $Character::toUpperCase(ch2);
		if (uch1 == uch2) {
			continue;
		}
		char16_t var$0 = $Character::toLowerCase(uch1);
		if (var$0 != $Character::toLowerCase(uch2)) {
			return false;
		}
	}
	return true;
}

bool RegularExpression$CharArrayTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	if (offset < 0 || limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? regionMatchesIgnoreCase(offset, limit, offset2, partlen) : regionMatches(offset, limit, offset2, partlen);
}

bool RegularExpression$CharArrayTarget::regionMatches(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	int32_t i = offset2;
	while (partlen-- > 0) {
		if ($nc(this->target)->get(offset++) != $nc(this->target)->get(i++)) {
			return false;
		}
	}
	return true;
}

bool RegularExpression$CharArrayTarget::regionMatchesIgnoreCase(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	int32_t i = offset2;
	while (partlen-- > 0) {
		char16_t ch1 = $nc(this->target)->get(offset++);
		char16_t ch2 = $nc(this->target)->get(i++);
		if (ch1 == ch2) {
			continue;
		}
		char16_t uch1 = $Character::toUpperCase(ch1);
		char16_t uch2 = $Character::toUpperCase(ch2);
		if (uch1 == uch2) {
			continue;
		}
		char16_t var$0 = $Character::toLowerCase(uch1);
		if (var$0 != $Character::toLowerCase(uch2)) {
			return false;
		}
	}
	return true;
}

RegularExpression$CharArrayTarget::RegularExpression$CharArrayTarget() {
}

$Class* RegularExpression$CharArrayTarget::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$CharArrayTarget, name, initialize, &_RegularExpression$CharArrayTarget_ClassInfo_, allocate$RegularExpression$CharArrayTarget);
	return class$;
}

$Class* RegularExpression$CharArrayTarget::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com