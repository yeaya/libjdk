#include <com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _PrecisionDecimalDV$XPrecisionDecimal_FieldInfo_[] = {
	{"sign", "I", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, sign)},
	{"totalDigits", "I", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, totalDigits)},
	{"intDigits", "I", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, intDigits)},
	{"fracDigits", "I", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, fracDigits)},
	{"ivalue", "Ljava/lang/String;", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, ivalue)},
	{"fvalue", "Ljava/lang/String;", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, fvalue)},
	{"pvalue", "I", nullptr, 0, $field(PrecisionDecimalDV$XPrecisionDecimal, pvalue)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PrecisionDecimalDV$XPrecisionDecimal, canonical)},
	{}
};

$MethodInfo _PrecisionDecimalDV$XPrecisionDecimal_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(PrecisionDecimalDV$XPrecisionDecimal, init$, void, $String*), "java.lang.NumberFormatException"},
	{"canonicalToStringForHashCode", "(Ljava/lang/String;Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(PrecisionDecimalDV$XPrecisionDecimal, canonicalToStringForHashCode, $String*, $String*, $String*, int32_t, int32_t)},
	{"compare", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal;)I", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, compare, int32_t, PrecisionDecimalDV$XPrecisionDecimal*)},
	{"compareDecimal", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, compareDecimal, int32_t, $String*, $String*, $String*, $String*)},
	{"compareFractionalPart", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal;)I", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, compareFractionalPart, int32_t, PrecisionDecimalDV$XPrecisionDecimal*)},
	{"compareTo", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal;)I", nullptr, $PUBLIC, $method(PrecisionDecimalDV$XPrecisionDecimal, compareTo, int32_t, PrecisionDecimalDV$XPrecisionDecimal*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV$XPrecisionDecimal, equals, bool, Object$*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PrecisionDecimalDV$XPrecisionDecimal, hashCode, int32_t)},
	{"initD", "(Ljava/lang/String;)V", nullptr, 0, $method(PrecisionDecimalDV$XPrecisionDecimal, initD, void, $String*), "java.lang.NumberFormatException"},
	{"intComp", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal;)I", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, intComp, int32_t, PrecisionDecimalDV$XPrecisionDecimal*)},
	{"isIdentical", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal;)Z", nullptr, $PUBLIC, $method(PrecisionDecimalDV$XPrecisionDecimal, isIdentical, bool, PrecisionDecimalDV$XPrecisionDecimal*)},
	{"makeCanonical", "()V", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, makeCanonical, void)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(PrecisionDecimalDV$XPrecisionDecimal, toString, $String*)},
	{"truncateTrailingZeros", "(Ljava/lang/StringBuffer;Ljava/lang/StringBuffer;)V", nullptr, $PRIVATE, $method(PrecisionDecimalDV$XPrecisionDecimal, truncateTrailingZeros, void, $StringBuffer*, $StringBuffer*)},
	{}
};

$InnerClassInfo _PrecisionDecimalDV$XPrecisionDecimal_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV$XPrecisionDecimal", "com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV", "XPrecisionDecimal", $STATIC | $FINAL},
	{}
};

$ClassInfo _PrecisionDecimalDV$XPrecisionDecimal_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV$XPrecisionDecimal",
	"java.lang.Object",
	nullptr,
	_PrecisionDecimalDV$XPrecisionDecimal_FieldInfo_,
	_PrecisionDecimalDV$XPrecisionDecimal_MethodInfo_,
	nullptr,
	nullptr,
	_PrecisionDecimalDV$XPrecisionDecimal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.PrecisionDecimalDV"
};

$Object* allocate$PrecisionDecimalDV$XPrecisionDecimal($Class* clazz) {
	return $of($alloc(PrecisionDecimalDV$XPrecisionDecimal));
}

