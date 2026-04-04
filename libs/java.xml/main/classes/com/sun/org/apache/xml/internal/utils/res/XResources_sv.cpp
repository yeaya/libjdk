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

$ObjectArray2* XResources_sv::_contents = nullptr;

void XResources_sv::init$() {
	$XResourceBundle::init$();
}

$ObjectArray2* XResources_sv::getContents() {
	return XResources_sv::_contents;
}

void XResources_sv::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(XResources_sv::_contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ui_language"_s,
			"sv"_s
		}),
		$$new($ObjectArray, {
			"help_language"_s,
			"sv"_s
		}),
		$$new($ObjectArray, {
			"language"_s,
			"sv"_s
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

XResources_sv::XResources_sv() {
}

$Class* XResources_sv::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XResources_sv, _contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XResources_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResources_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.utils.res.XResources_sv",
		"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XResources_sv, name, initialize, &classInfo$$, XResources_sv::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XResources_sv);
	});
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