#include <com/sun/org/apache/xml/internal/utils/res/XResources_ja_JP_HI.h>

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

$FieldInfo _XResources_ja_JP_HI_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ja_JP_HI, _contents)},
	{}
};

$MethodInfo _XResources_ja_JP_HI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ja_JP_HI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ja_JP_HI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_ja_JP_HI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_ja_JP_HI",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_ja_JP_HI_FieldInfo_,
	_XResources_ja_JP_HI_MethodInfo_
};

$Object* allocate$XResources_ja_JP_HI($Class* clazz) {
	return $of($alloc(XResources_ja_JP_HI));
}

$ObjectArray2* XResources_ja_JP_HI::_contents = nullptr;

void XResources_ja_JP_HI::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ja_JP_HI::getContents() {
	return XResources_ja_JP_HI::_contents;
}

void clinit$XResources_ja_JP_HI($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_ja_JP_HI::_contents, $new($ObjectArray2, {
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
				(char16_t)12356,
				(char16_t)12429,
				(char16_t)12399,
				(char16_t)12395,
				(char16_t)12411,
				(char16_t)12408,
				(char16_t)12392,
				(char16_t)12385,
				(char16_t)12426,
				(char16_t)12396,
				(char16_t)12427,
				(char16_t)12434,
				(char16_t)12431,
				(char16_t)12363,
				(char16_t)12424,
				(char16_t)12383,
				(char16_t)12428,
				(char16_t)12381,
				(char16_t)12388,
				(char16_t)12397,
				(char16_t)12394,
				(char16_t)12425,
				(char16_t)12416,
				(char16_t)12358,
				(char16_t)12432,
				(char16_t)12398,
				(char16_t)12362,
				(char16_t)12367,
				(char16_t)12420,
				(char16_t)12414,
				(char16_t)12369,
				(char16_t)12405,
				(char16_t)12371,
				(char16_t)12360,
				(char16_t)12390,
				(char16_t)12354,
				(char16_t)12373,
				(char16_t)12365,
				(char16_t)12422,
				(char16_t)12417,
				(char16_t)12415,
				(char16_t)12375,
				(char16_t)12433,
				(char16_t)12402,
				(char16_t)12418,
				(char16_t)12379,
				(char16_t)12377
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

XResources_ja_JP_HI::XResources_ja_JP_HI() {
}

$Class* XResources_ja_JP_HI::load$($String* name, bool initialize) {
	$loadClass(XResources_ja_JP_HI, name, initialize, &_XResources_ja_JP_HI_ClassInfo_, clinit$XResources_ja_JP_HI, allocate$XResources_ja_JP_HI);
	return class$;
}

$Class* XResources_ja_JP_HI::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com