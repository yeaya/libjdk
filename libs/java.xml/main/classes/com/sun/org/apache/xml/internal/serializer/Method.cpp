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

$String* Method::XML = nullptr;
$String* Method::HTML = nullptr;
$String* Method::XHTML = nullptr;
$String* Method::TEXT = nullptr;
$String* Method::UNKNOWN = nullptr;

void Method::init$() {
}

Method::Method() {
}

void Method::clinit$($Class* clazz) {
	$assignStatic(Method::XML, "xml"_s);
	$assignStatic(Method::HTML, "html"_s);
	$assignStatic(Method::XHTML, "xhtml"_s);
	$assignStatic(Method::TEXT, "text"_s);
	$assignStatic(Method::UNKNOWN, ""_s);
}

$Class* Method::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XML)},
		{"HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, HTML)},
		{"XHTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XHTML)},
		{"TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, TEXT)},
		{"UNKNOWN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, UNKNOWN)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Method, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.Method",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Method, name, initialize, &classInfo$$, Method::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Method);
	});
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