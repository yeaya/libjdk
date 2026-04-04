#include <com/sun/beans/decoder/DocumentHandler$1.h>
#include <com/sun/beans/decoder/DocumentHandler.h>
#include <java/io/IOException.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

void DocumentHandler$1::init$($DocumentHandler* this$0, $InputSource* val$input) {
	$set(this, this$0, this$0);
	$set(this, val$input, val$input);
}

$Object* DocumentHandler$1::run() {
	$useLocalObjectStack();
	try {
		$$nc($$nc($SAXParserFactory::newInstance())->newSAXParser())->parse(this->val$input, this->this$0);
	} catch ($ParserConfigurationException& exception) {
		this->this$0->handleException(exception);
	} catch ($SAXException& wrapper) {
		$var($Exception, exception, wrapper->getException());
		if (exception == nullptr) {
			$assign(exception, wrapper);
		}
		this->this$0->handleException(exception);
	} catch ($IOException& exception) {
		this->this$0->handleException(exception);
	}
	return nullptr;
}

DocumentHandler$1::DocumentHandler$1() {
}

$Class* DocumentHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentHandler$1, this$0)},
		{"val$input", "Lorg/xml/sax/InputSource;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentHandler$1, val$input)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/decoder/DocumentHandler;Lorg/xml/sax/InputSource;)V", "()V", 0, $method(DocumentHandler$1, init$, void, $DocumentHandler*, $InputSource*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(DocumentHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.beans.decoder.DocumentHandler",
		"parse",
		"(Lorg/xml/sax/InputSource;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.decoder.DocumentHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.beans.decoder.DocumentHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.decoder.DocumentHandler"
	};
	$loadClass(DocumentHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentHandler$1);
	});
	return class$;
}

$Class* DocumentHandler$1::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com