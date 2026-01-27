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

$FieldInfo _XResources_zh_TW_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_zh_TW, _contents)},
	{}
};

$MethodInfo _XResources_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_zh_TW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_zh_TW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_zh_TW",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_zh_TW_FieldInfo_,
	_XResources_zh_TW_MethodInfo_
};

$Object* allocate$XResources_zh_TW($Class* clazz) {
	return $of($alloc(XResources_zh_TW));
}

$ObjectArray2* XResources_zh_TW::_contents = nullptr;

void XResources_zh_TW::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_zh_TW::getContents() {
	return XResources_zh_TW::_contents;
}

void clinit$XResources_zh_TW($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_zh_TW::_contents, $new($ObjectArray2, {
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
				(char16_t)20740,
				(char16_t)0x0000842C,
				(char16_t)20191,
				(char16_t)20336,
				(char16_t)25342
			})))
		}),
		$$new($ObjectArray, {
			$of("digits"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)22777,
				(char16_t)0x00008CB3,
				(char16_t)21443,
				(char16_t)0x00008086,
				(char16_t)20237,
				(char16_t)0x00009678,
				(char16_t)26578,
				(char16_t)25420,
				(char16_t)29590
			})))
		}),
		$$new($ObjectArray, {
			$of("tables"_s),
			$of($$new($StringArrayWrapper, $$new($StringArray, {"digits"_s})))
		})
	}));
}

XResources_zh_TW::XResources_zh_TW() {
}

$Class* XResources_zh_TW::load$($String* name, bool initialize) {
	$loadClass(XResources_zh_TW, name, initialize, &_XResources_zh_TW_ClassInfo_, clinit$XResources_zh_TW, allocate$XResources_zh_TW);
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