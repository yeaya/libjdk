#include <com/sun/org/apache/xml/internal/utils/res/XResources_it.h>

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

$FieldInfo _XResources_it_FieldInfo_[] = {
	{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_it, _contents)},
	{}
};

$MethodInfo _XResources_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResources_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResources_it",
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	nullptr,
	_XResources_it_FieldInfo_,
	_XResources_it_MethodInfo_
};

$Object* allocate$XResources_it($Class* clazz) {
	return $of($alloc(XResources_it));
}

$ObjectArray2* XResources_it::_contents = nullptr;

void XResources_it::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_it::getContents() {
	return XResources_it::_contents;
}

void clinit$XResources_it($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(XResources_it::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("it"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("it"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("it"_s)
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

XResources_it::XResources_it() {
}

$Class* XResources_it::load$($String* name, bool initialize) {
	$loadClass(XResources_it, name, initialize, &_XResources_it_ClassInfo_, clinit$XResources_it, allocate$XResources_it);
	return class$;
}

$Class* XResources_it::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com