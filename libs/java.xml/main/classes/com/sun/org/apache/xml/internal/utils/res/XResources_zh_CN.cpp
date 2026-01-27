#include <com/sun/org/apache/xml/internal/utils/res/XResources_zh_CN.h>

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

$FieldInfo _XResources_zh_CN_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_zh_CN, _contents)},
	{}
};

$MethodInfo _XResources_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_zh_CN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_zh_CN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_zh_CN",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_zh_CN_FieldInfo_,
	_XResources_zh_CN_MethodInfo_
};

$Object* allocate$XResources_zh_CN($Class* clazz) {
	return $of($alloc(XResources_zh_CN));
}

$ObjectArray2* XResources_zh_CN::_contents = nullptr;

void XResources_zh_CN::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_zh_CN::getContents() {
	return XResources_zh_CN::_contents;
}

void clinit$XResources_zh_CN($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_zh_CN::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("zh"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("zh"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("zh"_s)
		}),
		$$new($ObjectArray, {
			$of("alphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)0x0000FF21,
				(char16_t)0x0000FF22,
				(char16_t)0x0000FF23,
				(char16_t)0x0000FF24,
				(char16_t)0x0000FF25,
				(char16_t)0x0000FF26,
				(char16_t)0x0000FF27,
				(char16_t)0x0000FF28,
				(char16_t)0x0000FF29,
				(char16_t)0x0000FF2A,
				(char16_t)0x0000FF2B,
				(char16_t)0x0000FF2C,
				(char16_t)0x0000FF2D,
				(char16_t)0x0000FF2E,
				(char16_t)0x0000FF2F,
				(char16_t)0x0000FF30,
				(char16_t)0x0000FF31,
				(char16_t)0x0000FF32,
				(char16_t)0x0000FF33,
				(char16_t)0x0000FF34,
				(char16_t)0x0000FF35,
				(char16_t)0x0000FF36,
				(char16_t)0x0000FF37,
				(char16_t)0x0000FF38,
				(char16_t)0x0000FF39,
				(char16_t)0x0000FF3A
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
			$of("zero"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {(char16_t)0x000096F6})))
		}),
		$$new($ObjectArray, {
			$of("multiplier"_s),
			$of($$new($LongArrayWrapper, $$new($longs, {
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
				(char16_t)20159,
				(char16_t)19975,
				(char16_t)21315,
				(char16_t)30334,
				(char16_t)21313
			})))
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

XResources_zh_CN::XResources_zh_CN() {
}

$Class* XResources_zh_CN::load$($String* name, bool initialize) {
	$loadClass(XResources_zh_CN, name, initialize, &_XResources_zh_CN_ClassInfo_, clinit$XResources_zh_CN, allocate$XResources_zh_CN);
	return class$;
}

$Class* XResources_zh_CN::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com