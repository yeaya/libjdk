#include <com/sun/org/apache/xml/internal/utils/res/XResources_es.h>
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

$ObjectArray2* XResources_es::_contents = nullptr;

void XResources_es::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_es::getContents() {
	return XResources_es::_contents;
}

void XResources_es::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_es::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ui_language"_s,
			"es"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"es"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"es"_s
		}),
		$$new($ObjectArray, {
			"alphabet"_s,
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
			"additive"_s
		})
	}));
}

XResources_es::XResources_es() {
}

$Class* XResources_es::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_es, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_es",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_es, name, initialize, &classInfo$$, XResources_es::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_es);
	});
	return class$;
}

$Class* XResources_es::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com