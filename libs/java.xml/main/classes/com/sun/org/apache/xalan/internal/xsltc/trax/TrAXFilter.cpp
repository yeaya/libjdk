#include <com/sun/org/apache/xalan/internal/xsltc/trax/TrAXFilter.h>

#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <com/sun/org/apache/xml/internal/utils/XMLReaderManager.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/sax/SAXResult.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <jdk/xml/internal/JdkXmlUtils.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/helpers/XMLFilterImpl.h>
#include <jcpp.h>

using $TransformerHandlerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl;
using $TransformerImpl = ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl;
using $XMLReaderManager = ::com::sun::org::apache::xml::internal::utils::XMLReaderManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Result = ::javax::xml::transform::Result;
using $Templates = ::javax::xml::transform::Templates;
using $Transformer = ::javax::xml::transform::Transformer;
using $SAXResult = ::javax::xml::transform::sax::SAXResult;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $JdkXmlUtils = ::jdk::xml::internal::JdkXmlUtils;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;
using $XMLFilterImpl = ::org::xml::sax::helpers::XMLFilterImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TrAXFilter_FieldInfo_[] = {
	{"_templates", "Ljavax/xml/transform/Templates;", nullptr, $PRIVATE, $field(TrAXFilter, _templates)},
	{"_transformer", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl;", nullptr, $PRIVATE, $field(TrAXFilter, _transformer)},
	{"_transformerHandler", "Lcom/sun/org/apache/xalan/internal/xsltc/trax/TransformerHandlerImpl;", nullptr, $PRIVATE, $field(TrAXFilter, _transformerHandler)},
	{"_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(TrAXFilter, _overrideDefaultParser)},
	{}
};

$MethodInfo _TrAXFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/transform/Templates;)V", nullptr, $PUBLIC, $method(TrAXFilter, init$, void, $Templates*), "javax.xml.transform.TransformerConfigurationException"},
	{"createParent", "()V", nullptr, $PRIVATE, $method(TrAXFilter, createParent, void), "org.xml.sax.SAXException"},
	{"getTransformer", "()Ljavax/xml/transform/Transformer;", nullptr, $PUBLIC, $virtualMethod(TrAXFilter, getTransformer, $Transformer*)},
	{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(TrAXFilter, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TrAXFilter, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(TrAXFilter, setContentHandler, void, $ContentHandler*)},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $virtualMethod(TrAXFilter, setErrorListener, void, $ErrorListener*)},
	{}
};

$ClassInfo _TrAXFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TrAXFilter",
	"org.xml.sax.helpers.XMLFilterImpl",
	nullptr,
	_TrAXFilter_FieldInfo_,
	_TrAXFilter_MethodInfo_
};

$Object* allocate$TrAXFilter($Class* clazz) {
	return $of($alloc(TrAXFilter));
}

void TrAXFilter::init$($Templates* templates) {
	$XMLFilterImpl::init$();
	$set(this, _templates, templates);
	$set(this, _transformer, $cast($TransformerImpl, $nc(templates)->newTransformer()));
	$set(this, _transformerHandler, $new($TransformerHandlerImpl, this->_transformer));
	this->_overrideDefaultParser = $nc(this->_transformer)->overrideDefaultParser();
}

$Transformer* TrAXFilter::getTransformer() {
	return this->_transformer;
}

void TrAXFilter::createParent() {
	$var($XMLReader, parent, $JdkXmlUtils::getXMLReader(this->_overrideDefaultParser, $nc(this->_transformer)->isSecureProcessing()));
	setParent(parent);
}

void TrAXFilter::parse($InputSource* input) {
	$useLocalCurrentObjectStackCache();
	$var($XMLReader, managedReader, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (getParent() == nullptr) {
				try {
					$assign(managedReader, $nc($($XMLReaderManager::getInstance(this->_overrideDefaultParser)))->getXMLReader());
					setParent(managedReader);
				} catch ($SAXException& e) {
					$throwNew($SAXException, $(e->toString()));
				}
			}
			$nc($(getParent()))->parse(input);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (managedReader != nullptr) {
				$nc($($XMLReaderManager::getInstance(this->_overrideDefaultParser)))->releaseXMLReader(managedReader);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TrAXFilter::parse($String* systemId) {
	parse($$new($InputSource, systemId));
}

void TrAXFilter::setContentHandler($ContentHandler* handler) {
	$useLocalCurrentObjectStackCache();
	$nc(this->_transformerHandler)->setResult($$new($SAXResult, handler));
	if (getParent() == nullptr) {
		try {
			createParent();
		} catch ($SAXException& e) {
			return;
		}
	}
	$nc($(getParent()))->setContentHandler(this->_transformerHandler);
}

void TrAXFilter::setErrorListener($ErrorListener* handler) {
}

TrAXFilter::TrAXFilter() {
}

$Class* TrAXFilter::load$($String* name, bool initialize) {
	$loadClass(TrAXFilter, name, initialize, &_TrAXFilter_ClassInfo_, allocate$TrAXFilter);
	return class$;
}

$Class* TrAXFilter::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com