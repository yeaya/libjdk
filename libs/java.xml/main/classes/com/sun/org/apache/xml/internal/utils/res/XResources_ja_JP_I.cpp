#include <com/sun/org/apache/xml/internal/utils/res/XResources_ja_JP_I.h>
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

$ObjectArray2* XResources_ja_JP_I::_contents = nullptr;

void XResources_ja_JP_I::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ja_JP_I::getContents() {
	return XResources_ja_JP_I::_contents;
}

void XResources_ja_JP_I::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_ja_JP_I::_contents, $new($ObjectArray2, {
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
				12452,
				12525,
				12495,
				12491,
				12507,
				12504,
				12488,
				12481,
				12522,
				12492,
				12523,
				12530,
				12527,
				12459,
				12520,
				12479,
				12524,
				12477,
				12484,
				12493,
				12490,
				12521,
				12512,
				12454,
				12528,
				12494,
				12458,
				12463,
				12516,
				12510,
				12465,
				12501,
				12467,
				12456,
				12486,
				12450,
				12469,
				12461,
				12518,
				12513,
				12511,
				12471,
				12529,
				12498,
				12514,
				12475,
				12473
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

XResources_ja_JP_I::XResources_ja_JP_I() {
}

$Class* XResources_ja_JP_I::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ja_JP_I, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ja_JP_I, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ja_JP_I, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_ja_JP_I",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_ja_JP_I, name, initialize, &classInfo$$, XResources_ja_JP_I::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_ja_JP_I);
	});
	return class$;
}

$Class* XResources_ja_JP_I::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com