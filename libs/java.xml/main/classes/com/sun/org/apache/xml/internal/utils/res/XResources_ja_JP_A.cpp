#include <com/sun/org/apache/xml/internal/utils/res/XResources_ja_JP_A.h>

#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/IntArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/LongArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/StringArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $CharArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper;
using $IntArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::IntArrayWrapper;
using $LongArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::LongArrayWrapper;
using $StringArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::StringArrayWrapper;
using $XResourceBundle = ::com::sun::org::apache::xml::internal::utils::res::XResourceBundle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$FieldInfo _XResources_ja_JP_A_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ja_JP_A, _contents)},
	{}
};

$MethodInfo _XResources_ja_JP_A_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ja_JP_A, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ja_JP_A, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_ja_JP_A_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_ja_JP_A",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_ja_JP_A_FieldInfo_,
	_XResources_ja_JP_A_MethodInfo_
};

$Object* allocate$XResources_ja_JP_A($Class* clazz) {
	return $of($alloc(XResources_ja_JP_A));
}

$ObjectArray2* XResources_ja_JP_A::_contents = nullptr;

void XResources_ja_JP_A::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ja_JP_A::getContents() {
	return XResources_ja_JP_A::_contents;
}

void clinit$XResources_ja_JP_A($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_ja_JP_A::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("ja"_s)
		}),
		$$new($ObjectArray, {
			$of("alphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)12450,
				(char16_t)12452,
				(char16_t)12454,
				(char16_t)12456,
				(char16_t)12458,
				(char16_t)12459,
				(char16_t)12461,
				(char16_t)12463,
				(char16_t)12465,
				(char16_t)12467,
				(char16_t)12469,
				(char16_t)12471,
				(char16_t)12473,
				(char16_t)12475,
				(char16_t)12477,
				(char16_t)12479,
				(char16_t)12481,
				(char16_t)12484,
				(char16_t)12486,
				(char16_t)12488,
				(char16_t)12490,
				(char16_t)12491,
				(char16_t)12492,
				(char16_t)12493,
				(char16_t)12494,
				(char16_t)12495,
				(char16_t)12498,
				(char16_t)12501,
				(char16_t)12504,
				(char16_t)12507,
				(char16_t)12510,
				(char16_t)12511,
				(char16_t)12512,
				(char16_t)12513,
				(char16_t)12514,
				(char16_t)12516,
				(char16_t)12518,
				(char16_t)12520,
				(char16_t)12521,
				(char16_t)12522,
				(char16_t)12523,
				(char16_t)12524,
				(char16_t)12525,
				(char16_t)12527,
				(char16_t)12528,
				(char16_t)12529,
				(char16_t)12530,
				(char16_t)12531
			})))
		}),
		$$new($ObjectArray, {
			$of("tradAlphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				u'A',
				u'B',
				u'C',
				u'D',
				u'E',
				u'F',
				u'G',
				u'H',
				u'I',
				u'J',
				u'K',
				u'L',
				u'M',
				u'N',
				u'O',
				u'P',
				u'Q',
				u'R',
				u'S',
				u'T',
				u'U',
				u'V',
				u'W',
				u'X',
				u'Y',
				u'Z'
			})))
		}),
		$$new($ObjectArray, {
			$of("orientation"_s),
			$of("LeftToRight"_s)
		}),
		$$new($ObjectArray, {
			$of("numbering"_s),
			$of("multiplicative-additive"_s)
		}),
		$$new($ObjectArray, {
			$of("multiplierOrder"_s),
			$of("follows"_s)
		}),
		$$new($ObjectArray, {
			$of("numberGroups"_s),
			$of($$new($IntArrayWrapper, $$new($ints, {1})))
		}),
		$$new($ObjectArray, {
			$of("multiplier"_s),
			$of($$new($LongArrayWrapper, $$new($longs, {
				$Long::MAX_VALUE,
				$Long::MAX_VALUE,
				(int64_t)0x05F5E100,
				(int64_t)10000,
				(int64_t)1000,
				(int64_t)100,
				(int64_t)10
			})))
		}),
		$$new($ObjectArray, {
			$of("multiplierChar"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)20140,
				(char16_t)20806,
				(char16_t)20740,
				(char16_t)19975,
				(char16_t)21315,
				(char16_t)30334,
				(char16_t)21313
			})))
		}),
		$$new($ObjectArray, {
			$of("zero"_s),
			$of($$new($CharArrayWrapper, $$new($chars, 0)))
		}),
		$$new($ObjectArray, {
			$of("digits"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)19968,
				(char16_t)20108,
				(char16_t)19977,
				(char16_t)22235,
				(char16_t)20116,
				(char16_t)20845,
				(char16_t)19971,
				(char16_t)20843,
				(char16_t)20061
			})))
		}),
		$$new($ObjectArray, {
			$of("tables"_s),
			$of($$new($StringArrayWrapper, $$new($StringArray, {"digits"_s})))
		})
	}));
}

XResources_ja_JP_A::XResources_ja_JP_A() {
}

$Class* XResources_ja_JP_A::load$($String* name, bool initialize) {
	$loadClass(XResources_ja_JP_A, name, initialize, &_XResources_ja_JP_A_ClassInfo_, clinit$XResources_ja_JP_A, allocate$XResources_ja_JP_A);
	return class$;
}

$Class* XResources_ja_JP_A::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com