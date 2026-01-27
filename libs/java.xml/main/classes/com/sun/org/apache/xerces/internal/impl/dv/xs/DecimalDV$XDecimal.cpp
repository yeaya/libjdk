#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV$XDecimal.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef ZERO

using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Short = ::java::lang::Short;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _DecimalDV$XDecimal_FieldInfo_[] = {
	{"sign", "I", nullptr, 0, $field(DecimalDV$XDecimal, sign)},
	{"totalDigits", "I", nullptr, 0, $field(DecimalDV$XDecimal, totalDigits)},
	{"intDigits", "I", nullptr, 0, $field(DecimalDV$XDecimal, intDigits)},
	{"fracDigits", "I", nullptr, 0, $field(DecimalDV$XDecimal, fracDigits)},
	{"ivalue", "Ljava/lang/String;", nullptr, 0, $field(DecimalDV$XDecimal, ivalue)},
	{"fvalue", "Ljava/lang/String;", nullptr, 0, $field(DecimalDV$XDecimal, fvalue)},
	{"integer", "Z", nullptr, 0, $field(DecimalDV$XDecimal, integer)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DecimalDV$XDecimal, canonical)},
	{}
};

$MethodInfo _DecimalDV$XDecimal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(DecimalDV$XDecimal, init$, void, $String*), "java.lang.NumberFormatException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, 0, $method(DecimalDV$XDecimal, init$, void, $String*, bool), "java.lang.NumberFormatException"},
	{"compareTo", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV$XDecimal;)I", nullptr, $PUBLIC, $method(DecimalDV$XDecimal, compareTo, int32_t, DecimalDV$XDecimal*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, equals, bool, Object$*)},
	{"getBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getBigDecimal, $BigDecimal*)},
	{"getBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getBigInteger, $BigInteger*), "java.lang.NumberFormatException"},
	{"getByte", "()B", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getByte, int8_t), "java.lang.NumberFormatException"},
	{"getInt", "()I", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getInt, int32_t), "java.lang.NumberFormatException"},
	{"getLong", "()J", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getLong, int64_t), "java.lang.NumberFormatException"},
	{"getShort", "()S", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, getShort, int16_t), "java.lang.NumberFormatException"},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DecimalDV$XDecimal, hashCode, int32_t)},
	{"initD", "(Ljava/lang/String;)V", nullptr, 0, $method(DecimalDV$XDecimal, initD, void, $String*), "java.lang.NumberFormatException"},
	{"initI", "(Ljava/lang/String;)V", nullptr, 0, $method(DecimalDV$XDecimal, initI, void, $String*), "java.lang.NumberFormatException"},
	{"intComp", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/DecimalDV$XDecimal;)I", nullptr, $PRIVATE, $method(DecimalDV$XDecimal, intComp, int32_t, DecimalDV$XDecimal*)},
	{"makeCanonical", "()V", nullptr, $PRIVATE, $method(DecimalDV$XDecimal, makeCanonical, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DecimalDV$XDecimal, toString, $String*)},
	{}
};

$InnerClassInfo _DecimalDV$XDecimal_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV$XDecimal", "com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV", "XDecimal", $STATIC | $FINAL},
	{}
};

$ClassInfo _DecimalDV$XDecimal_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV$XDecimal",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDecimal",
	_DecimalDV$XDecimal_FieldInfo_,
	_DecimalDV$XDecimal_MethodInfo_,
	nullptr,
	nullptr,
	_DecimalDV$XDecimal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DecimalDV"
};

$Object* allocate$DecimalDV$XDecimal($Class* clazz) {
	return $of($alloc(DecimalDV$XDecimal));
}

void DecimalDV$XDecimal::init$($String* content) {
	this->sign = 1;
	this->totalDigits = 0;
	this->intDigits = 0;
	this->fracDigits = 0;
	$set(this, ivalue, ""_s);
	$set(this, fvalue, ""_s);
	this->integer = false;
	initD(content);
}

void DecimalDV$XDecimal::init$($String* content, bool integer) {
	this->sign = 1;
	this->totalDigits = 0;
	this->intDigits = 0;
	this->fracDigits = 0;
	$set(this, ivalue, ""_s);
	$set(this, fvalue, ""_s);
	this->integer = false;
	if (integer) {
		initI(content);
	} else {
		initD(content);
	}
}

