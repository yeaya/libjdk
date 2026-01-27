#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Xerces.h>

#include <com/sun/org/apache/xalan/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/parsers/SAXParser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/CoroutineManager.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource_Filter.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <com/sun/org/apache/xml/internal/serialize/OutputFormat.h>
#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>
#include <com/sun/org/apache/xml/internal/utils/WrappedRuntimeException.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXNotRecognizedException.h>
#include <org/xml/sax/SAXNotSupportedException.h>
#include <org/xml/sax/XMLReader.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <jcpp.h>

#undef ER_COULD_NOT_INIT_PARSER
#undef ER_STARTPARSE_NEEDS_SAXPARSER
#undef ER_STARTPARSE_WHILE_PARSING
#undef FALSE
#undef TRUE
#undef TYPE

using $ObjectFactory = ::com::sun::org::apache::xalan::internal::utils::ObjectFactory;
using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $SAXParser = ::com::sun::org::apache::xerces::internal::parsers::SAXParser;
using $CoroutineManager = ::com::sun::org::apache::xml::internal::dtm::ref::CoroutineManager;
using $IncrementalSAXSource = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource;
using $IncrementalSAXSource_Filter = ::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource_Filter;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $BaseMarkupSerializer = ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer;
using $OutputFormat = ::com::sun::org::apache::xml::internal::serialize::OutputFormat;
using $XMLSerializer = ::com::sun::org::apache::xml::internal::serialize::XMLSerializer;
using $WrappedRuntimeException = ::com::sun::org::apache::xml::internal::utils::WrappedRuntimeException;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $ContentHandler = ::org::xml::sax::ContentHandler;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXNotRecognizedException = ::org::xml::sax::SAXNotRecognizedException;
using $SAXNotSupportedException = ::org::xml::sax::SAXNotSupportedException;
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

$CompoundAttribute _IncrementalSAXSource_Xerces_MethodAnnotations__main2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _IncrementalSAXSource_Xerces_FieldInfo_[] = {
	{"fParseSomeSetup", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fParseSomeSetup)},
	{"fParseSome", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fParseSome)},
	{"fPullParserConfig", "Ljava/lang/Object;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fPullParserConfig)},
	{"fConfigSetInput", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fConfigSetInput)},
	{"fConfigParse", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fConfigParse)},
	{"fSetInputSource", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fSetInputSource)},
	{"fConfigInputSourceCtor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", 0, $field(IncrementalSAXSource_Xerces, fConfigInputSourceCtor)},
	{"fConfigSetByteStream", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fConfigSetByteStream)},
	{"fConfigSetCharStream", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fConfigSetCharStream)},
	{"fConfigSetEncoding", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fConfigSetEncoding)},
	{"fReset", "Ljava/lang/reflect/Method;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fReset)},
	{"fIncrementalParser", "Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;", nullptr, 0, $field(IncrementalSAXSource_Xerces, fIncrementalParser)},
	{"fParseInProgress", "Z", nullptr, $PRIVATE, $field(IncrementalSAXSource_Xerces, fParseInProgress)},
	{"noparms", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IncrementalSAXSource_Xerces, noparms)},
	{"parmsfalse", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IncrementalSAXSource_Xerces, parmsfalse)},
	{}
};

