#include <com/sun/org/apache/xml/internal/utils/Constants.h>

#include <jcpp.h>

#undef S_BUILTIN_EXTENSIONS_URL
#undef S_BUILTIN_OLD_EXTENSIONS_URL
#undef S_EXSLT_COMMON_URL
#undef S_EXSLT_DATETIME_URL
#undef S_EXSLT_DYNAMIC_URL
#undef S_EXSLT_FUNCTIONS_URL
#undef S_EXSLT_MATH_URL
#undef S_EXSLT_SETS_URL
#undef S_EXSLT_STRINGS_URL
#undef S_EXTENSIONS_JAVA_URL
#undef S_EXTENSIONS_LOTUSXSL_JAVA_URL
#undef S_EXTENSIONS_OLD_JAVA_URL
#undef S_EXTENSIONS_PIPE_URL
#undef S_EXTENSIONS_REDIRECT_URL
#undef S_EXTENSIONS_SQL_URL
#undef S_EXTENSIONS_XALANLIB_URL
#undef S_OLDXSLNAMESPACEURL
#undef S_VENDOR
#undef S_VENDORURL
#undef S_XMLNAMESPACEURI
#undef S_XSLNAMESPACEURL
#undef XSLTVERSUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _Constants_FieldInfo_[] = {
	{"S_XMLNAMESPACEURI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_XMLNAMESPACEURI)},
	{"S_XSLNAMESPACEURL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_XSLNAMESPACEURL)},
	{"S_OLDXSLNAMESPACEURL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_OLDXSLNAMESPACEURL)},
	{"S_VENDOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_VENDOR)},
	{"S_VENDORURL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_VENDORURL)},
	{"S_BUILTIN_EXTENSIONS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_BUILTIN_EXTENSIONS_URL)},
	{"S_BUILTIN_OLD_EXTENSIONS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_BUILTIN_OLD_EXTENSIONS_URL)},
	{"S_EXTENSIONS_OLD_JAVA_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_OLD_JAVA_URL)},
	{"S_EXTENSIONS_JAVA_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_JAVA_URL)},
	{"S_EXTENSIONS_LOTUSXSL_JAVA_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_LOTUSXSL_JAVA_URL)},
	{"S_EXTENSIONS_XALANLIB_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_XALANLIB_URL)},
	{"S_EXTENSIONS_REDIRECT_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_REDIRECT_URL)},
	{"S_EXTENSIONS_PIPE_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_PIPE_URL)},
	{"S_EXTENSIONS_SQL_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXTENSIONS_SQL_URL)},
	{"S_EXSLT_COMMON_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_COMMON_URL)},
	{"S_EXSLT_MATH_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_MATH_URL)},
	{"S_EXSLT_SETS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_SETS_URL)},
	{"S_EXSLT_DATETIME_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_DATETIME_URL)},
	{"S_EXSLT_FUNCTIONS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_FUNCTIONS_URL)},
	{"S_EXSLT_DYNAMIC_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_DYNAMIC_URL)},
	{"S_EXSLT_STRINGS_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, S_EXSLT_STRINGS_URL)},
	{"XSLTVERSUPPORTED", "D", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XSLTVERSUPPORTED)},
	{}
};

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Constants, init$, void)},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.Constants",
	"java.lang.Object",
	nullptr,
	_Constants_FieldInfo_,
	_Constants_MethodInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}

$String* Constants::S_XMLNAMESPACEURI = nullptr;
$String* Constants::S_XSLNAMESPACEURL = nullptr;
$String* Constants::S_OLDXSLNAMESPACEURL = nullptr;
$String* Constants::S_VENDOR = nullptr;
$String* Constants::S_VENDORURL = nullptr;
$String* Constants::S_BUILTIN_EXTENSIONS_URL = nullptr;
$String* Constants::S_BUILTIN_OLD_EXTENSIONS_URL = nullptr;
$String* Constants::S_EXTENSIONS_OLD_JAVA_URL = nullptr;
$String* Constants::S_EXTENSIONS_JAVA_URL = nullptr;
$String* Constants::S_EXTENSIONS_LOTUSXSL_JAVA_URL = nullptr;
$String* Constants::S_EXTENSIONS_XALANLIB_URL = nullptr;
$String* Constants::S_EXTENSIONS_REDIRECT_URL = nullptr;
$String* Constants::S_EXTENSIONS_PIPE_URL = nullptr;
$String* Constants::S_EXTENSIONS_SQL_URL = nullptr;
$String* Constants::S_EXSLT_COMMON_URL = nullptr;
$String* Constants::S_EXSLT_MATH_URL = nullptr;
$String* Constants::S_EXSLT_SETS_URL = nullptr;
$String* Constants::S_EXSLT_DATETIME_URL = nullptr;
$String* Constants::S_EXSLT_FUNCTIONS_URL = nullptr;
$String* Constants::S_EXSLT_DYNAMIC_URL = nullptr;
$String* Constants::S_EXSLT_STRINGS_URL = nullptr;
double Constants::XSLTVERSUPPORTED = 0.0;

void Constants::init$() {
}

Constants::Constants() {
}

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::S_XMLNAMESPACEURI, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(Constants::S_XSLNAMESPACEURL, "http://www.w3.org/1999/XSL/Transform"_s);
	$assignStatic(Constants::S_OLDXSLNAMESPACEURL, "http://www.w3.org/XSL/Transform/1.0"_s);
	$assignStatic(Constants::S_VENDOR, "Apache Software Foundation"_s);
	$assignStatic(Constants::S_VENDORURL, "http://xml.apache.org"_s);
	$assignStatic(Constants::S_BUILTIN_EXTENSIONS_URL, "http://xml.apache.org/xalan"_s);
	$assignStatic(Constants::S_BUILTIN_OLD_EXTENSIONS_URL, "http://xml.apache.org/xslt"_s);
	$assignStatic(Constants::S_EXTENSIONS_OLD_JAVA_URL, "http://xml.apache.org/xslt/java"_s);
	$assignStatic(Constants::S_EXTENSIONS_JAVA_URL, "http://xml.apache.org/xalan/java"_s);
	$assignStatic(Constants::S_EXTENSIONS_LOTUSXSL_JAVA_URL, "http://xsl.lotus.com/java"_s);
	$assignStatic(Constants::S_EXTENSIONS_XALANLIB_URL, "http://xml.apache.org/xalan"_s);
	$assignStatic(Constants::S_EXTENSIONS_REDIRECT_URL, "http://xml.apache.org/xalan/redirect"_s);
	$assignStatic(Constants::S_EXTENSIONS_PIPE_URL, "http://xml.apache.org/xalan/PipeDocument"_s);
	$assignStatic(Constants::S_EXTENSIONS_SQL_URL, "http://xml.apache.org/xalan/sql"_s);
	$assignStatic(Constants::S_EXSLT_COMMON_URL, "http://exslt.org/common"_s);
	$assignStatic(Constants::S_EXSLT_MATH_URL, "http://exslt.org/math"_s);
	$assignStatic(Constants::S_EXSLT_SETS_URL, "http://exslt.org/sets"_s);
	$assignStatic(Constants::S_EXSLT_DATETIME_URL, "http://exslt.org/dates-and-times"_s);
	$assignStatic(Constants::S_EXSLT_FUNCTIONS_URL, "http://exslt.org/functions"_s);
	$assignStatic(Constants::S_EXSLT_DYNAMIC_URL, "http://exslt.org/dynamic"_s);
	$assignStatic(Constants::S_EXSLT_STRINGS_URL, "http://exslt.org/strings"_s);
	Constants::XSLTVERSUPPORTED = 1.0;
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com