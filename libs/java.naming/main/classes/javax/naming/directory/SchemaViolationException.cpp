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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaViolationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaViolationException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SchemaViolationException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.directory.SchemaViolationException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SchemaViolationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SchemaViolationException);
	});
	return class$;
}

$Class* SchemaViolationException::class$ = nullptr;

		} // directory
	} // naming
} // javax