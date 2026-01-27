#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV$XFloat.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $DoubleDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _FloatDV$XFloat_FieldInfo_[] = {
	{"value", "F", nullptr, $PRIVATE | $FINAL, $field(FloatDV$XFloat, value)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FloatDV$XFloat, canonical)},
	{}
};

$MethodInfo _FloatDV$XFloat_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FloatDV$XFloat, init$, void, $String*), "java.lang.NumberFormatException"},
	{"compareTo", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV$XFloat;)I", nullptr, $PRIVATE, $method(FloatDV$XFloat, compareTo, int32_t, FloatDV$XFloat*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FloatDV$XFloat, equals, bool, Object$*)},
	{"getValue", "()F", nullptr, $PUBLIC, $virtualMethod(FloatDV$XFloat, getValue, float)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FloatDV$XFloat, hashCode, int32_t)},
	{"isIdentical", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/FloatDV$XFloat;)Z", nullptr, $PUBLIC, $method(FloatDV$XFloat, isIdentical, bool, FloatDV$XFloat*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(FloatDV$XFloat, toString, $String*)},
	{}
};

$InnerClassInfo _FloatDV$XFloat_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV$XFloat", "com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV", "XFloat", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FloatDV$XFloat_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV$XFloat",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSFloat",
	_FloatDV$XFloat_FieldInfo_,
	_FloatDV$XFloat_MethodInfo_,
	nullptr,
	nullptr,
	_FloatDV$XFloat_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.FloatDV"
};

$Object* allocate$FloatDV$XFloat($Class* clazz) {
	return $of($alloc(FloatDV$XFloat));
}

void FloatDV$XFloat::init$($String* s) {
	if ($DoubleDV::isPossibleFP(s)) {
		this->value = $Float::parseFloat(s);
	} else if ($nc(s)->equals("INF"_s)) {
		$init($Float);
		this->value = $Float::POSITIVE_INFINITY;
	} else if (s->equals("-INF"_s)) {
		$init($Float);
		this->value = $Float::NEGATIVE_INFINITY;
	} else if (s->equals("NaN"_s)) {
		$init($Float);
		this->value = $Float::NaN;
	} else {
		$throwNew($NumberFormatException, s);
	}
}

bool FloatDV$XFloat::equals(Object$* val) {
	if ($equals(val, this)) {
		return true;
	}
	if (!($instanceOf(FloatDV$XFloat, val))) {
		return false;
	}
	$var(FloatDV$XFloat, oval, $cast(FloatDV$XFloat, val));
	if (this->value == $nc(oval)->value) {
		return true;
	}
	if (this->value != this->value && $nc(oval)->value != oval->value) {
		return true;
	}
	return false;
}

int32_t FloatDV$XFloat::hashCode() {
	return (this->value == 0.0f) ? 0 : $Float::floatToIntBits(this->value);
}

bool FloatDV$XFloat::isIdentical(FloatDV$XFloat* val) {
	if (val == this) {
		return true;
	}
	if (this->value == $nc(val)->value) {
		bool var$0 = this->value != 0.0f;
		if (!var$0) {
			int32_t var$1 = $Float::floatToIntBits(this->value);
			var$0 = (var$1 == $Float::floatToIntBits(val->value));
		}
		return (var$0);
	}
	if (this->value != this->value && $nc(val)->value != val->value) {
		return true;
	}
	return false;
}

int32_t FloatDV$XFloat::compareTo(FloatDV$XFloat* val) {
	float oval = $nc(val)->value;
	if (this->value < oval) {
		return -1;
	}
	if (this->value > oval) {
		return 1;
	}
	if (this->value == oval) {
		return 0;
	}
	if (this->value != this->value) {
		if (oval != oval) {
			return 0;
		}
		return 2;
	}
	return 2;
}

$String* FloatDV$XFloat::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			$init($Float);
			if (this->value == $Float::POSITIVE_INFINITY) {
				$set(this, canonical, "INF"_s);
			} else {
				if (this->value == $Float::NEGATIVE_INFINITY) {
					$set(this, canonical, "-INF"_s);
				} else if (this->value != this->value) {
					$set(this, canonical, "NaN"_s);
				} else if (this->value == 0) {
					$set(this, canonical, "0.0E1"_s);
				} else {
					$set(this, canonical, $Float::toString(this->value));
					if ($nc(this->canonical)->indexOf((int32_t)u'E') == -1) {
						int32_t len = $nc(this->canonical)->length();
						$var($chars, chars, $new($chars, len + 3));
						$nc(this->canonical)->getChars(0, len, chars, 0);
						int32_t edp = chars->get(0) == u'-' ? 2 : 1;
						if (this->value >= 1 || this->value <= -1) {
							int32_t dp = $nc(this->canonical)->indexOf((int32_t)u'.');
							for (int32_t i = dp; i > edp; --i) {
								chars->set(i, chars->get(i - 1));
							}
							chars->set(edp, u'.');
							while (chars->get(len - 1) == u'0') {
								--len;
							}
							if (chars->get(len - 1) == u'.') {
								++len;
							}
							chars->set(len++, u'E');
							int32_t shift = dp - edp;
							chars->set(len++, (char16_t)(shift + u'0'));
						} else {
							int32_t nzp = edp + 1;
							while (chars->get(nzp) == u'0') {
								++nzp;
							}
							chars->set(edp - 1, chars->get(nzp));
							chars->set(edp, u'.');
							{
								int32_t i = nzp + 1;
								int32_t j = edp + 1;
								for (; i < len; ++i, ++j) {
									chars->set(j, chars->get(i));
								}
							}
							len -= nzp - edp;
							if (len == edp + 1) {
								chars->set(len++, u'0');
							}
							chars->set(len++, u'E');
							chars->set(len++, u'-');
							int32_t shift = nzp - edp;
							chars->set(len++, (char16_t)(shift + u'0'));
						}
						$set(this, canonical, $new($String, chars, 0, len));
					}
				}
			}
		}
		return this->canonical;
	}
}

float FloatDV$XFloat::getValue() {
	return this->value;
}

FloatDV$XFloat::FloatDV$XFloat() {
}

$Class* FloatDV$XFloat::load$($String* name, bool initialize) {
	$loadClass(FloatDV$XFloat, name, initialize, &_FloatDV$XFloat_ClassInfo_, allocate$FloatDV$XFloat);
	return class$;
}

$Class* FloatDV$XFloat::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com