#include <com/sun/org/apache/xerces/internal/xni/parser/XMLPullParserConfiguration.h>

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$MethodInfo _XMLPullParserConfiguration_MethodInfo_[] = {
	{"cleanup", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, cleanup, void)},
	{"parse", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
	{}
};

$ClassInfo _XMLPullParserConfiguration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration",
	nullptr,
	_XMLPullParserConfiguration_MethodInfo_
};

$Object* allocate$XMLPullParserConfiguration($Class* clazz) {
	return $of($alloc(XMLPullParserConfiguration));
}

$Class* XMLPullParserConfiguration::load$($String* name, bool initialize) {
	$loadClass(XMLPullParserConfiguration, name, initialize, &_XMLPullParserConfiguration_ClassInfo_, allocate$XMLPullParserConfiguration);
	return class$;
}

$Class* XMLPullParserConfiguration::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com