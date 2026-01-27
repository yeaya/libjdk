#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl$MessageHandler.h>

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>
#include <com/sun/org/apache/xalan/internal/xsltc/trax/TransformerImpl.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $MessageHandler = ::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

$FieldInfo _TransformerImpl$MessageHandler_FieldInfo_[] = {
	{"_errorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(TransformerImpl$MessageHandler, _errorListener)},
	{}
};

$MethodInfo _TransformerImpl$MessageHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(TransformerImpl$MessageHandler, init$, void, $ErrorListener*)},
	{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TransformerImpl$MessageHandler, displayMessage, void, $String*)},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC, $virtualMethod(TransformerImpl$MessageHandler, getErrorListener, $ErrorListener*)},
	{}
};

$InnerClassInfo _TransformerImpl$MessageHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl$MessageHandler", "com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl", "MessageHandler", $STATIC},
	{}
};

$ClassInfo _TransformerImpl$MessageHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl$MessageHandler",
	"com.sun.org.apache.xalan.internal.xsltc.runtime.MessageHandler",
	nullptr,
	_TransformerImpl$MessageHandler_FieldInfo_,
	_TransformerImpl$MessageHandler_MethodInfo_,
	nullptr,
	nullptr,
	_TransformerImpl$MessageHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl"
};

$Object* allocate$TransformerImpl$MessageHandler($Class* clazz) {
	return $of($alloc(TransformerImpl$MessageHandler));
}

void TransformerImpl$MessageHandler::init$($ErrorListener* errorListener) {
	$MessageHandler::init$();
	$set(this, _errorListener, errorListener);
}

void TransformerImpl$MessageHandler::displayMessage($String* msg) {
	if (this->_errorListener == nullptr) {
		$nc($System::err)->println(msg);
	} else {
		try {
			$nc(this->_errorListener)->warning($$new($TransformerException, msg));
		} catch ($TransformerException& e) {
		}
	}
}

$ErrorListener* TransformerImpl$MessageHandler::getErrorListener() {
	return this->_errorListener;
}

TransformerImpl$MessageHandler::TransformerImpl$MessageHandler() {
}

$Class* TransformerImpl$MessageHandler::load$($String* name, bool initialize) {
	$loadClass(TransformerImpl$MessageHandler, name, initialize, &_TransformerImpl$MessageHandler_ClassInfo_, allocate$TransformerImpl$MessageHandler);
	return class$;
}

$Class* TransformerImpl$MessageHandler::class$ = nullptr;

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com