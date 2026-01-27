#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationDayTimeImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/datatype/DurationImpl.h>
#include <java/math/BigDecimal.h>
#include <java/math/BigInteger.h>
#include <javax/xml/datatype/DatatypeConstants.h>
#include <jcpp.h>

#undef FIELD_UNDEFINED
#undef ONE

using $DurationImpl = ::com::sun::org::apache::xerces::internal::jaxp::datatype::DurationImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $BigInteger = ::java::math::BigInteger;
using $DatatypeConstants = ::javax::xml::datatype::DatatypeConstants;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace datatype {

$FieldInfo _DurationDayTimeImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DurationDayTimeImpl, serialVersionUID)},
	{}
};

$MethodInfo _DurationDayTimeImpl_MethodInfo_[] = {
	{"<init>", "(ZLjava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC, $method(DurationDayTimeImpl, init$, void, bool, $BigInteger*, $BigInteger*, $BigInteger*, $BigDecimal*)},
	{"<init>", "(ZIIII)V", nullptr, $PUBLIC, $method(DurationDayTimeImpl, init$, void, bool, int32_t, int32_t, int32_t, int32_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(DurationDayTimeImpl, init$, void, $String*)},
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(DurationDayTimeImpl, init$, void, int64_t)},
	{"convertToCanonicalDayTime", "()V", nullptr, $PRIVATE, $method(DurationDayTimeImpl, convertToCanonicalDayTime, void)},
	{"getValue", "()F", nullptr, $PUBLIC, $virtualMethod(DurationDayTimeImpl, getValue, float)},
	{}
};

$ClassInfo _DurationDayTimeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationDayTimeImpl",
	"com.sun.org.apache.xerces.internal.jaxp.datatype.DurationImpl",
	nullptr,
	_DurationDayTimeImpl_FieldInfo_,
	_DurationDayTimeImpl_MethodInfo_
};

$Object* allocate$DurationDayTimeImpl($Class* clazz) {
	return $of($alloc(DurationDayTimeImpl));
}

void DurationDayTimeImpl::init$(bool isPositive, $BigInteger* days, $BigInteger* hours, $BigInteger* minutes, $BigDecimal* seconds) {
	$DurationImpl::init$(isPositive, ($BigInteger*)nullptr, ($BigInteger*)nullptr, days, hours, minutes, seconds);
	convertToCanonicalDayTime();
}

void DurationDayTimeImpl::init$(bool isPositive, int32_t days, int32_t hours, int32_t minutes, int32_t seconds) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = isPositive;
	$var($BigInteger, var$1, wrap(days));
	$var($BigInteger, var$2, wrap(hours));
	$var($BigInteger, var$3, wrap(minutes));
	DurationDayTimeImpl::init$(var$0, var$1, var$2, var$3, (seconds != $DatatypeConstants::FIELD_UNDEFINED ? $$new($BigDecimal, $($String::valueOf(seconds))) : ($BigDecimal*)nullptr));
}

void DurationDayTimeImpl::init$($String* lexicalRepresentation) {
	$DurationImpl::init$(lexicalRepresentation);
	bool var$0 = getYears() > 0;
	if (var$0 || getMonths() > 0) {
		$throwNew($IllegalArgumentException, $$str({"Trying to create an xdt:dayTimeDuration with an invalid lexical representation of \""_s, lexicalRepresentation, "\", data model requires a format PnDTnHnMnS."_s}));
	}
	convertToCanonicalDayTime();
}

void DurationDayTimeImpl::init$(int64_t durationInMilliseconds) {
	$DurationImpl::init$(durationInMilliseconds);
	convertToCanonicalDayTime();
	$set(this, years, nullptr);
	$set(this, months, nullptr);
}

float DurationDayTimeImpl::getValue() {
	float sec = (this->seconds == nullptr) ? (float)0 : $nc(this->seconds)->floatValue();
	int32_t var$1 = (getDays() * 24);
	int32_t var$0 = ((var$1 + getHours()) * 60);
	return ((var$0 + getMinutes()) * 60) + sec;
}

void DurationDayTimeImpl::convertToCanonicalDayTime() {
	$useLocalCurrentObjectStackCache();
	while (getSeconds() >= 60) {
		$set(this, seconds, $nc(this->seconds)->subtract($($BigDecimal::valueOf((int64_t)60))));
		$init($BigInteger);
		$set(this, minutes, $nc($($BigInteger::valueOf((int64_t)getMinutes())))->add($BigInteger::ONE));
	}
	while (getMinutes() >= 60) {
		$set(this, minutes, $nc(this->minutes)->subtract($($BigInteger::valueOf((int64_t)60))));
		$set(this, hours, $nc($($BigInteger::valueOf((int64_t)getHours())))->add($BigInteger::ONE));
	}
	while (getHours() >= 24) {
		$set(this, hours, $nc(this->hours)->subtract($($BigInteger::valueOf((int64_t)24))));
		$set(this, days, $nc($($BigInteger::valueOf((int64_t)getDays())))->add($BigInteger::ONE));
	}
}

DurationDayTimeImpl::DurationDayTimeImpl() {
}

$Class* DurationDayTimeImpl::load$($String* name, bool initialize) {
	$loadClass(DurationDayTimeImpl, name, initialize, &_DurationDayTimeImpl_ClassInfo_, allocate$DurationDayTimeImpl);
	return class$;
}

$Class* DurationDayTimeImpl::class$ = nullptr;

							} // datatype
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com