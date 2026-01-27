#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputSource = ::org::xml::sax::InputSource;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$MethodInfo _SourceLoader_MethodInfo_[] = {
	{"loadSource", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SourceLoader, loadSource, $InputSource*, $String*, $String*, $XSLTC*)},
	{}
};

$ClassInfo _SourceLoader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.SourceLoader",
	nullptr,
	nullptr,
	nullptr,
	_SourceLoader_MethodInfo_
};

$Object* allocate$SourceLoader($Class* clazz) {
	return $of($alloc(SourceLoader));
}

$Class* SourceLoader::load$($String* name, bool initialize) {
	$loadClass(SourceLoader, name, initialize, &_SourceLoader_ClassInfo_, allocate$SourceLoader);
	return class$;
}

$Class* SourceLoader::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com