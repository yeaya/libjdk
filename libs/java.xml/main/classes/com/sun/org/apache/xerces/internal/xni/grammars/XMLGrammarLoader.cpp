#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarLoader.h>

#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/util/Locale.h>
#include <jcpp.h>

using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLEntityResolver = ::com::sun::org::apache::xerces::internal::xni::parser::XMLEntityResolver;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$MethodInfo _XMLGrammarLoader_MethodInfo_[] = {
	{"getEntityResolver", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getEntityResolver, $XMLEntityResolver*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getErrorHandler, $XMLErrorHandler*)},
	{"getFeature", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getFeature, bool, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getLocale, $Locale*)},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getProperty, $Object*, $String*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"getRecognizedFeatures", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getRecognizedFeatures, $StringArray*)},
	{"getRecognizedProperties", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, getRecognizedProperties, $StringArray*)},
	{"loadGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, loadGrammar, $Grammar*, $XMLInputSource*), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setEntityResolver", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLEntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, setEntityResolver, void, $XMLEntityResolver*)},
	{"setErrorHandler", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, setErrorHandler, void, $XMLErrorHandler*)},
	{"setFeature", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, setFeature, void, $String*, bool), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, setLocale, void, $Locale*)},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLGrammarLoader, setProperty, void, $String*, Object$*), "com.sun.org.apache.xerces.internal.xni.parser.XMLConfigurationException"},
	{}
};

$ClassInfo _XMLGrammarLoader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarLoader",
	nullptr,
	nullptr,
	nullptr,
	_XMLGrammarLoader_MethodInfo_
};

$Object* allocate$XMLGrammarLoader($Class* clazz) {
	return $of($alloc(XMLGrammarLoader));
}

$Class* XMLGrammarLoader::load$($String* name, bool initialize) {
	$loadClass(XMLGrammarLoader, name, initialize, &_XMLGrammarLoader_ClassInfo_, allocate$XMLGrammarLoader);
	return class$;
}

$Class* XMLGrammarLoader::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com