$MethodInfo _IncrementalSAXSource_Xerces_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Xerces, init$, void), "java.lang.NoSuchMethodException"},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;)V", nullptr, $PUBLIC, $method(IncrementalSAXSource_Xerces, init$, void, $SAXParser*), "java.lang.NoSuchMethodException"},
	{"_main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(IncrementalSAXSource_Xerces, _main, void, $StringArray*), nullptr, nullptr, _IncrementalSAXSource_Xerces_MethodAnnotations__main2},
	{"createIncrementalSAXSource", "()Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;", nullptr, $PUBLIC | $STATIC, $staticMethod(IncrementalSAXSource_Xerces, createIncrementalSAXSource, $IncrementalSAXSource*)},
	{"createIncrementalSAXSource", "(Lcom/sun/org/apache/xerces/internal/parsers/SAXParser;)Lcom/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource;", nullptr, $PUBLIC | $STATIC, $staticMethod(IncrementalSAXSource_Xerces, createIncrementalSAXSource, $IncrementalSAXSource*, $SAXParser*)},
	{"deliverMoreNodes", "(Z)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Xerces, deliverMoreNodes, $Object*, bool)},
	{"parseSome", "()Z", nullptr, $PRIVATE, $method(IncrementalSAXSource_Xerces, parseSome, bool), "org.xml.sax.SAXException,java.io.IOException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException"},
	{"parseSomeSetup", "(Lorg/xml/sax/InputSource;)Z", nullptr, $PRIVATE, $method(IncrementalSAXSource_Xerces, parseSomeSetup, bool, $InputSource*), "org.xml.sax.SAXException,java.io.IOException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException,java.lang.InstantiationException"},
	{"setContentHandler", "(Lorg/xml/sax/ContentHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Xerces, setContentHandler, void, $ContentHandler*)},
	{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Xerces, setDTDHandler, void, $DTDHandler*)},
	{"setLexicalHandler", "(Lorg/xml/sax/ext/LexicalHandler;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Xerces, setLexicalHandler, void, $LexicalHandler*)},
	{"startParse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC, $virtualMethod(IncrementalSAXSource_Xerces, startParse, void, $InputSource*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _IncrementalSAXSource_Xerces_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource_Xerces",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource",
	_IncrementalSAXSource_Xerces_FieldInfo_,
	_IncrementalSAXSource_Xerces_MethodInfo_
};

$Object* allocate$IncrementalSAXSource_Xerces($Class* clazz) {
	return $of($alloc(IncrementalSAXSource_Xerces));
}

$ObjectArray* IncrementalSAXSource_Xerces::noparms = nullptr;
$ObjectArray* IncrementalSAXSource_Xerces::parmsfalse = nullptr;

void IncrementalSAXSource_Xerces::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$set(this, fParseSomeSetup, nullptr);
	$set(this, fParseSome, nullptr);
	$set(this, fPullParserConfig, nullptr);
	$set(this, fConfigSetInput, nullptr);
	$set(this, fConfigParse, nullptr);
	$set(this, fSetInputSource, nullptr);
	$set(this, fConfigInputSourceCtor, nullptr);
	$set(this, fConfigSetByteStream, nullptr);
	$set(this, fConfigSetCharStream, nullptr);
	$set(this, fConfigSetEncoding, nullptr);
	$set(this, fReset, nullptr);
	this->fParseInProgress = false;
	try {
		$Class* xniConfigClass = $ObjectFactory::findProviderClass("com.sun.org.apache.xerces.internal.xni.parser.XMLParserConfiguration"_s, true);
		$var($ClassArray, args1, $new($ClassArray, {xniConfigClass}));
		$load($SAXParser);
		$var($Constructor, ctor, $SAXParser::class$->getConstructor(args1));
		$Class* xniStdConfigClass = $ObjectFactory::findProviderClass("com.sun.org.apache.xerces.internal.parsers.StandardParserConfiguration"_s, true);
		$set(this, fPullParserConfig, $nc($($nc(xniStdConfigClass)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		$var($ObjectArray, args2, $new($ObjectArray, {this->fPullParserConfig}));
		$set(this, fIncrementalParser, $cast($SAXParser, $nc(ctor)->newInstance(args2)));
		$Class* fXniInputSourceClass = $ObjectFactory::findProviderClass("com.sun.org.apache.xerces.internal.xni.parser.XMLInputSource"_s, true);
		$var($ClassArray, args3, $new($ClassArray, {fXniInputSourceClass}));
		$set(this, fConfigSetInput, xniStdConfigClass->getMethod("setInputSource"_s, args3));
		$var($ClassArray, args4, $new($ClassArray, {
			$String::class$,
			$String::class$,
			$String::class$
		}));
		$set(this, fConfigInputSourceCtor, $nc(fXniInputSourceClass)->getConstructor(args4));
		$load($InputStream);
		$var($ClassArray, args5, $new($ClassArray, {$InputStream::class$}));
		$set(this, fConfigSetByteStream, fXniInputSourceClass->getMethod("setByteStream"_s, args5));
		$load($Reader);
		$var($ClassArray, args6, $new($ClassArray, {$Reader::class$}));
		$set(this, fConfigSetCharStream, fXniInputSourceClass->getMethod("setCharacterStream"_s, args6));
		$var($ClassArray, args7, $new($ClassArray, {$String::class$}));
		$set(this, fConfigSetEncoding, fXniInputSourceClass->getMethod("setEncoding"_s, args7));
		$init($Boolean);
		$var($ClassArray, argsb, $new($ClassArray, {$Boolean::TYPE}));
		$set(this, fConfigParse, xniStdConfigClass->getMethod("parse"_s, argsb));
		$var($ClassArray, noargs, $new($ClassArray, 0));
		$set(this, fReset, $nc($of(this->fIncrementalParser))->getClass()->getMethod("reset"_s, noargs));
	} catch ($Exception& e) {
		$var(IncrementalSAXSource_Xerces, dummy, $new(IncrementalSAXSource_Xerces, $$new($SAXParser)));
		$set(this, fParseSomeSetup, dummy->fParseSomeSetup);
		$set(this, fParseSome, dummy->fParseSome);
		$set(this, fIncrementalParser, dummy->fIncrementalParser);
	}
}

void IncrementalSAXSource_Xerces::init$($SAXParser* parser) {
	$beforeCallerSensitive();
	$set(this, fParseSomeSetup, nullptr);
	$set(this, fParseSome, nullptr);
	$set(this, fPullParserConfig, nullptr);
	$set(this, fConfigSetInput, nullptr);
	$set(this, fConfigParse, nullptr);
	$set(this, fSetInputSource, nullptr);
	$set(this, fConfigInputSourceCtor, nullptr);
	$set(this, fConfigSetByteStream, nullptr);
	$set(this, fConfigSetCharStream, nullptr);
	$set(this, fConfigSetEncoding, nullptr);
	$set(this, fReset, nullptr);
	this->fParseInProgress = false;
	$set(this, fIncrementalParser, parser);
	$Class* me = $nc($of(parser))->getClass();
	$load($InputSource);
	$var($ClassArray, parms, $new($ClassArray, {$InputSource::class$}));
	$set(this, fParseSomeSetup, $nc(me)->getMethod("parseSomeSetup"_s, parms));
	$assign(parms, $new($ClassArray, 0));
	$set(this, fParseSome, me->getMethod("parseSome"_s, parms));
}

$IncrementalSAXSource* IncrementalSAXSource_Xerces::createIncrementalSAXSource() {
	$init(IncrementalSAXSource_Xerces);
	$useLocalCurrentObjectStackCache();
	try {
		return $new(IncrementalSAXSource_Xerces);
	} catch ($NoSuchMethodException& e) {
		$var($IncrementalSAXSource_Filter, iss, $new($IncrementalSAXSource_Filter));
		iss->setXMLReader($$new($SAXParser));
		return iss;
	}
	$shouldNotReachHere();
}

$IncrementalSAXSource* IncrementalSAXSource_Xerces::createIncrementalSAXSource($SAXParser* parser) {
	$init(IncrementalSAXSource_Xerces);
	try {
		return $new(IncrementalSAXSource_Xerces, parser);
	} catch ($NoSuchMethodException& e) {
		$var($IncrementalSAXSource_Filter, iss, $new($IncrementalSAXSource_Filter));
		iss->setXMLReader(parser);
		return iss;
	}
	$shouldNotReachHere();
}

void IncrementalSAXSource_Xerces::setContentHandler($ContentHandler* handler) {
	$nc((static_cast<$XMLReader*>(this->fIncrementalParser)))->setContentHandler(handler);
}

void IncrementalSAXSource_Xerces::setLexicalHandler($LexicalHandler* handler) {
	try {
		$nc((static_cast<$XMLReader*>(this->fIncrementalParser)))->setProperty("http://xml.org/sax/properties/lexical-handler"_s, handler);
	} catch ($SAXNotRecognizedException& e) {
	} catch ($SAXNotSupportedException& e) {
	}
}

void IncrementalSAXSource_Xerces::setDTDHandler($DTDHandler* handler) {
	$nc((static_cast<$XMLReader*>(this->fIncrementalParser)))->setDTDHandler(handler);
}

void IncrementalSAXSource_Xerces::startParse($InputSource* source) {
	$useLocalCurrentObjectStackCache();
	if (this->fIncrementalParser == nullptr) {
		$init($XMLErrorResources);
		$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_STARTPARSE_NEEDS_SAXPARSER, nullptr)));
	}
	if (this->fParseInProgress) {
		$init($XMLErrorResources);
		$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_STARTPARSE_WHILE_PARSING, nullptr)));
	}
	bool ok = false;
	try {
		ok = parseSomeSetup(source);
	} catch ($Exception& ex) {
		$throwNew($SAXException, $cast($Exception, ex));
	}
	if (!ok) {
		$init($XMLErrorResources);
		$throwNew($SAXException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_COULD_NOT_INIT_PARSER, nullptr)));
	}
}

