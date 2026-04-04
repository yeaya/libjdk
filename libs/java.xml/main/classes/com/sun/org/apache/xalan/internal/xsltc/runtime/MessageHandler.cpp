#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>
#include <javax/xml/transform/ErrorListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void MessageHandler::init$() {
}

void MessageHandler::displayMessage($String* msg) {
	$nc($System::err)->println(msg);
}

$ErrorListener* MessageHandler::getErrorListener() {
	return nullptr;
}

MessageHandler::MessageHandler() {
}

$Class* MessageHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MessageHandler, init$, void)},
		{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(MessageHandler, displayMessage, void, $String*)},
		{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC, $virtualMethod(MessageHandler, getErrorListener, $ErrorListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.MessageHandler",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MessageHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MessageHandler);
	});
	return class$;
}

$Class* MessageHandler::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com