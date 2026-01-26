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

$FieldInfo _XMLParserImpl$2_FieldInfo_[] = {
	{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(XMLParserImpl$2, val$clazz)},
	{}
};

$MethodInfo _XMLParserImpl$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(XMLParserImpl$2, init$, void, $Class*)},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(XMLParserImpl$2, run, $Object*)},
	{}
};

$EnclosingMethodInfo _XMLParserImpl$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl",
	"getClassLoader",
	"(Ljava/lang/Class;)Ljava/lang/ClassLoader;"
};

$InnerClassInfo _XMLParserImpl$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLParserImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XMLParserImpl$2_FieldInfo_,
	_XMLParserImpl$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_XMLParserImpl$2_EnclosingMethodInfo_,
	_XMLParserImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl"
};

$Object* allocate$XMLParserImpl$2($Class* clazz) {
	return $of($alloc(XMLParserImpl$2));
}

void XMLParserImpl$2::init$($Class* val$clazz) {
	$set(this, val$clazz, val$clazz);
}

$Object* XMLParserImpl$2::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$clazz)->getClassLoader());
}

XMLParserImpl$2::XMLParserImpl$2() {
}

$Class* XMLParserImpl$2::load$($String* name, bool initialize) {
	$loadClass(XMLParserImpl$2, name, initialize, &_XMLParserImpl$2_ClassInfo_, allocate$XMLParserImpl$2);
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