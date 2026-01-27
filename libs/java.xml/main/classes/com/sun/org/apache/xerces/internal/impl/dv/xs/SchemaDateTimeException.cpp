#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDateTimeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _SchemaDateTimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SchemaDateTimeException, serialVersionUID)},
	{}
};

$MethodInfo _SchemaDateTimeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaDateTimeException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaDateTimeException, init$, void, $String*)},
	{}
};

$ClassInfo _SchemaDateTimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDateTimeException",
	"java.lang.RuntimeException",
	nullptr,
	_SchemaDateTimeException_FieldInfo_,
	_SchemaDateTimeException_MethodInfo_
};

$Object* allocate$SchemaDateTimeException($Class* clazz) {
	return $of($alloc(SchemaDateTimeException));
}

void SchemaDateTimeException::init$() {
	$RuntimeException::init$();
}

void SchemaDateTimeException::init$($String* s) {
	$RuntimeException::init$(s);
}

SchemaDateTimeException::SchemaDateTimeException() {
}

SchemaDateTimeException::SchemaDateTimeException(const SchemaDateTimeException& e) : $RuntimeException(e) {
}

void SchemaDateTimeException::throw$() {
	throw *this;
}

$Class* SchemaDateTimeException::load$($String* name, bool initialize) {
	$loadClass(SchemaDateTimeException, name, initialize, &_SchemaDateTimeException_ClassInfo_, allocate$SchemaDateTimeException);
	return class$;
}

$Class* SchemaDateTimeException::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com