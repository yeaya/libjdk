#include <com/sun/org/apache/xml/internal/utils/res/XResources_zh_TW.h>
#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/IntArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/LongArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/StringArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $CharArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper;
using $IntArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::IntArrayWrapper;
using $LongArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::LongArrayWrapper;
using $StringArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::StringArrayWrapper;
using $XResourceBundle = ::com::sun::org::apache::xml::internal::utils::res::XResourceBundle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$ObjectArray2* XResources_zh_TW::_contents = nullptr;

void XResources_zh_TW::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_zh_TW::getContents() {
	return XResources_zh_TW::_contents;
}

void XResources_zh_TW::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_zh_TW::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ui_language"_s,
			"zh"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"zh"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"zh"_s
		}),
		$$new($ObjectArray, {
			"alphabet"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				0x0000ff21,
				0x0000ff22,
				0x0000ff23,
				0x0000ff24,
				0x0000ff25,
				0x0000ff26,
				0x0000ff27,
				0x0000ff28,
				0x0000ff29,
				0x0000ff2a,
				0x0000ff2b,
				0x0000ff2c,
				0x0000ff2d,
				0x0000ff2e,
				0x0000ff2f,
				0x0000ff30,
				0x0000ff31,
				0x0000ff32,
				0x0000ff33,
				0x0000ff34,
				0x0000ff35,
				0x0000ff36,
				0x0000ff37,
				0x0000ff38,
				0x0000ff39,
				0x0000ff3a
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
			"zero"_s,
			$$new($CharArrayWrapper, $$new($chars, {0x000096f6}))
		}),
		$$new($ObjectArray, {
			"multiplier"_s,
			$$new($LongArrayWrapper, $$new($longs, {
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
				20740,
				0x0000842c,
				20191,
				20336,
				25342
			}))
		}),
		$$new($ObjectArray, {
			"digits"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				22777,
				0x00008cb3,
				21443,
				0x00008086,
				20237,
				0x00009678,
				26578,
				25420,
				29590
			}))
		}),
		$$new($ObjectArray, {
			"tables"_s,
			$$new($StringArrayWrapper, $$new($StringArray, {"digits"_s}))
		})
	}));
}

XResources_zh_TW::XResources_zh_TW() {
}

$Class* XResources_zh_TW::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_zh_TW, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_zh_TW",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_zh_TW, name, initialize, &classInfo$$, XResources_zh_TW::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_zh_TW);
	});
	return class$;
}

$Class* XResources_zh_TW::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com