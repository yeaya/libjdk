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

$ObjectArray2* XResources_ja_JP_A::_contents = nullptr;

void XResources_ja_JP_A::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ja_JP_A::getContents() {
	return XResources_ja_JP_A::_contents;
}

void XResources_ja_JP_A::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_ja_JP_A::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ui_language"_s,
			"ja"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"ja"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"ja"_s
		}),
		$$new($ObjectArray, {
			"alphabet"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				12450,
				12452,
				12454,
				12456,
				12458,
				12459,
				12461,
				12463,
				12465,
				12467,
				12469,
				12471,
				12473,
				12475,
				12477,
				12479,
				12481,
				12484,
				12486,
				12488,
				12490,
				12491,
				12492,
				12493,
				12494,
				12495,
				12498,
				12501,
				12504,
				12507,
				12510,
				12511,
				12512,
				12513,
				12514,
				12516,
				12518,
				12520,
				12521,
				12522,
				12523,
				12524,
				12525,
				12527,
				12528,
				12529,
				12530,
				12531
			}))
		}),
		$$new($ObjectArray, {
			"tradAlphabet"_s,
			$$new($CharArrayWrapper, $$new($chars, {
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
			}))
		}),
		$$new($ObjectArray, {
			"orientation"_s,
			"LeftToRight"_s
		}),
		$$new($ObjectArray, {
			"numbering"_s,
			"multiplicative-additive"_s
		}),
		$$new($ObjectArray, {
			"multiplierOrder"_s,
			"follows"_s
		}),
		$$new($ObjectArray, {
			"numberGroups"_s,
			$$new($IntArrayWrapper, $$new($ints, {1}))
		}),
		$$new($ObjectArray, {
			"multiplier"_s,
			$$new($LongArrayWrapper, $$new($longs, {
				$Long::MAX_VALUE,
				$Long::MAX_VALUE,
				100000000,
				10000,
				1000,
				100,
				10
			}))
		}),
		$$new($ObjectArray, {
			"multiplierChar"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				20140,
				20806,
				20740,
				19975,
				21315,
				30334,
				21313
			}))
		}),
		$$new($ObjectArray, {
			"zero"_s,
			$$new($CharArrayWrapper, $$new($chars, 0))
		}),
		$$new($ObjectArray, {
			"digits"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				19968,
				20108,
				19977,
				22235,
				20116,
				20845,
				19971,
				20843,
				20061
			}))
		}),
		$$new($ObjectArray, {
			"tables"_s,
			$$new($StringArrayWrapper, $$new($StringArray, {"digits"_s}))
		})
	}));
}

XResources_ja_JP_A::XResources_ja_JP_A() {
}

$Class* XResources_ja_JP_A::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ja_JP_A, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ja_JP_A, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ja_JP_A, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_ja_JP_A",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_ja_JP_A, name, initialize, &classInfo$$, XResources_ja_JP_A::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_ja_JP_A);
	});
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