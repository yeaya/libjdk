#include <com/sun/org/apache/xml/internal/utils/res/XResourceBundle.h>

#include <com/sun/org/apache/xml/internal/utils/res/CharArrayWrapper.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ERROR_RESOURCES
#undef LANG_ADDITIVE
#undef LANG_ALPHABET
#undef LANG_BUNDLE_NAME
#undef LANG_LEFTTORIGHT
#undef LANG_MULTIPLIER
#undef LANG_MULTIPLIER_CHAR
#undef LANG_MULT_ADD
#undef LANG_NUMBERGROUPS
#undef LANG_NUMBERING
#undef LANG_NUM_TABLES
#undef LANG_ORIENTATION
#undef LANG_RIGHTTOLEFT
#undef LANG_TRAD_ALPHABET
#undef MULT_FOLLOWS
#undef MULT_ORDER
#undef MULT_PRECEDES
#undef XSLT_RESOURCE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $CharArrayWrapper = ::com::sun::org::apache::xml::internal::utils::res::CharArrayWrapper;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							namespace res {

$FieldInfo _XResourceBundle_FieldInfo_[] = {
	{"ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, ERROR_RESOURCES)},
	{"XSLT_RESOURCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, XSLT_RESOURCE)},
	{"LANG_BUNDLE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_BUNDLE_NAME)},
	{"MULT_ORDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, MULT_ORDER)},
	{"MULT_PRECEDES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, MULT_PRECEDES)},
	{"MULT_FOLLOWS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, MULT_FOLLOWS)},
	{"LANG_ORIENTATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_ORIENTATION)},
	{"LANG_RIGHTTOLEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_RIGHTTOLEFT)},
	{"LANG_LEFTTORIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_LEFTTORIGHT)},
	{"LANG_NUMBERING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_NUMBERING)},
	{"LANG_ADDITIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_ADDITIVE)},
	{"LANG_MULT_ADD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_MULT_ADD)},
	{"LANG_MULTIPLIER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_MULTIPLIER)},
	{"LANG_MULTIPLIER_CHAR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_MULTIPLIER_CHAR)},
	{"LANG_NUMBERGROUPS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_NUMBERGROUPS)},
	{"LANG_NUM_TABLES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_NUM_TABLES)},
	{"LANG_ALPHABET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_ALPHABET)},
	{"LANG_TRAD_ALPHABET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XResourceBundle, LANG_TRAD_ALPHABET)},
	{}
};

$MethodInfo _XResourceBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XResourceBundle, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XResourceBundle, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _XResourceBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.res.XResourceBundle",
	"java.util.ListResourceBundle",
	nullptr,
	_XResourceBundle_FieldInfo_,
	_XResourceBundle_MethodInfo_
};

$Object* allocate$XResourceBundle($Class* clazz) {
	return $of($alloc(XResourceBundle));
}

$String* XResourceBundle::ERROR_RESOURCES = nullptr;
$String* XResourceBundle::XSLT_RESOURCE = nullptr;
$String* XResourceBundle::LANG_BUNDLE_NAME = nullptr;
$String* XResourceBundle::MULT_ORDER = nullptr;
$String* XResourceBundle::MULT_PRECEDES = nullptr;
$String* XResourceBundle::MULT_FOLLOWS = nullptr;
$String* XResourceBundle::LANG_ORIENTATION = nullptr;
$String* XResourceBundle::LANG_RIGHTTOLEFT = nullptr;
$String* XResourceBundle::LANG_LEFTTORIGHT = nullptr;
$String* XResourceBundle::LANG_NUMBERING = nullptr;
$String* XResourceBundle::LANG_ADDITIVE = nullptr;
$String* XResourceBundle::LANG_MULT_ADD = nullptr;
$String* XResourceBundle::LANG_MULTIPLIER = nullptr;
$String* XResourceBundle::LANG_MULTIPLIER_CHAR = nullptr;
$String* XResourceBundle::LANG_NUMBERGROUPS = nullptr;
$String* XResourceBundle::LANG_NUM_TABLES = nullptr;
$String* XResourceBundle::LANG_ALPHABET = nullptr;
$String* XResourceBundle::LANG_TRAD_ALPHABET = nullptr;

void XResourceBundle::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* XResourceBundle::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ui_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("help_language"_s),
			$of("en"_s)
		}),
		$$new($ObjectArray, {
			$of("language"_s),
			$of("en"_s)
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
	});
}

XResourceBundle::XResourceBundle() {
}

void clinit$XResourceBundle($Class* class$) {
	$assignStatic(XResourceBundle::ERROR_RESOURCES, "com.sun.org.apache.xalan.internal.res.XSLTErrorResources"_s);
	$assignStatic(XResourceBundle::XSLT_RESOURCE, "com.sun.org.apache.xml.internal.utils.res.XResourceBundle"_s);
	$assignStatic(XResourceBundle::LANG_BUNDLE_NAME, "com.sun.org.apache.xml.internal.utils.res.XResources"_s);
	$assignStatic(XResourceBundle::MULT_ORDER, "multiplierOrder"_s);
	$assignStatic(XResourceBundle::MULT_PRECEDES, "precedes"_s);
	$assignStatic(XResourceBundle::MULT_FOLLOWS, "follows"_s);
	$assignStatic(XResourceBundle::LANG_ORIENTATION, "orientation"_s);
	$assignStatic(XResourceBundle::LANG_RIGHTTOLEFT, "rightToLeft"_s);
	$assignStatic(XResourceBundle::LANG_LEFTTORIGHT, "leftToRight"_s);
	$assignStatic(XResourceBundle::LANG_NUMBERING, "numbering"_s);
	$assignStatic(XResourceBundle::LANG_ADDITIVE, "additive"_s);
	$assignStatic(XResourceBundle::LANG_MULT_ADD, "multiplicative-additive"_s);
	$assignStatic(XResourceBundle::LANG_MULTIPLIER, "multiplier"_s);
	$assignStatic(XResourceBundle::LANG_MULTIPLIER_CHAR, "multiplierChar"_s);
	$assignStatic(XResourceBundle::LANG_NUMBERGROUPS, "numberGroups"_s);
	$assignStatic(XResourceBundle::LANG_NUM_TABLES, "tables"_s);
	$assignStatic(XResourceBundle::LANG_ALPHABET, "alphabet"_s);
	$assignStatic(XResourceBundle::LANG_TRAD_ALPHABET, "tradAlphabet"_s);
}

$Class* XResourceBundle::load$($String* name, bool initialize) {
	$loadClass(XResourceBundle, name, initialize, &_XResourceBundle_ClassInfo_, clinit$XResourceBundle, allocate$XResourceBundle);
	return class$;
}

$Class* XResourceBundle::class$ = nullptr;

							} // res
						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com