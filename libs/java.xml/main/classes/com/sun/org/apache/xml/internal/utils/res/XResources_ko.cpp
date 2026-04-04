#include <com/sun/org/apache/xml/internal/utils/res/XResources_ko.h>
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

$ObjectArray2* XResources_ko::_contents = nullptr;

void XResources_ko::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ko::getContents() {
	return XResources_ko::_contents;
}

void XResources_ko::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_ko::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ui_language"_s,
			"ko"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"ko"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"ko"_s
		}),
		$$new($ObjectArray, {
			"alphabet"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				12593,
				12596,
				12599,
				12601,
				12609,
				12610,
				12613,
				12615,
				12616,
				12618,
				12619,
				12620,
				12621,
				12622,
				12623,
				12625,
				12627,
				12629,
				12631,
				12635,
				12636,
				12640,
				12641,
				12643
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
			$$new($CharArrayWrapper, $$new($chars, 0))
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
				0x0000c5b5,
				0x0000b9cc,
				0x0000cc9c,
				0x0000bc31,
				0x0000c2ed
			}))
		}),
		$$new($ObjectArray, {
			"digits"_s,
			$$new($CharArrayWrapper, $$new($chars, {
				0x0000c77c,
				0x0000c774,
				0x0000c0bc,
				0x0000c0ac,
				0x0000c624,
				0x0000c721,
				0x0000ce60,
				0x0000d314,
				0x0000ad6c
			}))
		}),
		$$new($ObjectArray, {
			"tables"_s,
			$$new($StringArrayWrapper, $$new($StringArray, {"digits"_s}))
		})
	}));
}

XResources_ko::XResources_ko() {
}

$Class* XResources_ko::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ko, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_ko",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_ko, name, initialize, &classInfo$$, XResources_ko::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_ko);
	});
	return class$;
}

$Class* XResources_ko::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com