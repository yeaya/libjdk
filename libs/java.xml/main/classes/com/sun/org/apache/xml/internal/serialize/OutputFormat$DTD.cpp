#include <com/sun/org/apache/xml/internal/serialize/OutputFormat$DTD.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

$String* OutputFormat$DTD::HTMLPublicId = nullptr;
$String* OutputFormat$DTD::HTMLSystemId = nullptr;
$String* OutputFormat$DTD::XHTMLPublicId = nullptr;
$String* OutputFormat$DTD::XHTMLSystemId = nullptr;

void OutputFormat$DTD::init$() {
}

OutputFormat$DTD::OutputFormat$DTD() {
}

void OutputFormat$DTD::clinit$($Class* clazz) {
	$assignStatic(OutputFormat$DTD::HTMLPublicId, "-//W3C//DTD HTML 4.01//EN"_s);
	$assignStatic(OutputFormat$DTD::HTMLSystemId, "http://www.w3.org/TR/html4/strict.dtd"_s);
	$assignStatic(OutputFormat$DTD::XHTMLPublicId, "-//W3C//DTD XHTML 1.0 Strict//EN"_s);
	$assignStatic(OutputFormat$DTD::XHTMLSystemId, "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd"_s);
}

$Class* OutputFormat$DTD::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, HTMLPublicId)},
		{"HTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, HTMLSystemId)},
		{"XHTMLPublicId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, XHTMLPublicId)},
		{"XHTMLSystemId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OutputFormat$DTD, XHTMLSystemId)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OutputFormat$DTD, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD", "com.sun.org.apache.xml.internal.serialize.OutputFormat", "DTD", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serialize.OutputFormat$DTD",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serialize.OutputFormat"
	};
	$loadClass(OutputFormat$DTD, name, initialize, &classInfo$$, OutputFormat$DTD::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OutputFormat$DTD);
	});
	return class$;
}

$Class* OutputFormat$DTD::class$ = nullptr;

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com