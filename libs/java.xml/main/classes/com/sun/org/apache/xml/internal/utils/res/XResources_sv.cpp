#include <com/sun/org/apache/xml/internal/utils/res/XResources_sv.h>

#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>
#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $CharArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper;
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

$FieldInfo _XResources_sv_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_sv, _contents)},
	{}
};

$MethodInfo _XResources_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_sv",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_sv_FieldInfo_,
	_XResources_sv_MethodInfo_
};

$Object* allocate$XResources_sv($Class* clazz) {
	return $of($alloc(XResources_sv));
}

$ObjectArray2* XResources_sv::_contents = nullptr;

void XResources_sv::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_sv::getContents() {
	return XResources_sv::_contents;
}

void clinit$XResources_sv($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_sv::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("sv"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("sv"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("sv"_s)
		}),
		$$new($ObjectArray, {
			$of("alphabet"_s),
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
			$of("additive"_s)
		})
	}));
}

XResources_sv::XResources_sv() {
}

$Class* XResources_sv::load$($String* name, bool initialize) {
	$loadClass(XResources_sv, name, initialize, &_XResources_sv_ClassInfo_, clinit$XResources_sv, allocate$XResources_sv);
	return class$;
}

$Class* XResources_sv::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com