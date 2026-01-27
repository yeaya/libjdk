#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$CharacterIteratorTarget.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression$ExpressionTarget.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RegularExpression.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

using $RegularExpression$ExpressionTarget = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _RegularExpression$CharacterIteratorTarget_FieldInfo_[] = {
	{"target", "Ljava/text/CharacterIterator;", nullptr, 0, $field(RegularExpression$CharacterIteratorTarget, target)},
	{}
};

$MethodInfo _RegularExpression$CharacterIteratorTarget_MethodInfo_[] = {
	{"<init>", "(Ljava/text/CharacterIterator;)V", nullptr, 0, $method(RegularExpression$CharacterIteratorTarget, init$, void, $CharacterIterator*)},
	{"charAt", "(I)C", nullptr, $FINAL, $virtualMethod(RegularExpression$CharacterIteratorTarget, charAt, char16_t, int32_t)},
	{"regionMatches", "(ZIILjava/lang/String;I)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$CharacterIteratorTarget, regionMatches, bool, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatches", "(IILjava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharacterIteratorTarget, regionMatches, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatches", "(ZIIII)Z", nullptr, $FINAL, $virtualMethod(RegularExpression$CharacterIteratorTarget, regionMatches, bool, bool, int32_t, int32_t, int32_t, int32_t)},
	{"regionMatches", "(IIII)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharacterIteratorTarget, regionMatches, bool, int32_t, int32_t, int32_t, int32_t)},
	{"regionMatchesIgnoreCase", "(IILjava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharacterIteratorTarget, regionMatchesIgnoreCase, bool, int32_t, int32_t, $String*, int32_t)},
	{"regionMatchesIgnoreCase", "(IIII)Z", nullptr, $PRIVATE | $FINAL, $method(RegularExpression$CharacterIteratorTarget, regionMatchesIgnoreCase, bool, int32_t, int32_t, int32_t, int32_t)},
	{"resetTarget", "(Ljava/text/CharacterIterator;)V", nullptr, $FINAL, $method(RegularExpression$CharacterIteratorTarget, resetTarget, void, $CharacterIterator*)},
	{}
};

$InnerClassInfo _RegularExpression$CharacterIteratorTarget_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharacterIteratorTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "CharacterIteratorTarget", $STATIC | $FINAL},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget", "com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression", "ExpressionTarget", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RegularExpression$CharacterIteratorTarget_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$CharacterIteratorTarget",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$ExpressionTarget",
	nullptr,
	_RegularExpression$CharacterIteratorTarget_FieldInfo_,
	_RegularExpression$CharacterIteratorTarget_MethodInfo_,
	nullptr,
	nullptr,
	_RegularExpression$CharacterIteratorTarget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression"
};

$Object* allocate$RegularExpression$CharacterIteratorTarget($Class* clazz) {
	return $of($alloc(RegularExpression$CharacterIteratorTarget));
}

void RegularExpression$CharacterIteratorTarget::init$($CharacterIterator* target) {
	$RegularExpression$ExpressionTarget::init$();
	$set(this, target, target);
}

void RegularExpression$CharacterIteratorTarget::resetTarget($CharacterIterator* target) {
	$set(this, target, target);
}

char16_t RegularExpression$CharacterIteratorTarget::charAt(int32_t index) {
	return $nc(this->target)->setIndex(index);
}

bool RegularExpression$CharacterIteratorTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	if (offset < 0 || limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? regionMatchesIgnoreCase(offset, limit, part, partlen) : regionMatches(offset, limit, part, partlen);
}

bool RegularExpression$CharacterIteratorTarget::regionMatches(int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	int32_t i = 0;
	while (partlen-- > 0) {
		char16_t var$0 = $nc(this->target)->setIndex(offset++);
		if (var$0 != $nc(part)->charAt(i++)) {
			return false;
		}
	}
	return true;
}

bool RegularExpression$CharacterIteratorTarget::regionMatchesIgnoreCase(int32_t offset, int32_t limit, $String* part, int32_t partlen) {
	int32_t i = 0;
	while (partlen-- > 0) {
		char16_t ch1 = $nc(this->target)->setIndex(offset++);
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

bool RegularExpression$CharacterIteratorTarget::regionMatches(bool ignoreCase, int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	if (offset < 0 || limit - offset < partlen) {
		return false;
	}
	return (ignoreCase) ? regionMatchesIgnoreCase(offset, limit, offset2, partlen) : regionMatches(offset, limit, offset2, partlen);
}

bool RegularExpression$CharacterIteratorTarget::regionMatches(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	int32_t i = offset2;
	while (partlen-- > 0) {
		char16_t var$0 = $nc(this->target)->setIndex(offset++);
		if (var$0 != $nc(this->target)->setIndex(i++)) {
			return false;
		}
	}
	return true;
}

bool RegularExpression$CharacterIteratorTarget::regionMatchesIgnoreCase(int32_t offset, int32_t limit, int32_t offset2, int32_t partlen) {
	int32_t i = offset2;
	while (partlen-- > 0) {
		char16_t ch1 = $nc(this->target)->setIndex(offset++);
		char16_t ch2 = $nc(this->target)->setIndex(i++);
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

RegularExpression$CharacterIteratorTarget::RegularExpression$CharacterIteratorTarget() {
}

$Class* RegularExpression$CharacterIteratorTarget::load$($String* name, bool initialize) {
	$loadClass(RegularExpression$CharacterIteratorTarget, name, initialize, &_RegularExpression$CharacterIteratorTarget_ClassInfo_, allocate$RegularExpression$CharacterIteratorTarget);
	return class$;
}

$Class* RegularExpression$CharacterIteratorTarget::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com