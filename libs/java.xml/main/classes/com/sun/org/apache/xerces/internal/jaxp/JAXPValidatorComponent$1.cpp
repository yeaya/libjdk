#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$1.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <jcpp.h>

using $JAXPValidatorComponent = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent;
using $JAXPValidatorComponent$DraconianErrorHandler = ::com::sun::org::apache::xerces::internal::jaxp::JAXPValidatorComponent$DraconianErrorHandler;
using $ErrorHandlerProxy = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy;
using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $XMLErrorHandler = ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

void JAXPValidatorComponent$1::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
	$ErrorHandlerProxy::init$();
}

$XMLErrorHandler* JAXPValidatorComponent$1::getErrorHandler() {
	$useLocalObjectStack();
	$var($XMLErrorHandler, handler, $nc(this->this$0->fErrorReporter)->getErrorHandler());
	if (handler != nullptr) {
		return handler;
	}
	return $new($ErrorHandlerWrapper, $($JAXPValidatorComponent$DraconianErrorHandler::getInstance()));
}

JAXPValidatorComponent$1::JAXPValidatorComponent$1() {
}

$Class* JAXPValidatorComponent$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, 0, $method(JAXPValidatorComponent$1, init$, void, $JAXPValidatorComponent*)},
		{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $virtualMethod(JAXPValidatorComponent$1, getErrorHandler, $XMLErrorHandler*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
		"<init>",
		"(Ljavax/xml/validation/ValidatorHandler;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1",
		"com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
	};
	$loadClass(JAXPValidatorComponent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JAXPValidatorComponent$1);
	});
	return class$;
}

$Class* JAXPValidatorComponent$1::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com