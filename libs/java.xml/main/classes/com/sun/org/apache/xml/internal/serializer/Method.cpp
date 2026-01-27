#include <com/sun/org/apache/xml/internal/serializer/Method.h>

#include <jcpp.h>

#undef HTML
#undef TEXT
#undef UNKNOWN
#undef XHTML
#undef XML

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _Method_FieldInfo_[] = {
	{"XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XML)},
	{"HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, HTML)},
	{"XHTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XHTML)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, TEXT)},
	{"UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, UNKNOWN)},
	{}
};

$MethodInfo _Method_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Method, init$, void)},
	{}
};

$ClassInfo _Method_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.Method",
	"java.lang.Object",
	nullptr,
	_Method_FieldInfo_,
	_Method_MethodInfo_
};

$Object* allocate$Method($Class* clazz) {
	return $of($alloc(Method));
}

$String* Method::XML = nullptr;
$String* Method::HTML = nullptr;
$String* Method::XHTML = nullptr;
$String* Method::TEXT = nullptr;
$String* Method::UNKNOWN = nullptr;

void Method::init$() {
}

Method::Method() {
}

void clinit$Method($Class* class$) {
	$assignStatic(Method::XML, "xml"_s);
	$assignStatic(Method::HTML, "html"_s);
	$assignStatic(Method::XHTML, "xhtml"_s);
	$assignStatic(Method::TEXT, "text"_s);
	$assignStatic(Method::UNKNOWN, ""_s);
}

$Class* Method::load$($String* name, bool initialize) {
	$loadClass(Method, name, initialize, &_Method_ClassInfo_, clinit$Method, allocate$Method);
	return class$;
}

$Class* Method::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com