#include <com/sun/org/apache/xalan/internal/lib/ExsltMath.h>

#include <com/sun/org/apache/xalan/internal/lib/ExsltBase.h>
#include <com/sun/org/apache/xpath/internal/NodeSet.h>
#include <java/lang/Math.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef E
#undef LN2
#undef LOG2E
#undef MAX_VALUE
#undef PI
#undef SQRRT2
#undef SQRT1_2

using $ExsltBase = ::com::sun::org::apache::xalan::internal::lib::ExsltBase;
using $NodeSet = ::com::sun::org::apache::xpath::internal::NodeSet;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace lib {

$FieldInfo _ExsltMath_FieldInfo_[] = {
	{"PI", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, PI)},
	{"E", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, E)},
	{"SQRRT2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, SQRRT2)},
	{"LN2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, LN2)},
	{"LN10", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, LN10)},
	{"LOG2E", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, LOG2E)},
	{"SQRT1_2", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExsltMath, SQRT1_2)},
	{}
};

$MethodInfo _ExsltMath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExsltMath, init$, void)},
	{"abs", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, abs, double, double)},
	{"acos", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, acos, double, double)},
	{"asin", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, asin, double, double)},
	{"atan", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, atan, double, double)},
	{"atan2", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, atan2, double, double, double)},
	{"constant", "(Ljava/lang/String;D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, constant, double, $String*, double)},
	{"cos", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, cos, double, double)},
	{"exp", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, exp, double, double)},
	{"highest", "(Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, highest, $NodeList*, $NodeList*)},
	{"log", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, log, double, double)},
	{"lowest", "(Lorg/w3c/dom/NodeList;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, lowest, $NodeList*, $NodeList*)},
	{"max", "(Lorg/w3c/dom/NodeList;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, max, double, $NodeList*)},
	{"min", "(Lorg/w3c/dom/NodeList;)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, min, double, $NodeList*)},
	{"power", "(DD)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, power, double, double, double)},
	{"random", "()D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, random, double)},
	{"sin", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, sin, double, double)},
	{"sqrt", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, sqrt, double, double)},
	{"tan", "(D)D", nullptr, $PUBLIC | $STATIC, $staticMethod(ExsltMath, tan, double, double)},
	{}
};

$ClassInfo _ExsltMath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.lib.ExsltMath",
	"com.sun.org.apache.xalan.internal.lib.ExsltBase",
	nullptr,
	_ExsltMath_FieldInfo_,
	_ExsltMath_MethodInfo_
};

$Object* allocate$ExsltMath($Class* clazz) {
	return $of($alloc(ExsltMath));
}

$String* ExsltMath::PI = nullptr;
$String* ExsltMath::E = nullptr;
$String* ExsltMath::SQRRT2 = nullptr;
$String* ExsltMath::LN2 = nullptr;
$String* ExsltMath::LN10 = nullptr;
$String* ExsltMath::LOG2E = nullptr;
$String* ExsltMath::SQRT1_2 = nullptr;

void ExsltMath::init$() {
	$ExsltBase::init$();
}

double ExsltMath::max($NodeList* nl) {
	$init(ExsltMath);
	$useLocalCurrentObjectStackCache();
	if (nl == nullptr || $nc(nl)->getLength() == 0) {
		$init($Double);
		return $Double::NaN;
	}
	$init($Double);
	double m = -$Double::MAX_VALUE;
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, n, nl->item(i));
		double d = toNumber(n);
		if ($Double::isNaN(d)) {
			return $Double::NaN;
		} else if (d > m) {
			m = d;
		}
	}
	return m;
}

double ExsltMath::min($NodeList* nl) {
	$init(ExsltMath);
	$useLocalCurrentObjectStackCache();
	if (nl == nullptr || $nc(nl)->getLength() == 0) {
		$init($Double);
		return $Double::NaN;
	}
	$init($Double);
	double m = $Double::MAX_VALUE;
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, n, nl->item(i));
		double d = toNumber(n);
		if ($Double::isNaN(d)) {
			return $Double::NaN;
		} else if (d < m) {
			m = d;
		}
	}
	return m;
}

$NodeList* ExsltMath::highest($NodeList* nl) {
	$init(ExsltMath);
	$useLocalCurrentObjectStackCache();
	double maxValue = max(nl);
	$var($NodeSet, highNodes, $new($NodeSet));
	highNodes->setShouldCacheNodes(true);
	if ($Double::isNaN(maxValue)) {
		return highNodes;
	}
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, n, nl->item(i));
		double d = toNumber(n);
		if (d == maxValue) {
			highNodes->addElement(n);
		}
	}
	return highNodes;
}