void PrecisionDecimalDV$XPrecisionDecimal::init$($String* content) {
	this->sign = 1;
	this->totalDigits = 0;
	this->intDigits = 0;
	this->fracDigits = 0;
	$set(this, ivalue, ""_s);
	$set(this, fvalue, ""_s);
	this->pvalue = 0;
	if ($nc(content)->equals("NaN"_s)) {
		$set(this, ivalue, content);
		this->sign = 0;
	}
	bool var$1 = $nc(content)->equals("+INF"_s);
	bool var$0 = var$1 || $nc(content)->equals("INF"_s);
	if (var$0 || $nc(content)->equals("-INF"_s)) {
		$set(this, ivalue, content->charAt(0) == u'+' ? content->substring(1) : content);
		return;
	}
	initD(content);
}

void PrecisionDecimalDV$XPrecisionDecimal::initD($String* content) {
	$useLocalCurrentObjectStackCache();
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
		bool var$1 = content->charAt(intEnd) != u'.';
		bool var$0 = var$1 && content->charAt(intEnd) != u'E';
		if (var$0 && content->charAt(intEnd) != u'e') {
			$throwNew($NumberFormatException);
		}
		if (content->charAt(intEnd) == u'.') {
			fracStart = intEnd + 1;
			for (fracEnd = fracStart; fracEnd < len && $TypeValidator::isDigit(content->charAt(fracEnd)); ++fracEnd) {
			}
		} else {
			this->pvalue = $Integer::parseInt($(content->substring(intEnd + 1, len)));
		}
	}
	if (intStart == intEnd && fracStart == fracEnd) {
		$throwNew($NumberFormatException);
	}
	for (int32_t fracPos = fracStart; fracPos < fracEnd; ++fracPos) {
		if (!$TypeValidator::isDigit(content->charAt(fracPos))) {
			$throwNew($NumberFormatException);
		}
	}
	this->intDigits = intEnd - actualIntStart;
	this->fracDigits = fracEnd - fracStart;
	if (this->intDigits > 0) {
		$set(this, ivalue, content->substring(actualIntStart, intEnd));
	}
	if (this->fracDigits > 0) {
		$set(this, fvalue, content->substring(fracStart, fracEnd));
		if (fracEnd < len) {
			this->pvalue = $Integer::parseInt($(content->substring(fracEnd + 1, len)));
		}
	}
	this->totalDigits = this->intDigits + this->fracDigits;
}

$String* PrecisionDecimalDV$XPrecisionDecimal::canonicalToStringForHashCode($String* ivalue, $String* fvalue, int32_t sign, int32_t pvalue) {
	if ("NaN"_s->equals(ivalue)) {
		return "NaN"_s;
	}
	if ("INF"_s->equals(ivalue)) {
		return sign < 0 ? "-INF"_s : "INF"_s;
	}
	$var($StringBuilder, builder, $new($StringBuilder));
	int32_t ilen = $nc(ivalue)->length();
	int32_t flen0 = $nc(fvalue)->length();
	int32_t lastNonZero = 0;
	for (lastNonZero = flen0; lastNonZero > 0; --lastNonZero) {
		if (fvalue->charAt(lastNonZero - 1) != u'0') {
			break;
		}
	}
	int32_t flen = lastNonZero;
	int32_t iStart = 0;
	int32_t exponent = pvalue;
	for (iStart = 0; iStart < ilen; ++iStart) {
		if (ivalue->charAt(iStart) != u'0') {
			break;
		}
	}
	int32_t fStart = 0;
	if (iStart < ivalue->length()) {
		builder->append(sign == -1 ? "-"_s : ""_s);
		builder->append(ivalue->charAt(iStart));
		++iStart;
	} else if (flen > 0) {
		for (fStart = 0; fStart < flen; ++fStart) {
			if (fvalue->charAt(fStart) != u'0') {
				break;
			}
		}
		if (fStart < flen) {
			builder->append(sign == -1 ? "-"_s : ""_s);
			builder->append(fvalue->charAt(fStart));
			exponent -= ++fStart;
		} else {
			return "0"_s;
		}
	} else {
		return "0"_s;
	}
	if (iStart < ilen || fStart < flen) {
		builder->append(u'.');
	}
	while (iStart < ilen) {
		builder->append(ivalue->charAt(iStart++));
		++exponent;
	}
	while (fStart < flen) {
		builder->append(fvalue->charAt(fStart++));
	}
	if (exponent != 0) {
		builder->append("E"_s)->append(exponent);
	}
	return builder->toString();
}

