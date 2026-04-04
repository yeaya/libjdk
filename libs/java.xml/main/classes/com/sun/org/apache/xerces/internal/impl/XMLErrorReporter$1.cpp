#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter$1.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerProxy.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler.h>
#include <jcpp.h>

using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $ErrorHandlerProxy = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerProxy;
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
						namespace impl {

void XMLErrorReporter$1::init$($XMLErrorReporter* this$0) {
	$set(this, this$0, this$0);
	$ErrorHandlerProxy::init$();
}

$XMLErrorHandler* XMLErrorReporter$1::getErrorHandler() {
	return this->this$0->fErrorHandler;
}

XMLErrorReporter$1::XMLErrorReporter$1() {
}

$Class* XMLErrorReporter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $FINAL | $SYNTHETIC, $field(XMLErrorReporter$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, 0, $method(XMLErrorReporter$1, init$, void, $XMLErrorReporter*)},
		{"getErrorHandler", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLErrorHandler;", nullptr, $PROTECTED, $virtualMethod(XMLErrorReporter$1, getErrorHandler, $XMLErrorHandler*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter",
		"getSAXErrorHandler",
		"()Lorg/xml/sax/ErrorHandler;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter$1",
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
		"com.sun.org.apache.xerces.internal.impl.XMLErrorReporter"
	};
	$loadClass(XMLErrorReporter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLErrorReporter$1);
	});
	return class$;
}

$Class* XMLErrorReporter$1::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com