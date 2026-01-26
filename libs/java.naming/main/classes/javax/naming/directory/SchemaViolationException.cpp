#include <javax/naming/directory/SchemaViolationException.h>

#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _SchemaViolationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaViolationException, serialVersionUID)},
	{}
};

$MethodInfo _SchemaViolationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaViolationException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaViolationException, init$, void, $String*)},
	{}
};

$ClassInfo _SchemaViolationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.SchemaViolationException",
	"javax.naming.NamingException",
	nullptr,
	_SchemaViolationException_FieldInfo_,
	_SchemaViolationException_MethodInfo_
};

$Object* allocate$SchemaViolationException($Class* clazz) {
	return $of($alloc(SchemaViolationException));
}

void SchemaViolationException::init$() {
	$NamingException::init$();
}

void SchemaViolationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

SchemaViolationException::SchemaViolationException() {
}

SchemaViolationException::SchemaViolationException(const SchemaViolationException& e) : $NamingException(e) {
}

void SchemaViolationException::throw$() {
	throw *this;
}

$Class* SchemaViolationException::load$($String* name, bool initialize) {
	$loadClass(SchemaViolationException, name, initialize, &_SchemaViolationException_ClassInfo_, allocate$SchemaViolationException);
	return class$;
}

$Class* SchemaViolationException::class$ = nullptr;

		} // directory
	} // naming
} // javax