bool PrecisionDecimalDV$XPrecisionDecimal::equals(Object$* val) {
	if ($equals(val, this)) {
		return true;
	}
	if (!($instanceOf(PrecisionDecimalDV$XPrecisionDecimal, val))) {
		return false;
	}
	$var(PrecisionDecimalDV$XPrecisionDecimal, oval, $cast(PrecisionDecimalDV$XPrecisionDecimal, val));
	return this->compareTo(oval) == (int16_t)0;
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::hashCode() {
	return $nc($(canonicalToStringForHashCode(this->ivalue, this->fvalue, this->sign, this->pvalue)))->hashCode();
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::compareFractionalPart(PrecisionDecimalDV$XPrecisionDecimal* oval) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->fvalue)->equals($nc(oval)->fvalue)) {
		return 0;
	}
	$var($StringBuffer, temp1, $new($StringBuffer, this->fvalue));
	$var($StringBuffer, temp2, $new($StringBuffer, $nc(oval)->fvalue));
	truncateTrailingZeros(temp1, temp2);
	return $nc($(temp1->toString()))->compareTo($(temp2->toString()));
}

void PrecisionDecimalDV$XPrecisionDecimal::truncateTrailingZeros($StringBuffer* fValue, $StringBuffer* otherFValue) {
	for (int32_t i = $nc(fValue)->length() - 1; i >= 0; --i) {
		if (fValue->charAt(i) == u'0') {
			fValue->deleteCharAt(i);
		} else {
			break;
		}
	}
	for (int32_t i = $nc(otherFValue)->length() - 1; i >= 0; --i) {
		if (otherFValue->charAt(i) == u'0') {
			otherFValue->deleteCharAt(i);
		} else {
			break;
		}
	}
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::compareTo(PrecisionDecimalDV$XPrecisionDecimal* val) {
	if (this->sign == 0) {
		return 2;
	}
	bool var$0 = $nc(this->ivalue)->equals("INF"_s);
	if (var$0 || $nc($nc(val)->ivalue)->equals("INF"_s)) {
		if ($nc(this->ivalue)->equals(val->ivalue)) {
			return 0;
		} else if ($nc(this->ivalue)->equals("INF"_s)) {
			return 1;
		}
		return -1;
	}
	bool var$1 = $nc(this->ivalue)->equals("-INF"_s);
	if (var$1 || $nc($nc(val)->ivalue)->equals("-INF"_s)) {
		if ($nc(this->ivalue)->equals(val->ivalue)) {
			return 0;
		} else if ($nc(this->ivalue)->equals("-INF"_s)) {
			return -1;
		}
		return 1;
	}
	if (this->sign != $nc(val)->sign) {
		return this->sign > val->sign ? (int16_t)1 : (int16_t)-1;
	}
	return this->sign * compare(val);
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::compare(PrecisionDecimalDV$XPrecisionDecimal* val) {
	$useLocalCurrentObjectStackCache();
	if (this->pvalue != 0 || $nc(val)->pvalue != 0) {
		if (this->pvalue == val->pvalue) {
			return intComp(val);
		} else {
			if (this->intDigits + this->pvalue != val->intDigits + val->pvalue) {
				return this->intDigits + this->pvalue > val->intDigits + val->pvalue ? (int16_t)1 : (int16_t)-1;
			}
			if (this->pvalue > val->pvalue) {
				int32_t expDiff = this->pvalue - val->pvalue;
				$var($StringBuffer, buffer, $new($StringBuffer, this->ivalue));
				$var($StringBuffer, fbuffer, $new($StringBuffer, this->fvalue));
				for (int32_t i = 0; i < expDiff; ++i) {
					if (i < this->fracDigits) {
						buffer->append($nc(this->fvalue)->charAt(i));
						fbuffer->deleteCharAt(i);
					} else {
						buffer->append(u'0');
					}
				}
				$var($String, var$0, buffer->toString());
				$var($String, var$1, val->ivalue);
				return compareDecimal(var$0, var$1, $(fbuffer->toString()), val->fvalue);
			} else {
				int32_t expDiff = val->pvalue - this->pvalue;
				$var($StringBuffer, buffer, $new($StringBuffer, val->ivalue));
				$var($StringBuffer, fbuffer, $new($StringBuffer, val->fvalue));
				for (int32_t i = 0; i < expDiff; ++i) {
					if (i < val->fracDigits) {
						buffer->append($nc(val->fvalue)->charAt(i));
						fbuffer->deleteCharAt(i);
					} else {
						buffer->append(u'0');
					}
				}
				$var($String, var$2, this->ivalue);
				$var($String, var$3, buffer->toString());
				$var($String, var$4, this->fvalue);
				return compareDecimal(var$2, var$3, var$4, $(fbuffer->toString()));
			}
		}
	} else {
		return intComp(val);
	}
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::intComp(PrecisionDecimalDV$XPrecisionDecimal* val) {
	if (this->intDigits != $nc(val)->intDigits) {
		return this->intDigits > val->intDigits ? (int16_t)1 : (int16_t)-1;
	}
	return compareDecimal(this->ivalue, $nc(val)->ivalue, this->fvalue, val->fvalue);
}

int32_t PrecisionDecimalDV$XPrecisionDecimal::compareDecimal($String* iValue, $String* fValue, $String* otherIValue, $String* otherFValue) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = $nc(iValue)->compareTo(otherIValue);
	if (ret != 0) {
		return ret > 0 ? (int16_t)1 : (int16_t)-1;
	}
	if ($nc(fValue)->equals(otherFValue)) {
		return 0;
	}
	$var($StringBuffer, temp1, $new($StringBuffer, fValue));
	$var($StringBuffer, temp2, $new($StringBuffer, otherFValue));
	truncateTrailingZeros(temp1, temp2);
	ret = $nc($(temp1->toString()))->compareTo($(temp2->toString()));
	return ret == 0 ? (int16_t)0 : (ret > 0 ? (int16_t)1 : (int16_t)-1);
}

$String* PrecisionDecimalDV$XPrecisionDecimal::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			makeCanonical();
		}
		return this->canonical;
	}
}

