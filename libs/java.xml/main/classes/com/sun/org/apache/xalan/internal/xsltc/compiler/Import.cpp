#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Import.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SourceLoader.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/utils/SystemIDResolver.h>
#include <java/util/Iterator.h>
#include <javax/xml/XMLConstants.h>
#include <jdk/xml/internal/JdkConstants.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ACCESS_EXTERNAL_ALL
#undef ACCESS_EXTERNAL_STYLESHEET
#undef CIRCULAR_INCLUDE_ERR
#undef FATAL
#undef FILE_NOT_FOUND_ERR

using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SourceLoader = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SourceLoader;
using $Stylesheet = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $SystemIDResolver = ::com::sun::org::apache::xml::internal::utils::SystemIDResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $XMLConstants = ::javax::xml::XMLConstants;
using $JdkConstants = ::jdk::xml::internal::JdkConstants;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;
using $InputSource = ::org::xml::sax::InputSource;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Import_FieldInfo_[] = {
	{"_imported", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PRIVATE, $field(Import, _imported)},
	{}
};

$MethodInfo _Import_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Import, init$, void)},
	{"getImportedStylesheet", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet;", nullptr, $PUBLIC, $method(Import, getImportedStylesheet, $Stylesheet*)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Import, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Import, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Import, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Import_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Import",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_Import_FieldInfo_,
	_Import_MethodInfo_
};

$Object* allocate$Import($Class* clazz) {
	return $of($alloc(Import));
}

void Import::init$() {
	$TopLevelElement::init$();
	$set(this, _imported, nullptr);
}

$Stylesheet* Import::getImportedStylesheet() {
	return this->_imported;
}

void Import::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc(parser)->getXSLTC());
	$var($Stylesheet, context, parser->getCurrentStylesheet());
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($String, docToLoad, getAttribute("href"_s));
				if ($nc(context)->checkForLoop(docToLoad)) {
					$init($ErrorMsg);
					$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::CIRCULAR_INCLUDE_ERR, $of(docToLoad), static_cast<$SyntaxTreeNode*>(this)));
					parser->reportError($Constants::FATAL, msg);
					return$1 = true;
					goto $finally;
				}
				$var($InputSource, input, nullptr);
				$var($XMLReader, reader, nullptr);
				$var($String, currLoadedDoc, $nc(context)->getSystemId());
				$var($SourceLoader, loader, context->getSourceLoader());
				if (loader != nullptr) {
					$assign(input, loader->loadSource(docToLoad, currLoadedDoc, xsltc));
					if (input != nullptr) {
						$assign(docToLoad, input->getSystemId());
						$assign(reader, $nc(xsltc)->getXMLReader());
					} else if (parser->errorsFound()) {
						return$1 = true;
						goto $finally;
					}
				}
				if (input == nullptr) {
					$assign(docToLoad, $SystemIDResolver::getAbsoluteURI(docToLoad, currLoadedDoc));
					$init($XMLConstants);
					$init($JdkConstants);
					$var($String, accessError, $SecuritySupport::checkAccess(docToLoad, $cast($String, $($nc(xsltc)->getProperty($XMLConstants::ACCESS_EXTERNAL_STYLESHEET))), $JdkConstants::ACCESS_EXTERNAL_ALL));
					if (accessError != nullptr) {
						$init($ErrorMsg);
						$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::ACCESSING_XSLT_TARGET_ERR, $($SecuritySupport::sanitizePath(docToLoad)), accessError, this));
						parser->reportError($Constants::FATAL, msg);
						return$1 = true;
						goto $finally;
					}
					$assign(input, $new($InputSource, docToLoad));
				}
				if (input == nullptr) {
					$init($ErrorMsg);
					$var($ErrorMsg, msg, $new($ErrorMsg, $ErrorMsg::FILE_NOT_FOUND_ERR, $of(docToLoad), static_cast<$SyntaxTreeNode*>(this)));
					parser->reportError($Constants::FATAL, msg);
					return$1 = true;
					goto $finally;
				}
				$var($SyntaxTreeNode, root, nullptr);
				if (reader != nullptr) {
					$assign(root, parser->parse(reader, input));
				} else {
					$assign(root, parser->parse(input));
				}
				if (root == nullptr) {
					return$1 = true;
					goto $finally;
				}
				$set(this, _imported, parser->makeStylesheet(root));
				if (this->_imported == nullptr) {
					return$1 = true;
					goto $finally;
				}
				$nc(this->_imported)->setSourceLoader(loader);
				$nc(this->_imported)->setSystemId(docToLoad);
				$nc(this->_imported)->setParentStylesheet(context);
				$nc(this->_imported)->setImportingStylesheet(context);
				$nc(this->_imported)->setTemplateInlining(context->getTemplateInlining());
				int32_t currPrecedence = parser->getCurrentImportPrecedence();
				int32_t nextPrecedence = parser->getNextImportPrecedence();
				$nc(this->_imported)->setImportPrecedence(currPrecedence);
				context->setImportPrecedence(nextPrecedence);
				parser->setCurrentStylesheet(this->_imported);
				$nc(this->_imported)->parseContents(parser);
				$var($Iterator, elements, $nc(this->_imported)->elements());
				$var($Stylesheet, topStylesheet, parser->getTopLevelStylesheet());
				while ($nc(elements)->hasNext()) {
					$var($Object, element, elements->next());
					if ($instanceOf($TopLevelElement, element)) {
						if ($instanceOf($Variable, element)) {
							$nc(topStylesheet)->addVariable($cast($Variable, element));
						} else if ($instanceOf($Param, element)) {
							$nc(topStylesheet)->addParam($cast($Param, element));
						} else {
							$nc(topStylesheet)->addElement($cast($TopLevelElement, element));
						}
					}
				}
			} catch ($Exception& e) {
				e->printStackTrace();
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			parser->setCurrentStylesheet(context);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

$Type* Import::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::Void;
}

void Import::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

Import::Import() {
}

$Class* Import::load$($String* name, bool initialize) {
	$loadClass(Import, name, initialize, &_Import_ClassInfo_, allocate$Import);
	return class$;
}

$Class* Import::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com