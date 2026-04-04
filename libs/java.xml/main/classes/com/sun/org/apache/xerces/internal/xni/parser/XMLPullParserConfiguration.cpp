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

$Class* XMLPullParserConfiguration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cleanup", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, cleanup, void)},
		{"parse", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, parse, bool, bool), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
		{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLPullParserConfiguration, setInputSource, void, $XMLInputSource*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLPullParserConfiguration",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLPullParserConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLPullParserConfiguration);
	});
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