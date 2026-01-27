#include <com/sun/org/apache/xml/internal/dtm/ref/CoroutineParser.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/CoroutineManager.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

using $CoroutineManager = ::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $XMLReader = ::org::xml::sax::XMLReader;
using $LexicalHandler = ::org::xml::sax::ext::LexicalHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$CompoundAttribute _CoroutineParser_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _CoroutineParser_MethodInfo_[] = {
	{"doMore", "(ZI)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, doMore, $Object*, bool, int32_t)},
	{"doParse", "(Lorg/xml/sax/InputSource;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, doParse, $Object*, $InputSource*, int32_t)},
	{"doTerminate", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, doTerminate, void, int32_t)},
	{"getCoroutineManager", "()Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, getCoroutineManager, $CoroutineManager*)},
	{"getParserCoroutineID", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, getParserCoroutineID, int32_t)},
	{"init", "(Lcom/sun/org/apache/xml/internal/dtm/ref/CoroutineManager;ILorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, init, void, $CoroutineManager*, int32_t, $XMLReader*)},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, setContentHandler, void, $ContentHandler*)},
	{"setLexHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CoroutineParser, setLexHandler, void, $LexicalHandler*)},
	{}
};

$ClassInfo _CoroutineParser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.CoroutineParser",
	nullptr,
	nullptr,
	nullptr,
	_CoroutineParser_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CoroutineParser_Annotations_
};

$Object* allocate$CoroutineParser($Class* clazz) {
	return $of($alloc(CoroutineParser));
}

$Class* CoroutineParser::load$($String* name, bool initialize) {
	$loadClass(CoroutineParser, name, initialize, &_CoroutineParser_ClassInfo_, allocate$CoroutineParser);
	return class$;
}

$Class* CoroutineParser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com