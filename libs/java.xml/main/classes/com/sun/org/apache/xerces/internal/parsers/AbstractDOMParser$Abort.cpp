#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>

#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

$FieldInfo _AbstractDOMParser$Abort_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDOMParser$Abort, serialVersionUID)},
	{"INSTANCE", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort;", nullptr, $STATIC | $FINAL, $staticField(AbstractDOMParser$Abort, INSTANCE)},
	{}
};

$MethodInfo _AbstractDOMParser$Abort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(AbstractDOMParser$Abort, init$, void)},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser$Abort, fillInStackTrace, $Throwable*)},
	{}
};

$InnerClassInfo _AbstractDOMParser$Abort_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort", "com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser", "Abort", $STATIC | $FINAL},
	{}
};

$ClassInfo _AbstractDOMParser$Abort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort",
	"java.lang.RuntimeException",
	nullptr,
	_AbstractDOMParser$Abort_FieldInfo_,
	_AbstractDOMParser$Abort_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDOMParser$Abort_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser"
};

$Object* allocate$AbstractDOMParser$Abort($Class* clazz) {
	return $of($alloc(AbstractDOMParser$Abort));
}

AbstractDOMParser$Abort* AbstractDOMParser$Abort::INSTANCE = nullptr;

void AbstractDOMParser$Abort::init$() {
	$RuntimeException::init$();
}

$Throwable* AbstractDOMParser$Abort::fillInStackTrace() {
	return this;
}

void clinit$AbstractDOMParser$Abort($Class* class$) {
	$assignStatic(AbstractDOMParser$Abort::INSTANCE, $new(AbstractDOMParser$Abort));
}

AbstractDOMParser$Abort::AbstractDOMParser$Abort() {
}

AbstractDOMParser$Abort::AbstractDOMParser$Abort(const AbstractDOMParser$Abort& e) : $RuntimeException(e) {
}

void AbstractDOMParser$Abort::throw$() {
	throw *this;
}

$Class* AbstractDOMParser$Abort::load$($String* name, bool initialize) {
	$loadClass(AbstractDOMParser$Abort, name, initialize, &_AbstractDOMParser$Abort_ClassInfo_, clinit$AbstractDOMParser$Abort, allocate$AbstractDOMParser$Abort);
	return class$;
}

$Class* AbstractDOMParser$Abort::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com