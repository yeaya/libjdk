#include <com/sun/org/apache/xml/internal/serialize/Method.h>
#include <jcpp.h>

#undef FOP
#undef HTML
#undef TEXT
#undef XHTML
#undef XML

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$String* Method::XML = nullptr;
$String* Method::HTML = nullptr;
$String* Method::XHTML = nullptr;
$String* Method::TEXT = nullptr;
$String* Method::FOP = nullptr;

void Method::init$() {
}

Method::Method() {
}

void Method::clinit$($Class* clazz) {
	$assignStatic(Method::XML, "xml"_s);
	$assignStatic(Method::HTML, "html"_s);
	$assignStatic(Method::XHTML, "xhtml"_s);
	$assignStatic(Method::TEXT, "text"_s);
	$assignStatic(Method::FOP, "fop"_s);
}

$Class* Method::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XML)},
		{"HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, HTML)},
		{"XHTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XHTML)},
		{"TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, TEXT)},
		{"FOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, FOP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Method, init$, void)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.Method",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Method, name, initialize, &classInfo$$, Method::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Method);
	});
	return class$;
}

$Class* Method::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com