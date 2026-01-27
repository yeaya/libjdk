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

$CompoundAttribute _Method_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Method_FieldInfo_[] = {
	{"XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XML)},
	{"HTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, HTML)},
	{"XHTML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, XHTML)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, TEXT)},
	{"FOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Method, FOP)},
	{}
};

$MethodInfo _Method_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Method, init$, void)},
	{}
};

$ClassInfo _Method_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serialize.Method",
	"java.lang.Object",
	nullptr,
	_Method_FieldInfo_,
	_Method_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Method_Annotations_
};

$Object* allocate$Method($Class* clazz) {
	return $of($alloc(Method));
}

$String* Method::XML = nullptr;
$String* Method::HTML = nullptr;
$String* Method::XHTML = nullptr;
$String* Method::TEXT = nullptr;
$String* Method::FOP = nullptr;

void Method::init$() {
}

Method::Method() {
}

void clinit$Method($Class* class$) {
	$assignStatic(Method::XML, "xml"_s);
	$assignStatic(Method::HTML, "html"_s);
	$assignStatic(Method::XHTML, "xhtml"_s);
	$assignStatic(Method::TEXT, "text"_s);
	$assignStatic(Method::FOP, "fop"_s);
}

$Class* Method::load$($String* name, bool initialize) {
	$loadClass(Method, name, initialize, &_Method_ClassInfo_, clinit$Method, allocate$Method);
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