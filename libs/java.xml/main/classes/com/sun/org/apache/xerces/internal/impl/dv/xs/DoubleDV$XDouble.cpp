#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV$XDouble.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV.h>
#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

#undef NEGATIVE_INFINITY
#undef POSITIVE_INFINITY

using $DoubleDV = ::com::sun::org::apache::xerces::internal::impl::dv::xs::DoubleDV;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _DoubleDV$XDouble_FieldInfo_[] = {
	{"value", "D", nullptr, $PRIVATE | $FINAL, $field(DoubleDV$XDouble, value)},
	{"canonical", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DoubleDV$XDouble, canonical)},
	{}
};

$MethodInfo _DoubleDV$XDouble_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DoubleDV$XDouble, init$, void, $String*), "java.lang.NumberFormatException"},
	{"compareTo", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV$XDouble;)I", nullptr, $PRIVATE, $method(DoubleDV$XDouble, compareTo, int32_t, DoubleDV$XDouble*)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DoubleDV$XDouble, equals, bool, Object$*)},
	{"getValue", "()D", nullptr, $PUBLIC, $virtualMethod(DoubleDV$XDouble, getValue, double)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DoubleDV$XDouble, hashCode, int32_t)},
	{"isIdentical", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/DoubleDV$XDouble;)Z", nullptr, $PUBLIC, $method(DoubleDV$XDouble, isIdentical, bool, DoubleDV$XDouble*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DoubleDV$XDouble, toString, $String*)},
	{}
};

$InnerClassInfo _DoubleDV$XDouble_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV$XDouble", "com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV", "XDouble", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DoubleDV$XDouble_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV$XDouble",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDouble",
	_DoubleDV$XDouble_FieldInfo_,
	_DoubleDV$XDouble_MethodInfo_,
	nullptr,
	nullptr,
	_DoubleDV$XDouble_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.DoubleDV"
};

$Object* allocate$DoubleDV$XDouble($Class* clazz) {
	return $of($alloc(DoubleDV$XDouble));
}

void DoubleDV$XDouble::init$($String* s) {
	if ($DoubleDV::isPossibleFP(s)) {
		this->value = $Double::parseDouble(s);
	} else if ($nc(s)->equals("INF"_s)) {
		$init($Double);
		this->value = $Double::POSITIVE_INFINITY;
	} else if (s->equals("-INF"_s)) {
		$init($Double);
		this->value = $Double::NEGATIVE_INFINITY;
	} else if (s->equals("NaN"_s)) {
		$init($Double);
		this->value = $Double::NaN;
	} else {
		$throwNew($NumberFormatException, s);
	}
}

bool DoubleDV$XDouble::equals(Object$* val) {
	if ($equals(val, this)) {
		return true;
	}
	if (!($instanceOf(DoubleDV$XDouble, val))) {
		return false;
	}
	$var(DoubleDV$XDouble, oval, $cast(DoubleDV$XDouble, val));
	if (this->value == $nc(oval)->value) {
		return true;
	}
	if (this->value != this->value && $nc(oval)->value != oval->value) {
		return true;
	}
	return false;
}

int32_t DoubleDV$XDouble::hashCode() {
	if (this->value == 0.0) {
		return 0;
	}
	int64_t v = $Double::doubleToLongBits(this->value);
	return (int32_t)(v ^ ((int64_t)((uint64_t)v >> 32)));
}

bool DoubleDV$XDouble::isIdentical(DoubleDV$XDouble* val) {
	if (val == this) {
		return true;
	}
	if (this->value == $nc(val)->value) {
		bool var$0 = this->value != 0.0;
		if (!var$0) {
			int64_t var$1 = $Double::doubleToLongBits(this->value);
			var$0 = (var$1 == $Double::doubleToLongBits(val->value));
		}
		return (var$0);
	}
	if (this->value != this->value && $nc(val)->value != val->value) {
		return true;
	}
	return false;
}

int32_t DoubleDV$XDouble::compareTo(DoubleDV$XDouble* val) {
	double oval = $nc(val)->value;
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

$String* DoubleDV$XDouble::toString() {
	$synchronized(this) {
		if (this->canonical == nullptr) {
			$init($Double);
			if (this->value == $Double::POSITIVE_INFINITY) {
				$set(this, canonical, "INF"_s);
			} else {
				if (this->value == $Double::NEGATIVE_INFINITY) {
					$set(this, canonical, "-INF"_s);
				} else if (this->value != this->value) {
					$set(this, canonical, "NaN"_s);
				} else if (this->value == 0) {
					$set(this, canonical, "0.0E1"_s);
				} else {
					$set(this, canonical, $Double::toString(this->value));
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

double DoubleDV$XDouble::getValue() {
	return this->value;
}

DoubleDV$XDouble::DoubleDV$XDouble() {
}

$Class* DoubleDV$XDouble::load$($String* name, bool initialize) {
	$loadClass(DoubleDV$XDouble, name, initialize, &_DoubleDV$XDouble_ClassInfo_, allocate$DoubleDV$XDouble);
	return class$;
}

$Class* DoubleDV$XDouble::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com