void PrecisionDecimalDV$XPrecisionDecimal::makeCanonical() {
	$set(this, canonical, "TBD by Working Group"_s);
}

bool PrecisionDecimalDV$XPrecisionDecimal::isIdentical(PrecisionDecimalDV$XPrecisionDecimal* decimal) {
	bool var$0 = $nc(this->ivalue)->equals($nc(decimal)->ivalue);
	if (var$0) {
		bool var$2 = $nc(this->ivalue)->equals("INF"_s);
		bool var$1 = var$2 || $nc(this->ivalue)->equals("-INF"_s);
		var$0 = (var$1 || $nc(this->ivalue)->equals("NaN"_s));
	}
	if (var$0) {
		return true;
	}
	bool var$3 = this->sign == $nc(decimal)->sign && this->intDigits == decimal->intDigits && this->fracDigits == decimal->fracDigits && this->pvalue == decimal->pvalue && $nc(this->ivalue)->equals(decimal->ivalue);
	if (var$3 && $nc(this->fvalue)->equals(decimal->fvalue)) {
		return true;
	}
	return false;
}

PrecisionDecimalDV$XPrecisionDecimal::PrecisionDecimalDV$XPrecisionDecimal() {
}

$Class* PrecisionDecimalDV$XPrecisionDecimal::load$($String* name, bool initialize) {
	$loadClass(PrecisionDecimalDV$XPrecisionDecimal, name, initialize, &_PrecisionDecimalDV$XPrecisionDecimal_ClassInfo_, allocate$PrecisionDecimalDV$XPrecisionDecimal);
	return class$;
}

$Class* PrecisionDecimalDV$XPrecisionDecimal::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com