void DecimalDV$XDecimal::initD($String* content) {
	int32_t len = $nc(content)->length();
	if (len == 0) {
		$throwNew($NumberFormatException);
	}
	int32_t intStart = 0;
	int32_t intEnd = 0;
	int32_t fracStart = 0;
	int32_t fracEnd = 0;
	if (content->charAt(0) == u'+') {
		intStart = 1;
	} else if (content->charAt(0) == u'-') {
		intStart = 1;
		this->sign = -1;
	}
	int32_t actualIntStart = intStart;
	while (actualIntStart < len && content->charAt(actualIntStart) == u'0') {
		++actualIntStart;
	}
	for (intEnd = actualIntStart; intEnd < len && $TypeValidator::isDigit(content->charAt(intEnd)); ++intEnd) {
	}
	if (intEnd < len) {
		if (content->charAt(intEnd) != u'.') {
			$throwNew($NumberFormatException);
		}
		fracStart = intEnd + 1;
		fracEnd = len;
	}
	if (intStart == intEnd && fracStart == fracEnd) {
		$throwNew($NumberFormatException);
	}
	while (fracEnd > fracStart && content->charAt(fracEnd - 1) == u'0') {
		--fracEnd;
	}
	for (int32_t fracPos = fracStart; fracPos < fracEnd; ++fracPos) {
		if (!$TypeValidator::isDigit(content->charAt(fracPos))) {
			$throwNew($NumberFormatException);
		}
	}
	this->intDigits = intEnd - actualIntStart;
	this->fracDigits = fracEnd - fracStart;
	this->totalDigits = this->intDigits + this->fracDigits;
	if (this->intDigits > 0) {
		$set(this, ivalue, content->substring(actualIntStart, intEnd));
		if (this->fracDigits > 0) {
			$set(this, fvalue, content->substring(fracStart, fracEnd));
		}
	} else if (this->fracDigits > 0) {
		$set(this, fvalue, content->substring(fracStart, fracEnd));
	} else {
		this->sign = 0;
	}
}

void DecimalDV$XDecimal::initI($String* content) {
	int32_t len = $nc(content)->length();
	if (len == 0) {
		$throwNew($NumberFormatException);
	}
	int32_t intStart = 0;
	int32_t intEnd = 0;
	if (content->charAt(0) == u'+') {
		intStart = 1;
	} else if (content->charAt(0) == u'-') {
		intStart = 1;
		this->sign = -1;
	}
	int32_t actualIntStart = intStart;
	while (actualIntStart < len && content->charAt(actualIntStart) == u'0') {
		++actualIntStart;
	}
	for (intEnd = actualIntStart; intEnd < len && $TypeValidator::isDigit(content->charAt(intEnd)); ++intEnd) {
	}
	if (intEnd < len) {
		$throwNew($NumberFormatException);
	}
	if (intStart == intEnd) {
		$throwNew($NumberFormatException);
	}
	this->intDigits = intEnd - actualIntStart;
	this->fracDigits = 0;
	this->totalDigits = this->intDigits;
	if (this->intDigits > 0) {
		$set(this, ivalue, content->substring(actualIntStart, intEnd));
	} else {
		this->sign = 0;
	}
	this->integer = true;
}

bool DecimalDV$XDecimal::equals(Object$* val) {
	if ($equals(val, this)) {
		return true;
	}
	if (!($instanceOf(DecimalDV$XDecimal, val))) {
		return false;
	}
	$var(DecimalDV$XDecimal, oval, $cast(DecimalDV$XDecimal, val));
	if (this->sign != $nc(oval)->sign) {
		return false;
	}
	if (this->sign == 0) {
		return true;
	}
	bool var$0 = this->intDigits == $nc(oval)->intDigits && this->fracDigits == oval->fracDigits && $nc(this->ivalue)->equals(oval->ivalue);
	return var$0 && $nc(this->fvalue)->equals(oval->fvalue);
}

int32_t DecimalDV$XDecimal::hashCode() {
	int32_t hash = 7;
	hash = 17 * hash + this->sign;
	if (this->sign == 0) {
		return hash;
	}
	hash = 17 * hash + this->intDigits;
	hash = 17 * hash + this->fracDigits;
	hash = 17 * hash + $Objects::hashCode(this->ivalue);
	hash = 17 * hash + $Objects::hashCode(this->fvalue);
	return hash;
}

