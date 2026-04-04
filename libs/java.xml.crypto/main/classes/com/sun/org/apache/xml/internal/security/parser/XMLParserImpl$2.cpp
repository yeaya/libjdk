#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$2.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>
#include <java/lang/ClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

void XMLParserImpl$2::init$($Class* val$clazz) {
	$set(this, val$clazz, val$clazz);
}

$Object* XMLParserImpl$2::run() {
	$beforeCallerSensitive();
	return $nc(this->val$clazz)->getClassLoader();
}

XMLParserImpl$2::XMLParserImpl$2() {
}

$Class* XMLParserImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(XMLParserImpl$2, val$clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(XMLParserImpl$2, init$, void, $Class*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(XMLParserImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl",
		"getClassLoader",
		"(Ljava/lang/Class;)Ljava/lang/ClassLoader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl"
	};
	$loadClass(XMLParserImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLParserImpl$2);
	});
	return class$;
}

$Class* XMLParserImpl$2::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com