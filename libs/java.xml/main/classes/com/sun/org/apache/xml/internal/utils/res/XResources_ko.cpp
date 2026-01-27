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

$FieldInfo _XResources_ko_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_ko, _contents)},
	{}
};

$MethodInfo _XResources_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_ko",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_ko_FieldInfo_,
	_XResources_ko_MethodInfo_
};

$Object* allocate$XResources_ko($Class* clazz) {
	return $of($alloc(XResources_ko));
}

$ObjectArray2* XResources_ko::_contents = nullptr;

void XResources_ko::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_ko::getContents() {
	return XResources_ko::_contents;
}

void clinit$XResources_ko($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_ko::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("ko"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("ko"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("ko"_s)
		}),
		$$new($ObjectArray, {
			$of("alphabet"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)12593,
				(char16_t)12596,
				(char16_t)12599,
				(char16_t)12601,
				(char16_t)12609,
				(char16_t)12610,
				(char16_t)12613,
				(char16_t)12615,
				(char16_t)12616,
				(char16_t)12618,
				(char16_t)12619,
				(char16_t)12620,
				(char16_t)12621,
				(char16_t)12622,
				(char16_t)12623,
				(char16_t)12625,
				(char16_t)12627,
				(char16_t)12629,
				(char16_t)12631,
				(char16_t)12635,
				(char16_t)12636,
				(char16_t)12640,
				(char16_t)12641,
				(char16_t)12643
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
			$of($$new($CharArrayWrapper, $$new($chars, 0)))
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
				(char16_t)0x0000C5B5,
				(char16_t)0x0000B9CC,
				(char16_t)0x0000CC9C,
				(char16_t)0x0000BC31,
				(char16_t)0x0000C2ED
			})))
		}),
		$$new($ObjectArray, {
			$of("digits"_s),
			$of($$new($CharArrayWrapper, $$new($chars, {
				(char16_t)0x0000C77C,
				(char16_t)0x0000C774,
				(char16_t)0x0000C0BC,
				(char16_t)0x0000C0AC,
				(char16_t)0x0000C624,
				(char16_t)0x0000C721,
				(char16_t)0x0000CE60,
				(char16_t)0x0000D314,
				(char16_t)0x0000AD6C
			})))
		}),
		$$new($ObjectArray, {
			$of("tables"_s),
			$of($$new($StringArrayWrapper, $$new($StringArray, {"digits"_s})))
		})
	}));
}

XResources_ko::XResources_ko() {
}

$Class* XResources_ko::load$($String* name, bool initialize) {
	$loadClass(XResources_ko, name, initialize, &_XResources_ko_ClassInfo_, clinit$XResources_ko, allocate$XResources_ko);
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