$NodeList* ExsltMath::lowest($NodeList* nl) {
	$init(ExsltMath);
	$useLocalCurrentObjectStackCache();
	double minValue = min(nl);
	$var($NodeSet, lowNodes, $new($NodeSet));
	lowNodes->setShouldCacheNodes(true);
	if ($Double::isNaN(minValue)) {
		return lowNodes;
	}
	for (int32_t i = 0; i < $nc(nl)->getLength(); ++i) {
		$var($Node, n, nl->item(i));
		double d = toNumber(n);
		if (d == minValue) {
			lowNodes->addElement(n);
		}
	}
	return lowNodes;
}

double ExsltMath::abs(double num) {
	$init(ExsltMath);
	return $Math::abs(num);
}

double ExsltMath::acos(double num) {
	$init(ExsltMath);
	return $Math::acos(num);
}

double ExsltMath::asin(double num) {
	$init(ExsltMath);
	return $Math::asin(num);
}

double ExsltMath::atan(double num) {
	$init(ExsltMath);
	return $Math::atan(num);
}

double ExsltMath::atan2(double num1, double num2) {
	$init(ExsltMath);
	return $Math::atan2(num1, num2);
}

double ExsltMath::cos(double num) {
	$init(ExsltMath);
	return $Math::cos(num);
}

double ExsltMath::exp(double num) {
	$init(ExsltMath);
	return $Math::exp(num);
}

double ExsltMath::log(double num) {
	$init(ExsltMath);
	return $Math::log(num);
}

double ExsltMath::power(double num1, double num2) {
	$init(ExsltMath);
	return $Math::pow(num1, num2);
}

double ExsltMath::random() {
	$init(ExsltMath);
	return $Math::random();
}

double ExsltMath::sin(double num) {
	$init(ExsltMath);
	return $Math::sin(num);
}

double ExsltMath::sqrt(double num) {
	$init(ExsltMath);
	return $Math::sqrt(num);
}

double ExsltMath::tan(double num) {
	$init(ExsltMath);
	return $Math::tan(num);
}

double ExsltMath::constant($String* name, double precision) {
	$init(ExsltMath);
	$var($String, value, nullptr);
	if ($nc(name)->equals("PI"_s)) {
		$assign(value, ExsltMath::PI);
	} else if (name->equals("E"_s)) {
		$assign(value, ExsltMath::E);
	} else if (name->equals("SQRRT2"_s)) {
		$assign(value, ExsltMath::SQRRT2);
	} else if (name->equals("LN2"_s)) {
		$assign(value, ExsltMath::LN2);
	} else if (name->equals("LN10"_s)) {
		$assign(value, ExsltMath::LN10);
	} else if (name->equals("LOG2E"_s)) {
		$assign(value, ExsltMath::LOG2E);
	} else if (name->equals("SQRT1_2"_s)) {
		$assign(value, ExsltMath::SQRT1_2);
	}
	if (value != nullptr) {
		int32_t bits = $cast(int32_t, precision);
		if (bits <= value->length()) {
			$assign(value, value->substring(0, bits));
		}
		return $Double::parseDouble(value);
	} else {
		$init($Double);
		return $Double::NaN;
	}
}

void clinit$ExsltMath($Class* class$) {
	$assignStatic(ExsltMath::PI, "3.1415926535897932384626433832795028841971693993751"_s);
	$assignStatic(ExsltMath::E, "2.71828182845904523536028747135266249775724709369996"_s);
	$assignStatic(ExsltMath::SQRRT2, "1.41421356237309504880168872420969807856967187537694"_s);
	$assignStatic(ExsltMath::LN2, "0.69314718055994530941723212145817656807550013436025"_s);
	$assignStatic(ExsltMath::LN10, "2.302585092994046"_s);
	$assignStatic(ExsltMath::LOG2E, "1.4426950408889633"_s);
	$assignStatic(ExsltMath::SQRT1_2, "0.7071067811865476"_s);
}

ExsltMath::ExsltMath() {
}

$Class* ExsltMath::load$($String* name, bool initialize) {
	$loadClass(ExsltMath, name, initialize, &_ExsltMath_ClassInfo_, clinit$ExsltMath, allocate$ExsltMath);
	return class$;
}

$Class* ExsltMath::class$ = nullptr;

						} // lib
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com