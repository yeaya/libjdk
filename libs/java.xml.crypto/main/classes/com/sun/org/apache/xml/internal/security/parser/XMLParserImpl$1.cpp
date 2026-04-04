#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$1.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

void XMLParserImpl$1::init$() {
}

$Object* XMLParserImpl$1::run() {
	$beforeCallerSensitive();
	return $($Thread::currentThread())->getContextClassLoader();
}

XMLParserImpl$1::XMLParserImpl$1() {
}

$Class* XMLParserImpl$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XMLParserImpl$1, init$, void)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(XMLParserImpl$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl",
		"getContextClassLoader",
		"()Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl"
	};
	$loadClass(XMLParserImpl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLParserImpl$1);
	});
	return class$;
}

$Class* XMLParserImpl$1::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com