$Object* IncrementalSAXSource_Xerces::deliverMoreNodes(bool parsemore) {
	if (!parsemore) {
		this->fParseInProgress = false;
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	$var($Object, arg, nullptr);
	try {
		bool keepgoing = parseSome();
		$init($Boolean);
		$assign(arg, keepgoing ? $Boolean::TRUE : $Boolean::FALSE);
	} catch ($SAXException& ex) {
		$assign(arg, ex);
	} catch ($IOException& ex) {
		$assign(arg, ex);
	} catch ($Exception& ex) {
		$assign(arg, $new($SAXException, $cast($Exception, ex)));
	}
	return $of(arg);
}

bool IncrementalSAXSource_Xerces::parseSomeSetup($InputSource* source) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->fConfigSetInput != nullptr) {
		$var($ObjectArray, parms1, $new($ObjectArray, {
			$($of($nc(source)->getPublicId())),
			$($of(source->getSystemId())),
			($Object*)nullptr
		}));
		$var($Object, xmlsource, $nc(this->fConfigInputSourceCtor)->newInstance(parms1));
		$var($ObjectArray, parmsa, $new($ObjectArray, {$($of(source->getByteStream()))}));
		$nc(this->fConfigSetByteStream)->invoke(xmlsource, parmsa);
		parmsa->set(0, $(source->getCharacterStream()));
		$nc(this->fConfigSetCharStream)->invoke(xmlsource, parmsa);
		parmsa->set(0, $(source->getEncoding()));
		$nc(this->fConfigSetEncoding)->invoke(xmlsource, parmsa);
		$var($ObjectArray, noparms, $new($ObjectArray, 0));
		$nc(this->fReset)->invoke(this->fIncrementalParser, noparms);
		parmsa->set(0, xmlsource);
		$nc(this->fConfigSetInput)->invoke(this->fPullParserConfig, parmsa);
		return parseSome();
	} else {
		$var($ObjectArray, parm, $new($ObjectArray, {$of(source)}));
		$var($Object, ret, $nc(this->fParseSomeSetup)->invoke(this->fIncrementalParser, parm));
		return $nc(($cast($Boolean, ret)))->booleanValue();
	}
}

