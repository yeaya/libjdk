#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
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

AbstractDOMParser$Abort* AbstractDOMParser$Abort::INSTANCE = nullptr;

void AbstractDOMParser$Abort::init$() {
	$RuntimeException::init$();
}

$Throwable* AbstractDOMParser$Abort::fillInStackTrace() {
	return this;
}

void AbstractDOMParser$Abort::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractDOMParser$Abort, serialVersionUID)},
		{"INSTANCE", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractDOMParser$Abort;", nullptr, $STATIC | $FINAL, $staticField(AbstractDOMParser$Abort, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(AbstractDOMParser$Abort, init$, void)},
		{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(AbstractDOMParser$Abort, fillInStackTrace, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort", "com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser", "Abort", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser$Abort",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.parsers.AbstractDOMParser"
	};
	$loadClass(AbstractDOMParser$Abort, name, initialize, &classInfo$$, AbstractDOMParser$Abort::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractDOMParser$Abort);
	});
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