int32_t DecimalDV$XDecimal::compareTo(DecimalDV$XDecimal* val) {
	if (this->sign != $nc(val)->sign) {
		return this->sign > val->sign ? 1 : -1;
	}
	if (this->sign == 0) {
		return 0;
	}
	return this->sign * intComp(val);
}

int32_t DecimalDV$XDecimal::intComp(DecimalDV$XDecimal* val) {
	if (this->intDigits != $nc(val)->intDigits) {
		return this->intDigits > val->intDigits ? 1 : -1;
	}
	int32_t ret = $nc(this->ivalue)->compareTo($nc(val)->ivalue);
	if (ret != 0) {
		return ret > 0 ? 1 : -1;
	}
	ret = $nc(this->fvalue)->compareTo($nc(val)->fvalue);
	return ret == 0 ? 0 : (ret > 0 ? 1 : -1);
}

$String* DecimalDV$XDecimal::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			makeCanonical();
		}
		return this->canonical;
	}
}

void DecimalDV$XDecimal::makeCanonical() {
	if (this->sign == 0) {
		if (this->integer) {
			$set(this, canonical, "0"_s);
		} else {
			$set(this, canonical, "0.0"_s);
		}
		return;
	}
	if (this->integer && this->sign > 0) {
		$set(this, canonical, this->ivalue);
		return;
	}
	$var($StringBuilder, buffer, $new($StringBuilder, this->totalDigits + 3));
	if (this->sign == -1) {
		buffer->append(u'-');
	}
	if (this->intDigits != 0) {
		buffer->append(this->ivalue);
	} else {
		buffer->append(u'0');
	}
	if (!this->integer) {
		buffer->append(u'.');
		if (this->fracDigits != 0) {
			buffer->append(this->fvalue);
		} else {
			buffer->append(u'0');
		}
	}
	$set(this, canonical, buffer->toString());
}

$BigDecimal* DecimalDV$XDecimal::getBigDecimal() {
	if (this->sign == 0) {
		$init($BigInteger);
		return $new($BigDecimal, $BigInteger::ZERO);
	}
	return $new($BigDecimal, $(toString()));
}

$BigInteger* DecimalDV$XDecimal::getBigInteger() {
	if (this->fracDigits != 0) {
		$throwNew($NumberFormatException);
	}
	if (this->sign == 0) {
		$init($BigInteger);
		return $BigInteger::ZERO;
	}
	if (this->sign == 1) {
		return $new($BigInteger, this->ivalue);
	}
	return $new($BigInteger, $$str({"-"_s, this->ivalue}));
}

int64_t DecimalDV$XDecimal::getLong() {
	if (this->fracDigits != 0) {
		$throwNew($NumberFormatException);
	}
	if (this->sign == 0) {
		return 0;
	}
	if (this->sign == 1) {
		return $Long::parseLong(this->ivalue);
	}
	return $Long::parseLong($$str({"-"_s, this->ivalue}));
}

int32_t DecimalDV$XDecimal::getInt() {
	if (this->fracDigits != 0) {
		$throwNew($NumberFormatException);
	}
	if (this->sign == 0) {
		return 0;
	}
	if (this->sign == 1) {
		return $Integer::parseInt(this->ivalue);
	}
	return $Integer::parseInt($$str({"-"_s, this->ivalue}));
}

int16_t DecimalDV$XDecimal::getShort() {
	if (this->fracDigits != 0) {
		$throwNew($NumberFormatException);
	}
	if (this->sign == 0) {
		return (int16_t)0;
	}
	if (this->sign == 1) {
		return $Short::parseShort(this->ivalue);
	}
	return $Short::parseShort($$str({"-"_s, this->ivalue}));
}

int8_t DecimalDV$XDecimal::getByte() {
	if (this->fracDigits != 0) {
		$throwNew($NumberFormatException);
	}
	if (this->sign == 0) {
		return (int8_t)0;
	}
	if (this->sign == 1) {
		return $Byte::parseByte(this->ivalue);
	}
	return $Byte::parseByte($$str({"-"_s, this->ivalue}));
}

DecimalDV$XDecimal::DecimalDV$XDecimal() {
}

$Class* DecimalDV$XDecimal::load$($String* name, bool initialize) {
	$loadClass(DecimalDV$XDecimal, name, initialize, &_DecimalDV$XDecimal_ClassInfo_, allocate$DecimalDV$XDecimal);
	return class$;
}

$Class* DecimalDV$XDecimal::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com