bool IncrementalSAXSource_Xerces::parseSome() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->fConfigSetInput != nullptr) {
		$var($Object, ret, ($cast($Boolean, $nc(this->fConfigParse)->invoke(this->fPullParserConfig, IncrementalSAXSource_Xerces::parmsfalse))));
		return $nc(($cast($Boolean, ret)))->booleanValue();
	} else {
		$var($Object, ret, $nc(this->fParseSome)->invoke(this->fIncrementalParser, IncrementalSAXSource_Xerces::noparms));
		return $nc(($cast($Boolean, ret)))->booleanValue();
	}
}

void IncrementalSAXSource_Xerces::_main($StringArray* args) {
	$init(IncrementalSAXSource_Xerces);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Starting..."_s);
	$var($CoroutineManager, co, $new($CoroutineManager));
	int32_t appCoroutineID = co->co_joinCoroutineSet(-1);
	if (appCoroutineID == -1) {
		$nc($System::out)->println("ERROR: Couldn\'t allocate coroutine number.\n"_s);
		return;
	}
	$var($IncrementalSAXSource, parser, createIncrementalSAXSource());
	$var($XMLSerializer, trace, nullptr);
	$assign(trace, $new($XMLSerializer, static_cast<$OutputStream*>($System::out), ($OutputFormat*)nullptr));
	$nc(parser)->setContentHandler(trace);
	parser->setLexicalHandler(trace);
	for (int32_t arg = 0; arg < $nc(args)->length; ++arg) {
		try {
			$var($InputSource, source, $new($InputSource, args->get(arg)));
			$var($Object, result, nullptr);
			bool more = true;
			parser->startParse(source);
			$init($Boolean);
			for ($assign(result, parser->deliverMoreNodes(more)); $equals(result, $Boolean::TRUE); $assign(result, parser->deliverMoreNodes(more))) {
				$nc($System::out)->println("\nSome parsing successful, trying more.\n"_s);
				if (arg + 1 < args->length && "!"_s->equals(args->get(arg + 1))) {
					++arg;
					more = false;
				}
			}
			if ($instanceOf($Boolean, result) && ($cast($Boolean, result)) == $Boolean::FALSE) {
				$nc($System::out)->println("\nParser ended (EOF or on request).\n"_s);
			} else if (result == nullptr) {
				$nc($System::out)->println("\nUNEXPECTED: Parser says shut down prematurely.\n"_s);
			} else if ($instanceOf($Exception, result)) {
				$throwNew($WrappedRuntimeException, $cast($Exception, result));
			}
		} catch ($SAXException& e) {
			e->printStackTrace();
		}
	}
}

void clinit$IncrementalSAXSource_Xerces($Class* class$) {
	$assignStatic(IncrementalSAXSource_Xerces::noparms, $new($ObjectArray, 0));
	$init($Boolean);
	$assignStatic(IncrementalSAXSource_Xerces::parmsfalse, $new($ObjectArray, {$of($Boolean::FALSE)}));
}

IncrementalSAXSource_Xerces::IncrementalSAXSource_Xerces() {
}

$Class* IncrementalSAXSource_Xerces::load$($String* name, bool initialize) {
	$loadClass(IncrementalSAXSource_Xerces, name, initialize, &_IncrementalSAXSource_Xerces_ClassInfo_, clinit$IncrementalSAXSource_Xerces, allocate$IncrementalSAXSource_Xerces);
	return class$;
}

$Class* IncrementalSAXSource_Xerces::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com