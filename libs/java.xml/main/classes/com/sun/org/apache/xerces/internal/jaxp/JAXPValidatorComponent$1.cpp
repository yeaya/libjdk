#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$1.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent$DraconianErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <jcpp.h>

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
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
using $ErrorHandler = ::org::xml::sax::ErrorHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _JAXPValidatorComponent$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JAXPValidatorComponent$1, this$0)},
	{}
};

$MethodInfo _JAXPValidatorComponent$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/jaxp/JAXPValidatorComponent;)V", nullptr, 0, $method(JAXPValidatorComponent$1, init$, void, $JAXPValidatorComponent*)},
	{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $virtualMethod(JAXPValidatorComponent$1, getErrorHandler, $XMLErrorHandler*)},
	{}
};

$EnclosingMethodInfo _JAXPValidatorComponent$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent",
	"<init>",
	"(Ljavax/xml/validation/ValidatorHandler;)V"
};

$InnerClassInfo _JAXPValidatorComponent$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JAXPValidatorComponent$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent$1",
	"com.sun.org.apache.xerces.internal.util.ErrorHandlerProxy",
	nullptr,
	_JAXPValidatorComponent$1_FieldInfo_,
	_JAXPValidatorComponent$1_MethodInfo_,
	nullptr,
	&_JAXPValidatorComponent$1_EnclosingMethodInfo_,
	_JAXPValidatorComponent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.jaxp.JAXPValidatorComponent"
};

$Object* allocate$JAXPValidatorComponent$1($Class* clazz) {
	return $of($alloc(JAXPValidatorComponent$1));
}

void JAXPValidatorComponent$1::init$($JAXPValidatorComponent* this$0) {
	$set(this, this$0, this$0);
	$ErrorHandlerProxy::init$();
}

$XMLErrorHandler* JAXPValidatorComponent$1::getErrorHandler() {
	$useLocalCurrentObjectStackCache();
	$var($XMLErrorHandler, handler, $nc(this->this$0->fErrorReporter)->getErrorHandler());
	if (handler != nullptr) {
		return handler;
	}
	return $new($ErrorHandlerWrapper, $($JAXPValidatorComponent$DraconianErrorHandler::getInstance()));
}

JAXPValidatorComponent$1::JAXPValidatorComponent$1() {
}

$Class* JAXPValidatorComponent$1::load$($String* name, bool initialize) {
	$loadClass(JAXPValidatorComponent$1, name, initialize, &_JAXPValidatorComponent$1_ClassInfo_, allocate$JAXPValidatorComponent$1);
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